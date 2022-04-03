package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;

class Player extends FlxSprite
{
	static inline var SPEED:Float = 200;

	public function new(x:Float = 0, y:Float = 0)
	{
		super(x, y);
		loadGraphic("assets/images/ldjam50_sheet.png", true, 16, 16);
		animation.add("l", [1, 9, 5, 9], 6, false);
		animation.add("r", [3, 11, 7, 11], 6, false);
		animation.add("u", [0, 8, 4, 8], 6, false);
		animation.add("d", [2, 10, 6, 10], 6, false);
		drag.x = drag.y = 1600;
		setSize(10, 10);
		offset.set(3, 3);
	}

	function updateMovement()
	{
		var up:Bool = false;
		var down:Bool = false;
		var left:Bool = false;
		var right:Bool = false;
		up = FlxG.keys.anyPressed([UP, W]);
		down = FlxG.keys.anyPressed([DOWN, S]);
		left = FlxG.keys.anyPressed([LEFT, A]);
		right = FlxG.keys.anyPressed([RIGHT, D]);
		if (up && down)
			up = down = false;
		if (left && right)
			left = right = false;
		if (up || down || left || right)
		{
			var newAngle:Float = 0;
			if (up)
			{
				newAngle = -90;
				if (left)
					newAngle -= 45;
				else if (right)
					newAngle += 45;
				facing = UP;
			}
			else if (down)
			{
				newAngle = 90;
				if (left)
					newAngle += 45;
				else if (right)
					newAngle -= 45;
				facing = DOWN;
			}
			else if (left)
			{
				newAngle = 180;
				facing = LEFT;
			}
			else if (right)
			{
				newAngle = 0;
				facing = RIGHT;
			}
			velocity.set(SPEED, 0);
			velocity.rotate(FlxPoint.weak(0, 0), newAngle);
			if ((velocity.x != 0 || velocity.y != 0) && touching == NONE)
			{
				switch (facing)
				{
					case LEFT:
						animation.play("l");
					case RIGHT:
						animation.play("r");
					case UP:
						animation.play("u");
					case DOWN:
						animation.play("d");
					case _:
				}
			}
		}
	}

	override function update(elapsed:Float)
	{
		updateMovement();
		super.update(elapsed);
	}
}
