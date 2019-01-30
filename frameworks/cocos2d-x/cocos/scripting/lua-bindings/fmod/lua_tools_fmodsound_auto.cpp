#include "scripting/lua-bindings/fmod/lua_tools_fmodsound_auto.hpp"
#include "../../fmod/FmodSound.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_FmodSound_FmodSound_stopMusic(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_stopMusic'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_stopMusic'", nullptr);
            return 0;
        }
        cobj->stopMusic();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:stopMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_stopMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_stopAllSound(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_stopAllSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_stopAllSound'", nullptr);
            return 0;
        }
        cobj->stopAllSound();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:stopAllSound",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_stopAllSound'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_update(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "FmodSound:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_update'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_setSoundVolume(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_setSoundVolume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "FmodSound:setSoundVolume");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_setSoundVolume'", nullptr);
            return 0;
        }
        cobj->setSoundVolume(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:setSoundVolume",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_setSoundVolume'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_preloadSound(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_preloadSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FmodSound:preloadSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_preloadSound'", nullptr);
            return 0;
        }
        cobj->preloadSound(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:preloadSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_preloadSound'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_playMusic(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_playMusic'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FmodSound:playMusic");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "FmodSound:playMusic");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_playMusic'", nullptr);
            return 0;
        }
        cobj->playMusic(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:playMusic",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_playMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_resumeBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_resumeBackgroundMusic'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_resumeBackgroundMusic'", nullptr);
            return 0;
        }
        cobj->resumeBackgroundMusic();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:resumeBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_resumeBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_resumeAllSound(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_resumeAllSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_resumeAllSound'", nullptr);
            return 0;
        }
        cobj->resumeAllSound();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:resumeAllSound",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_resumeAllSound'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_playSound(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_playSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string arg0;
        bool arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FmodSound:playSound");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "FmodSound:playSound");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "FmodSound:playSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_playSound'", nullptr);
            return 0;
        }
        cobj->playSound(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:playSound",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_playSound'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_pauseBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_pauseBackgroundMusic'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_pauseBackgroundMusic'", nullptr);
            return 0;
        }
        cobj->pauseBackgroundMusic();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:pauseBackgroundMusic",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_pauseBackgroundMusic'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_stopSoundByName(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_stopSoundByName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FmodSound:stopSoundByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_stopSoundByName'", nullptr);
            return 0;
        }
        cobj->stopSoundByName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:stopSoundByName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_stopSoundByName'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_pauseAllSound(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FmodSound*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_FmodSound_FmodSound_pauseAllSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_pauseAllSound'", nullptr);
            return 0;
        }
        cobj->pauseAllSound();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:pauseAllSound",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_pauseAllSound'.",&tolua_err);
#endif

    return 0;
}
int lua_FmodSound_FmodSound_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"FmodSound",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_getInstance'", nullptr);
            return 0;
        }
        FmodSound* ret = FmodSound::getInstance();
        object_to_luaval<FmodSound>(tolua_S, "FmodSound",(FmodSound*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "FmodSound:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_getInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_FmodSound_FmodSound_constructor(lua_State* tolua_S)
{
    int argc = 0;
    FmodSound* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_FmodSound_FmodSound_constructor'", nullptr);
            return 0;
        }
        cobj = new FmodSound();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"FmodSound");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FmodSound:FmodSound",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_FmodSound_FmodSound_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_FmodSound_FmodSound_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FmodSound)");
    return 0;
}

int lua_register_FmodSound_FmodSound(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FmodSound");
    tolua_cclass(tolua_S,"FmodSound","FmodSound","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"FmodSound");
        tolua_function(tolua_S,"new",lua_FmodSound_FmodSound_constructor);
        tolua_function(tolua_S,"stopMusic",lua_FmodSound_FmodSound_stopMusic);
        tolua_function(tolua_S,"stopAllSound",lua_FmodSound_FmodSound_stopAllSound);
        tolua_function(tolua_S,"update",lua_FmodSound_FmodSound_update);
        tolua_function(tolua_S,"setSoundVolume",lua_FmodSound_FmodSound_setSoundVolume);
        tolua_function(tolua_S,"preloadSound",lua_FmodSound_FmodSound_preloadSound);
        tolua_function(tolua_S,"playMusic",lua_FmodSound_FmodSound_playMusic);
        tolua_function(tolua_S,"resumeBackgroundMusic",lua_FmodSound_FmodSound_resumeBackgroundMusic);
        tolua_function(tolua_S,"resumeAllSound",lua_FmodSound_FmodSound_resumeAllSound);
        tolua_function(tolua_S,"playSound",lua_FmodSound_FmodSound_playSound);
        tolua_function(tolua_S,"pauseBackgroundMusic",lua_FmodSound_FmodSound_pauseBackgroundMusic);
        tolua_function(tolua_S,"stopSoundByName",lua_FmodSound_FmodSound_stopSoundByName);
        tolua_function(tolua_S,"pauseAllSound",lua_FmodSound_FmodSound_pauseAllSound);
        tolua_function(tolua_S,"getInstance", lua_FmodSound_FmodSound_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(FmodSound).name();
    g_luaType[typeName] = "FmodSound";
    g_typeCast["FmodSound"] = "FmodSound";
    return 1;
}
TOLUA_API int register_all_FmodSound(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,nullptr,0);
	tolua_beginmodule(tolua_S,nullptr);

	lua_register_FmodSound_FmodSound(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

