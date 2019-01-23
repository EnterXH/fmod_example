#ifndef FmodSound_hpp
#define FmodSound_hpp

#include "cocos2d.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include "windows/inc/fmod.hpp"
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "ios/inc/fmod.hpp"
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
#include "mac/inc/fmod.hpp"
#endif
class FmodSound : public cocos2d::Ref
{
public:
    static FmodSound * getInstance();
    FmodSound();
    void playSound(std::string filename, bool loop, float volume);
	void setSoundVolume(float volume);
	void stopSoundByName(std::string filename);
	void stopAllSound();
	void playMusic(std::string filename, bool isloop);
	void stopMusic();
	void preloadSound(std::string filename);

	void update(float dt);
private:
	bool init();

private:
    static FmodSound * _instance;
    float _music_volume;
    
    FMOD::System *system;

    /* sound */
    std::map<std::string, FMOD::Sound *> _sounds;
    std::map<std::string, FMOD::Channel *> _loop_sounds;

    /* background */
    FMOD::Sound * _music;
    FMOD::Channel * _music_channel;
};

#endif /* FmodSound_hpp */
