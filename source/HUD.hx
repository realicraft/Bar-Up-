package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class HUD extends FlxTypedGroup<FlxSprite>
{
	var playState:PlayState;

	var border:FlxSprite;
	var woodCounter:FlxText;
	var metalCounter:FlxText;
	var diamondCounter:FlxText;
	var timeCounter:FlxText;
	var bar_bar:FlxBar;

	var upgrade1_button:FlxButton;
	var upgrade2_button:FlxButton;
	var upgrade3_button:FlxButton;
	var upgrade4_button:FlxButton;

	var upg1_bought:Int = 0;
	var upg2_bought:Int = 0;
	var upg3_bought:Int = 0;
	var upg4_bought:Int = 0;

	public function new()
	{
		super();
		border = new FlxSprite(0, 0, "assets/images/ldjam50_ui_border.png");
		woodCounter = new FlxText(76, 8, 0, "0", 8);
		metalCounter = new FlxText(108, 8, 0, "0", 8);
		diamondCounter = new FlxText(140, 8, 0, "0", 8);
		timeCounter = new FlxText(188, 8, 0, "0:00.00", 8);
		add(border);
		add(woodCounter);
		add(metalCounter);
		add(diamondCounter);
		add(timeCounter);
		bar_bar = new FlxBar(24.0, 24.0, BOTTOM_TO_TOP, 16, 192, "", "", 0.0, 10000.0);
		bar_bar.createFilledBar(0x00000000, 0xff00ff00);
		bar_bar.numDivisions = 1000;
		add(bar_bar);

		upgrade1_button = new FlxButton(62, 212, "Upgrade 1", upgrade1);
		upgrade2_button = new FlxButton(116, 212, "Upgrade 2", upgrade2);
		upgrade3_button = new FlxButton(170, 212, "Upgrade 3", upgrade3);
		upgrade4_button = new FlxButton(224, 212, "Upgrade 4", upgrade4);
		upgrade1_button.loadGraphic("assets/images/ldjam50_ui_button.png", true, 52, 24);
		upgrade2_button.loadGraphic("assets/images/ldjam50_ui_button.png", true, 52, 24);
		upgrade3_button.loadGraphic("assets/images/ldjam50_ui_button.png", true, 52, 24);
		upgrade4_button.loadGraphic("assets/images/ldjam50_ui_button.png", true, 52, 24);
		add(upgrade1_button);
		add(upgrade2_button);
		add(upgrade3_button);
		add(upgrade4_button);

		forEach(function(sprite) sprite.scrollFactor.set(0, 0));
	}

	function upgrade1()
	{
		upg1_bought++;
		FlxG.log.notice("Bought upgrade 1");
	}

	function upgrade2()
	{
		upg2_bought++;
		FlxG.log.notice("Bought upgrade 2");
	}

	function upgrade3()
	{
		upg3_bought++;
		FlxG.log.notice("Bought upgrade 3");
	}

	function upgrade4()
	{
		upg4_bought++;
		FlxG.log.notice("Bought upgrade 4");
	}

	public function upgradesBought()
	{
		var upg_assembled = [upg1_bought, upg2_bought, upg3_bought, upg4_bought];
		upg1_bought = upg2_bought = upg3_bought = upg4_bought = 0;
		return upg_assembled;
	}

	public function updateHUD(wood:Int, metal:Int, diamond:Int, time:Int, bar_val:Float)
	{
		woodCounter.text = Std.string(wood);
		metalCounter.text = Std.string(metal);
		diamondCounter.text = Std.string(diamond);
		timeCounter.text = Math.floor(time / 3600)
			+ ":"
			+ StringTools.lpad(Std.string(Math.floor((time % 3600) / 60)), "0", 2)
			+ "."
			+ StringTools.lpad(Std.string(Math.floor(time % 60)), "0", 2);
		bar_bar.value = bar_val;
	}
}
