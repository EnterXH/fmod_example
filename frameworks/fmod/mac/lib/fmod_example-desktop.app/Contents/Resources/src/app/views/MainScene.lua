
local MainScene = class("MainScene", cc.load("mvc").ViewBase)

function MainScene:onCreate()
    -- add background image
    display.newSprite("HelloWorld.png")
        :move(display.center)
        :addTo(self)

    -- add HelloWorld label
    cc.Label:createWithSystemFont("Hello World", "Arial", 40)
        :move(display.cx, display.cy + 200)
        :addTo(self)

    local button = ccui.Button:create("res/forum.png")
    self:addChild(button, 10)
    button:setPosition(100, 100)
    button:addTouchEventListener( function(sender, eventType)
        if eventType == TOUCH_EVENT_ENDED then
        	print("文件是否存在 = ", cc.FileUtils:getInstance():isFileExist("res/sound/dabusi_special1.mp3"))
            FmodSound:getInstance():playSound("res/sound/dabusi_special1.mp3", false, 1.0);
        end
    end)
end

return MainScene
