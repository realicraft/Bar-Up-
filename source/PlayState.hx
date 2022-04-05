package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmo3Loader;
import flixel.addons.ui.FlxButtonPlus;
import flixel.addons.ui.FlxUIButton;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxRandom;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import haxe.Timer;

class PlayState extends FlxState
{
	var player:Player;
	var map:FlxOgmo3Loader;
	var walls:FlxTilemap;
	var runtime_timer = new Timer(17);
	var runtime:Int = 0;
	var pickups:FlxTypedGroup<Pickup>;
	var rng:FlxRandom;
	var hud:HUD;

	var wood:Int = 0;
	var metal:Int = 0;
	var diamond:Int = 0;

	public var bar:Float = 10000.0;
	public var barSpeed:Float = 0.1;
	public var playerSpeed:Float = 200;
	public var pickupSpeed:Float = 120;

	var sound_d1:FlxSound;
	var sound_d2:FlxSound;
	var sound_d3:FlxSound;
	var sound_h1:FlxSound;
	var sound_h2:FlxSound;
	var sound_h3:FlxSound;
	var sound_p1:FlxSound;
	var sound_p2:FlxSound;
	var sound_p3:FlxSound;
	var sound_q1:FlxSound;
	var sound_q2:FlxSound;
	var sound_q3:FlxSound;
	var sound_u1:FlxSound;
	var sound_u2:FlxSound;
	var sound_u3:FlxSound;

	var upg_bought:Array<Int>;

	override public function create()
	{
		FlxG.watch.add(this, "wood");
		FlxG.watch.add(this, "metal");
		FlxG.watch.add(this, "diamond");
		FlxG.watch.add(this, "bar");
		FlxG.watch.add(this, "barSpeed");
		FlxG.watch.add(this, "playerSpeed");
		FlxG.watch.add(this, "pickupSpeed");
		FlxG.drawFramerate = 60;
		runtime_timer.run = function()
		{
			runtime++;
		}
		rng = new FlxRandom();
		map = new FlxOgmo3Loader("assets/data/ldjam50.ogmo", "assets/data/main-map.json");
		walls = map.loadTilemap("assets/images/ldjam50_tiles.png", "walls");
		walls.scale.x = 1;
		walls.scale.y = 1;
		walls.follow();
		walls.setTileProperties(0, ANY);
		walls.setTileProperties(1, NONE);
		walls.setTileProperties(2, NONE);
		walls.setTileProperties(3, NONE);
		walls.setTileProperties(4, NONE);
		walls.setTileProperties(5, NONE);
		walls.setTileProperties(6, NONE);
		walls.setTileProperties(7, NONE);
		walls.setTileProperties(8, NONE);
		walls.setTileProperties(9, NONE);
		walls.setTileProperties(10, NONE);
		walls.setTileProperties(11, NONE);
		walls.setTileProperties(12, NONE);
		walls.setTileProperties(13, NONE);
		walls.setTileProperties(14, NONE);
		walls.setTileProperties(15, NONE);
		walls.setTileProperties(16, NONE);
		walls.setTileProperties(17, NONE);
		walls.setTileProperties(18, NONE);
		walls.setTileProperties(19, NONE);
		walls.setTileProperties(20, NONE);
		walls.setTileProperties(21, ANY);
		walls.setTileProperties(22, NONE);
		walls.setTileProperties(23, NONE);
		walls.setTileProperties(24, NONE);
		add(walls);
		pickups = new FlxTypedGroup<Pickup>();
		add(pickups);
		player = new Player();
		map.loadEntities(placeEntities, "entities");
		add(player);
		FlxG.camera.follow(player, TOPDOWN, 1);
		hud = new HUD();
		add(hud);

		sound_d1 = FlxG.sound.load("assets/sounds/death/d1.wav");
		sound_d2 = FlxG.sound.load("assets/sounds/death/d2.wav");
		sound_d3 = FlxG.sound.load("assets/sounds/death/d3.wav");
		sound_h1 = FlxG.sound.load("assets/sounds/hurt/h1.wav");
		sound_h2 = FlxG.sound.load("assets/sounds/hurt/h2.wav");
		sound_h3 = FlxG.sound.load("assets/sounds/hurt/h3.wav");
		sound_p1 = FlxG.sound.load("assets/sounds/pickup/p1.wav");
		sound_p2 = FlxG.sound.load("assets/sounds/pickup/p2.wav");
		sound_p3 = FlxG.sound.load("assets/sounds/pickup/p3.wav");
		sound_q1 = FlxG.sound.load("assets/sounds/pickup_d/q1.wav");
		sound_q2 = FlxG.sound.load("assets/sounds/pickup_d/q2.wav");
		sound_q3 = FlxG.sound.load("assets/sounds/pickup_d/q3.wav");
		sound_u1 = FlxG.sound.load("assets/sounds/upgrade/u1.wav");
		sound_u2 = FlxG.sound.load("assets/sounds/upgrade/u2.wav");
		sound_u3 = FlxG.sound.load("assets/sounds/upgrade/u3.wav");

		super.create();
	}

