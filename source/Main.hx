package;

import flixel.FlxG;
import flixel.FlxGame;
import flixel.graphics.tile.FlxDrawBaseItem;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(320, 240, MenuState));
	}
}
