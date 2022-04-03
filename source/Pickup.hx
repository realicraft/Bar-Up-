package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class Pickup extends FlxSprite
{
	public var pickup_type = 0;

	public function new(x:Float, y:Float, t:Int)
	{
		pickup_type = t;
		super(x, y);
		loadGraphic("assets/images/ldjam50_sheet.png", true, 16, 16);
		animation.add("w", [12, 12], 30, false);
		animation.add("m", [13, 13], 30, false);
		animation.add("d", [14, 14], 30, false);
		animation.add("s", [15, 15], 30, false);
	}

	function animate()
	{
		switch (pickup_type)
		{
			case 0:
				animation.play("w");
			case 1:
				animation.play("m");
			case 2:
				animation.play("d");
			case 3:
				animation.play("s");
			case _:
		}
	}

	override function update(elapsed:Float)
	{
		animate();
		super.update(elapsed);
	}

	override function kill()
	{
		alive = false;
		if (pickup_type != 3)
		{
			FlxTween.tween(this, {alpha: 0, y: y - 16}, 0.33, {ease: FlxEase.circOut, onComplete: finishKill});
		}
		else
		{
			FlxTween.tween(this, {alpha: 0, y: y + 16}, 0.33, {ease: FlxEase.circOut, onComplete: finishKill});
		}
	}

	function finishKill(_)
	{
		exists = false;
	}
}
