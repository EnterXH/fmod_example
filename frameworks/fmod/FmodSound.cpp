#include "FmodSound.hpp"
USING_NS_CC;
FmodSound::FmodSound()
{
	_music_volume = 1.0;

    // Initialize FMOD
    FMOD::System_Create(&system);
    system->init(64, FMOD_INIT_NORMAL, nullptr);
}

FmodSound * FmodSound::_instance = nullptr;
FmodSound* FmodSound::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = new FmodSound();
		_instance->init();
    }
    return _instance;
}

bool FmodSound::init()
{
	Director::getInstance()->getScheduler()->scheduleUpdate(this, 0, false);
	return true;
}

const char *FmodSound::getFullPathFileName(std::string filename)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    char *filePath = (char *)calloc(256, sizeof(char));
    strcat(filePath, "file:///android_asset/");
    strcat(filePath, filename.c_str());
#else
    const char * filePath = FileUtils::getInstance()->fullPathForFilename(filename).c_str();
#endif
    return filePath;
}

void FmodSound::preloadSound(std::string filename)
{
	CCLOG("preloadSound %s", filename.c_str());
	if (_sounds.count(filename) <= 0)
	{
        // Create sound instance from a file
		FMOD::Sound * sound;
		const char * path = getFullPathFileName(filename.c_str());
		system->createSound(path, FMOD_DEFAULT, 0, &sound);
		_sounds.insert(std::pair<std::string, FMOD::Sound*>(filename, sound));
	}
}

void FmodSound::playSound(std::string filename, bool loop, float volume)
{
	preloadSound(filename);
	if (_sounds.count(filename) <= 0)
		return;
	FMOD::Sound * sound = _sounds[filename];
	if (loop)
	{
		sound->setMode(FMOD_LOOP_NORMAL);
	}
	else
	{
		sound->setMode(FMOD_DEFAULT);
	}
	FMOD::Channel *channel = 0;
	system->playSound(sound, 0, false, &channel);
	channel->setVolume(volume);
	_loop_sounds[filename] = channel;
}

void FmodSound::stopSoundByName(std::string filename)
{
	if (_loop_sounds.count(filename) > 0)
	{
		_loop_sounds[filename]->stop();
	}
}

void FmodSound::stopAllSound()
{
	for (auto iter : _loop_sounds)
	{
		iter.second->stop();
		_loop_sounds[iter.first] = NULL;
	}
	_loop_sounds.clear();
}

// background music
void FmodSound::playMusic(std::string filename, bool isloop)
{
	_music_channel->stop();
	_music->release();
    const char * path = getFullPathFileName(filename.c_str());
	if (isloop)
	{
		system->createStream(path, FMOD_LOOP_NORMAL, 0, &_music);
	}
	else
	{
		system->createStream(path, FMOD_DEFAULT, 0, &_music);
	}
	_music_channel = 0;
	system->playSound(_music, 0, false, &_music_channel);
	_music_channel->setVolume(_music_volume);
}

void FmodSound::stopMusic()
{
	_music_channel->stop();
	_music->release();
}

void FmodSound::setSoundVolume(float volume)
{
	_music_volume = volume;
	_music_channel->setVolume(volume);
}

void FmodSound::update(float dt)
{
	system->update();
}
