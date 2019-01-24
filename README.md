# <center> Cocos集成FMOD音效 </center>
### ====================================================
- cocos: cocos2d-x-3.17.1
- <p>FMOD官网 <a href="https://www.fmod.com">https://www.fmod.com</a></p>
- <p>FMOD下载地址 <a href="https://www.fmod.com/download">https://www.fmod.com/download</a></p>

### 集成
	首先下载对应的api
### macOS
* 1.把`api/lowlevel/lib/`下的`libfmod.dylib` 和 `api/lowlevel/inc`下的代码添加项目中
* 2.项目配置把`libfmod.dylib`所在的路径添加到`build settings`下的`Per-configuration Build Products Path`中

### IOS
* 1.把`api/lowlevel/lib/`下的`.a` 和 `api/lowlevel/inc`下的代码添加项目中
* 2.项目配置把静态库`.a`所在的路径添加到`build settings`下的`Library Search Paths`中，头文件的路径添加到`build settings`下的`Header Search Paths`中

### Windows
* 1.把`api/lowlevel/lib/`下的`.a` 和 `api/lowlevel/inc`下的代码添加项目中
* 2.右键点击工程，最下边找到`属性`，`属性配置`下找到`C/C++`，然后点击`常规`,在附加包含目录中添加刚才添加的`inc`下的代码的目录。（release和debug）都要加
* 3.在`C/C++`平级的列表中找到`链接器`，点击`常规`，在右侧`附加库目录`中添加刚才添加的`lib`目录（release和debug）都要加，在`常规`平级列表中找到`输入`，然后在`附加依赖项`中`debug`下添加`fmodL_vc.lib，fmodL64_vc.lib`，`release`下添加`fmod_vc.lib，fmod64_vc.lib`


#### 在lua中使用
打开 `frameworks/cocos2d-x/tools/tolua/` 仿着写一个导出文件 <.ini and .py>导出c++ to lua

###### 注意
cocos tolua 需要使用cocos版本对应的android-ndk，对应关系查看cocos官网


### 简单使用

~~~ 伪代码
//初始化FMOD系统
FMOD::System *system;
FMOD::System_Create(&system); 
system->init(maxchannels, FMOD_INIT_NORMAL, nullptr); // maxchannels表示最大channel数量（可同时播放的音效数量）

//创建音效的实例
FMOD::Sound * sound;
system->createSound(filename, FMOD_DEFAULT, 0, &sound); // 第二个参数根据使用环境不同选择不同的枚举

// 播放上边创建的音效
FMOD::Channel *channel = 0;
system->playSound(sound, 0, false, &channel);

//设置不同属性（音量，模式等）
channel->setVolume(volume);
channel->setMode(FMOD_DEFAULT);
~~~

###示例工程
在 `frameworks/fmod`中的FmodSound类，简单实现了背景音乐和播放音效的基础方法

~~~
    void playSound(std::string filename, bool loop, float volume);
	void setSoundVolume(float volume);
	void stopSoundByName(std::string filename);
	void stopAllSound();
	void playMusic(std::string filename, bool isloop);
	void stopMusic();
	void preloadSound(std::string filename);
~~~