	function placeEntities(entity:EntityData)
	{
		if (entity.name == "player")
		{
			player.setPosition(entity.x, entity.y);
		}
	}

	function spawnPickup()
	{
		if (runtime % Std.int(pickupSpeed) == 0)
		{
			var px = (rng.int(6, 37) * 16);
			var py:Int;
			if (px <= 448)
			{
				py = (rng.int(2, 26) * 16);
			}
			else
			{
				py = (rng.int(2, 27) * 16);
			}
			var pt;
			// pt = rng.getObject([0, 1, 2, 3], [0.45, 0.2, 0.1, 0.25]);
			pt = rng.int(0, 3);
			pickups.add(new Pickup(px, py, pt));
			FlxG.log.notice("Added pickup (x:" + px + " y:" + py + " t:" + pt + ")");
		}
	}

	function playerTouchPickup(player:Player, pickup:Pickup)
	{
		if (player.alive && player.exists && pickup.alive && pickup.exists)
		{
			var sound:Int = rng.int(0, 2);
			switch (pickup.pickup_type)
			{
				case 0:
					wood++;
					switch (sound)
					{
						case 0:
							sound_p1.play();
						case 1:
							sound_p2.play();
						case 2:
							sound_p3.play();
						case _:
					}
				case 1:
					metal++;
					switch (sound)
					{
						case 0:
							sound_p1.play();
						case 1:
							sound_p2.play();
						case 2:
							sound_p3.play();
						case _:
					}
				case 2:
					diamond++;
					switch (sound)
					{
						case 0:
							sound_q1.play();
						case 1:
							sound_q2.play();
						case 2:
							sound_q3.play();
						case _:
					}
				case 3:
					bar -= 100;
					switch (sound)
					{
						case 0:
							sound_h1.play();
						case 1:
							sound_h2.play();
						case 2:
							sound_h3.play();
						case _:
					}
				case _:
			}
			pickup.kill();
		}
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		FlxG.collide(player, walls);
		FlxG.overlap(player, pickups, playerTouchPickup);
		spawnPickup();
		hud.updateHUD(wood, metal, diamond, runtime, bar);
		upg_bought = hud.upgradesBought();
		var j:Int = 0;
		for (i in upg_bought)
		{
			switch (j)
			{
				case 0:
					if (i == 1)
					{
						FlxG.log.notice("UPG1");
						playerSpeed += 10;
					}
				case 1:
					if (i == 1)
					{
						pickupSpeed *= 0.9;
					}
				case 2:
					if (i == 1)
					{
						barSpeed *= 0.5;
					}
				case 3:
					if (i == 1)
					{
						var opt = rng.int(0, 8);
						switch (opt)
						{
							case 0:
								playerSpeed += 20;
							case 1:
								playerSpeed -= 20;
							case 2:
								pickupSpeed *= 0.8;
							case 3:
								pickupSpeed *= 1.2;
							case 4:
								barSpeed *= 0.5;
							case 5:
								barSpeed *= 1.5;
							case 6:
								bar = bar + (10000.0 - bar) * 0.25;
							case 7:
								bar *= 0.8;
							case 8:
								{}
						}
					}
			}
			j++;
		}
		if (runtime % 3 == 0)
		{
			bar -= barSpeed;
			barSpeed += 0.001;
		}
	}
}
