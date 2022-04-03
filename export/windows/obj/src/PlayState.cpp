#include <hxcpp.h>

#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Pickup
#include <Pickup.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader
#include <flixel/addons/editors/ogmo/FlxOgmo3Loader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_17_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",17,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_67_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",67,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_56_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",56,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_131_placeEntities,"PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",131,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_139_spawnPickup,"PlayState","spawnPickup",0x23534786,"PlayState.spawnPickup","PlayState.hx",139,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_161_playerTouchPickup,"PlayState","playerTouchPickup",0x52fc0f69,"PlayState.playerTouchPickup","PlayState.hx",161,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_221_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",221,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_17_new)
HXLINE(  35)		this->pickupSpeed = ((Float)120);
HXLINE(  34)		this->playerSpeed = ((Float)200);
HXLINE(  33)		this->barSpeed = ((Float)0.1);
HXLINE(  32)		this->bar = ((Float)10000.0);
HXLINE(  30)		this->diamond = 0;
HXLINE(  29)		this->metal = 0;
HXLINE(  28)		this->wood = 0;
HXLINE(  23)		this->runtime = 0;
HXLINE(  22)		this->runtime_timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,((Float)0.016666666666666666));
HXLINE(  17)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_af23706db05c7feb_67_create)
HXLINE(  67)			_gthis->runtime++;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_56_create)
HXDLIN(  56)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  64)		::flixel::FlxG_obj::set_drawFramerate(60);
HXLINE(  65)		this->runtime_timer->run =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  69)		this->rng =  ::flixel::math::FlxRandom_obj::__alloc( HX_CTX ,null());
HXLINE(  70)		this->map =  ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::__alloc( HX_CTX ,HX_("assets/data/ldjam50.ogmo",48,17,a1,6e),HX_("assets/data/main-map.json",75,e6,8b,d6));
HXLINE(  71)		this->walls = this->map->loadTilemap(HX_("assets/images/ldjam50_tiles.png",6f,58,4c,90),HX_("walls",29,0c,1f,c5),null());
HXLINE(  72)		this->walls->scale->set_x(( (Float)(1) ));
HXLINE(  73)		this->walls->scale->set_y(( (Float)(1) ));
HXLINE(  74)		this->walls->follow(null(),null(),null());
HXLINE(  75)		this->walls->setTileProperties(0,4369,null(),null(),null());
HXLINE(  76)		this->walls->setTileProperties(1,0,null(),null(),null());
HXLINE(  77)		this->walls->setTileProperties(2,0,null(),null(),null());
HXLINE(  78)		this->walls->setTileProperties(3,0,null(),null(),null());
HXLINE(  79)		this->walls->setTileProperties(4,0,null(),null(),null());
HXLINE(  80)		this->walls->setTileProperties(5,0,null(),null(),null());
HXLINE(  81)		this->walls->setTileProperties(6,0,null(),null(),null());
HXLINE(  82)		this->walls->setTileProperties(7,0,null(),null(),null());
HXLINE(  83)		this->walls->setTileProperties(8,0,null(),null(),null());
HXLINE(  84)		this->walls->setTileProperties(9,0,null(),null(),null());
HXLINE(  85)		this->walls->setTileProperties(10,0,null(),null(),null());
HXLINE(  86)		this->walls->setTileProperties(11,0,null(),null(),null());
HXLINE(  87)		this->walls->setTileProperties(12,0,null(),null(),null());
HXLINE(  88)		this->walls->setTileProperties(13,0,null(),null(),null());
HXLINE(  89)		this->walls->setTileProperties(14,0,null(),null(),null());
HXLINE(  90)		this->walls->setTileProperties(15,0,null(),null(),null());
HXLINE(  91)		this->walls->setTileProperties(16,0,null(),null(),null());
HXLINE(  92)		this->walls->setTileProperties(17,0,null(),null(),null());
HXLINE(  93)		this->walls->setTileProperties(18,0,null(),null(),null());
HXLINE(  94)		this->walls->setTileProperties(19,0,null(),null(),null());
HXLINE(  95)		this->walls->setTileProperties(20,0,null(),null(),null());
HXLINE(  96)		this->walls->setTileProperties(21,4369,null(),null(),null());
HXLINE(  97)		this->walls->setTileProperties(22,0,null(),null(),null());
HXLINE(  98)		this->walls->setTileProperties(23,0,null(),null(),null());
HXLINE(  99)		this->walls->setTileProperties(24,0,null(),null(),null());
HXLINE( 100)		this->add(this->walls);
HXLINE( 101)		this->pickups =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 102)		this->add(this->pickups);
HXLINE( 103)		this->player =  ::Player_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 104)		this->map->loadEntities(this->placeEntities_dyn(),HX_("entities",41,96,95,92));
HXLINE( 105)		this->add(this->player);
HXLINE( 106)		::flixel::FlxG_obj::camera->follow(this->player,::flixel::FlxCameraFollowStyle_obj::TOPDOWN_dyn(),1);
HXLINE( 107)		this->hud =  ::HUD_obj::__alloc( HX_CTX );
HXLINE( 108)		this->add(this->hud);
HXLINE( 110)		this->sound_d1 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/death/d1.wav",e5,6c,80,36),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 111)		this->sound_d2 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/death/d2.wav",66,01,e7,c9),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 112)		this->sound_d3 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/death/d3.wav",e7,95,4d,5d),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 113)		this->sound_h1 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/hurt/h1.wav",88,92,d4,f1),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 114)		this->sound_h2 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/hurt/h2.wav",09,27,3b,85),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 115)		this->sound_h3 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/hurt/h3.wav",8a,bb,a1,18),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 116)		this->sound_p1 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup/p1.wav",f3,51,a0,5f),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 117)		this->sound_p2 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup/p2.wav",74,e6,06,f3),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 118)		this->sound_p3 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup/p3.wav",f5,7a,6d,86),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 119)		this->sound_q1 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup_d/q1.wav",0d,25,b2,ab),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 120)		this->sound_q2 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup_d/q2.wav",8e,b9,18,3f),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 121)		this->sound_q3 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/pickup_d/q3.wav",0f,4e,7f,d2),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 122)		this->sound_u1 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/upgrade/u1.wav",8c,0c,37,e2),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 123)		this->sound_u2 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/upgrade/u2.wav",0d,a1,9d,75),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 124)		this->sound_u3 = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/upgrade/u3.wav",8e,35,04,09),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 126)		this->super::create();
            	}


void PlayState_obj::placeEntities( ::Dynamic entity){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_131_placeEntities)
HXDLIN( 131)		if (::hx::IsEq( entity->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("player",61,eb,b8,37) )) {
HXLINE( 133)			this->player->setPosition(entity->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),entity->__Field(HX_("y",79,00,00,00),::hx::paccDynamic));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,placeEntities,(void))

void PlayState_obj::spawnPickup(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_139_spawnPickup)
HXDLIN( 139)		if ((::hx::Mod(this->runtime,this->pickupSpeed) == 0)) {
HXLINE( 141)			int px = (this->rng->_hx_int(6,37,null()) * 16);
HXLINE( 142)			int py;
HXLINE( 143)			if ((px <= 448)) {
HXLINE( 145)				py = (this->rng->_hx_int(2,26,null()) * 16);
            			}
            			else {
HXLINE( 149)				py = (this->rng->_hx_int(2,27,null()) * 16);
            			}
HXLINE( 151)			int pt = this->rng->_hx_int(0,3,null());
HXLINE( 154)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->pickups;
HXDLIN( 154)			_hx_tmp->add( ::Pickup_obj::__alloc( HX_CTX ,( (Float)(px) ),( (Float)(py) ),pt)).StaticCast<  ::Pickup >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPickup,(void))

void PlayState_obj::playerTouchPickup( ::Player player, ::Pickup pickup){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_161_playerTouchPickup)
HXDLIN( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		bool _hx_tmp2;
HXDLIN( 161)		if (player->alive) {
HXDLIN( 161)			_hx_tmp2 = player->exists;
            		}
            		else {
HXDLIN( 161)			_hx_tmp2 = false;
            		}
HXDLIN( 161)		if (_hx_tmp2) {
HXDLIN( 161)			_hx_tmp1 = pickup->alive;
            		}
            		else {
HXDLIN( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXDLIN( 161)			_hx_tmp = pickup->exists;
            		}
            		else {
HXDLIN( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			int sound = this->rng->_hx_int(0,2,null());
HXLINE( 164)			switch((int)(pickup->pickup_type)){
            				case (int)0: {
HXLINE( 167)					this->wood++;
HXLINE( 168)					switch((int)(sound)){
            						case (int)0: {
HXLINE( 171)							this->sound_p1->play(null(),null(),null());
            						}
            						break;
            						case (int)1: {
HXLINE( 173)							this->sound_p2->play(null(),null(),null());
            						}
            						break;
            						case (int)2: {
HXLINE( 175)							this->sound_p3->play(null(),null(),null());
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 179)					this->metal++;
HXLINE( 180)					switch((int)(sound)){
            						case (int)0: {
HXLINE( 183)							this->sound_p1->play(null(),null(),null());
            						}
            						break;
            						case (int)1: {
HXLINE( 185)							this->sound_p2->play(null(),null(),null());
            						}
            						break;
            						case (int)2: {
HXLINE( 187)							this->sound_p3->play(null(),null(),null());
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 191)					this->diamond++;
HXLINE( 192)					switch((int)(sound)){
            						case (int)0: {
HXLINE( 195)							this->sound_q1->play(null(),null(),null());
            						}
            						break;
            						case (int)1: {
HXLINE( 197)							this->sound_q2->play(null(),null(),null());
            						}
            						break;
            						case (int)2: {
HXLINE( 199)							this->sound_q3->play(null(),null(),null());
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 203)					 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)					_hx_tmp->bar = (_hx_tmp->bar - ( (Float)(100) ));
HXLINE( 204)					switch((int)(sound)){
            						case (int)0: {
HXLINE( 207)							this->sound_h1->play(null(),null(),null());
            						}
            						break;
            						case (int)1: {
HXLINE( 209)							this->sound_h2->play(null(),null(),null());
            						}
            						break;
            						case (int)2: {
HXLINE( 211)							this->sound_h3->play(null(),null(),null());
            						}
            						break;
            						default:{
            						}
            					}
            				}
            				break;
            				default:{
            				}
            			}
HXLINE( 216)			pickup->kill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchPickup,(void))

void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_221_update)
HXLINE( 222)		this->super::update(elapsed);
HXLINE( 223)		{
HXLINE( 223)			 ::Dynamic NotifyCallback = null();
HXDLIN( 223)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->walls) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 224)		::flixel::FlxG_obj::overlap(this->player,this->pickups,this->playerTouchPickup_dyn(),null());
HXLINE( 225)		this->spawnPickup();
HXLINE( 226)		this->hud->updateHUD(this->wood,this->metal,this->diamond,this->runtime,this->bar);
HXLINE( 227)		this->upg_bought = this->hud->upgradesBought();
HXLINE( 228)		int j = 0;
HXLINE( 229)		{
HXLINE( 229)			int _g = 0;
HXDLIN( 229)			::Array< int > _g1 = this->upg_bought;
HXDLIN( 229)			while((_g < _g1->length)){
HXLINE( 229)				int i = _g1->__get(_g);
HXDLIN( 229)				_g = (_g + 1);
HXLINE( 231)				switch((int)(j)){
            					case (int)0: {
HXLINE( 234)						if ((i == 1)) {
HXLINE( 237)							 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 237)							_hx_tmp->playerSpeed = (_hx_tmp->playerSpeed + 10);
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 240)						if ((i == 1)) {
HXLINE( 242)							 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 242)							_hx_tmp->pickupSpeed = (_hx_tmp->pickupSpeed * ((Float)0.9));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 245)						if ((i == 1)) {
HXLINE( 247)							 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 247)							_hx_tmp->barSpeed = (_hx_tmp->barSpeed * ((Float)0.5));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 250)						if ((i == 1)) {
HXLINE( 252)							int opt = this->rng->_hx_int(0,8,null());
HXLINE( 253)							switch((int)(opt)){
            								case (int)0: {
HXLINE( 256)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)									_hx_tmp->playerSpeed = (_hx_tmp->playerSpeed + 20);
            								}
            								break;
            								case (int)1: {
HXLINE( 258)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)									_hx_tmp->playerSpeed = (_hx_tmp->playerSpeed - ( (Float)(20) ));
            								}
            								break;
            								case (int)2: {
HXLINE( 260)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)									_hx_tmp->pickupSpeed = (_hx_tmp->pickupSpeed * ((Float)0.8));
            								}
            								break;
            								case (int)3: {
HXLINE( 262)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 262)									_hx_tmp->pickupSpeed = (_hx_tmp->pickupSpeed * ((Float)1.2));
            								}
            								break;
            								case (int)4: {
HXLINE( 264)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 264)									_hx_tmp->barSpeed = (_hx_tmp->barSpeed * ((Float)0.5));
            								}
            								break;
            								case (int)5: {
HXLINE( 266)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 266)									_hx_tmp->barSpeed = (_hx_tmp->barSpeed * ((Float)1.5));
            								}
            								break;
            								case (int)6: {
HXLINE( 268)									this->bar = (this->bar + ((((Float)10000.0) - this->bar) * ((Float)0.25)));
            								}
            								break;
            								case (int)7: {
HXLINE( 270)									 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 270)									_hx_tmp->bar = (_hx_tmp->bar * ((Float)0.8));
            								}
            								break;
            								case (int)8: {
            								}
            								break;
            							}
            						}
            					}
            					break;
            				}
HXLINE( 276)				j = (j + 1);
            			}
            		}
HXLINE( 278)		if ((::hx::Mod(this->runtime,3) == 0)) {
HXLINE( 280)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)			_hx_tmp->bar = (_hx_tmp->bar - this->barSpeed);
HXLINE( 281)			 ::PlayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 281)			_hx_tmp1->barSpeed = (_hx_tmp1->barSpeed + ((Float)0.001));
            		}
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(runtime_timer,"runtime_timer");
	HX_MARK_MEMBER_NAME(runtime,"runtime");
	HX_MARK_MEMBER_NAME(pickups,"pickups");
	HX_MARK_MEMBER_NAME(rng,"rng");
	HX_MARK_MEMBER_NAME(hud,"hud");
	HX_MARK_MEMBER_NAME(wood,"wood");
	HX_MARK_MEMBER_NAME(metal,"metal");
	HX_MARK_MEMBER_NAME(diamond,"diamond");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(barSpeed,"barSpeed");
	HX_MARK_MEMBER_NAME(playerSpeed,"playerSpeed");
	HX_MARK_MEMBER_NAME(pickupSpeed,"pickupSpeed");
	HX_MARK_MEMBER_NAME(sound_d1,"sound_d1");
	HX_MARK_MEMBER_NAME(sound_d2,"sound_d2");
	HX_MARK_MEMBER_NAME(sound_d3,"sound_d3");
	HX_MARK_MEMBER_NAME(sound_h1,"sound_h1");
	HX_MARK_MEMBER_NAME(sound_h2,"sound_h2");
	HX_MARK_MEMBER_NAME(sound_h3,"sound_h3");
	HX_MARK_MEMBER_NAME(sound_p1,"sound_p1");
	HX_MARK_MEMBER_NAME(sound_p2,"sound_p2");
	HX_MARK_MEMBER_NAME(sound_p3,"sound_p3");
	HX_MARK_MEMBER_NAME(sound_q1,"sound_q1");
	HX_MARK_MEMBER_NAME(sound_q2,"sound_q2");
	HX_MARK_MEMBER_NAME(sound_q3,"sound_q3");
	HX_MARK_MEMBER_NAME(sound_u1,"sound_u1");
	HX_MARK_MEMBER_NAME(sound_u2,"sound_u2");
	HX_MARK_MEMBER_NAME(sound_u3,"sound_u3");
	HX_MARK_MEMBER_NAME(upg_bought,"upg_bought");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(runtime_timer,"runtime_timer");
	HX_VISIT_MEMBER_NAME(runtime,"runtime");
	HX_VISIT_MEMBER_NAME(pickups,"pickups");
	HX_VISIT_MEMBER_NAME(rng,"rng");
	HX_VISIT_MEMBER_NAME(hud,"hud");
	HX_VISIT_MEMBER_NAME(wood,"wood");
	HX_VISIT_MEMBER_NAME(metal,"metal");
	HX_VISIT_MEMBER_NAME(diamond,"diamond");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(barSpeed,"barSpeed");
	HX_VISIT_MEMBER_NAME(playerSpeed,"playerSpeed");
	HX_VISIT_MEMBER_NAME(pickupSpeed,"pickupSpeed");
	HX_VISIT_MEMBER_NAME(sound_d1,"sound_d1");
	HX_VISIT_MEMBER_NAME(sound_d2,"sound_d2");
	HX_VISIT_MEMBER_NAME(sound_d3,"sound_d3");
	HX_VISIT_MEMBER_NAME(sound_h1,"sound_h1");
	HX_VISIT_MEMBER_NAME(sound_h2,"sound_h2");
	HX_VISIT_MEMBER_NAME(sound_h3,"sound_h3");
	HX_VISIT_MEMBER_NAME(sound_p1,"sound_p1");
	HX_VISIT_MEMBER_NAME(sound_p2,"sound_p2");
	HX_VISIT_MEMBER_NAME(sound_p3,"sound_p3");
	HX_VISIT_MEMBER_NAME(sound_q1,"sound_q1");
	HX_VISIT_MEMBER_NAME(sound_q2,"sound_q2");
	HX_VISIT_MEMBER_NAME(sound_q3,"sound_q3");
	HX_VISIT_MEMBER_NAME(sound_u1,"sound_u1");
	HX_VISIT_MEMBER_NAME(sound_u2,"sound_u2");
	HX_VISIT_MEMBER_NAME(sound_u3,"sound_u3");
	HX_VISIT_MEMBER_NAME(upg_bought,"upg_bought");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"rng") ) { return ::hx::Val( rng ); }
		if (HX_FIELD_EQ(inName,"hud") ) { return ::hx::Val( hud ); }
		if (HX_FIELD_EQ(inName,"bar") ) { return ::hx::Val( bar ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wood") ) { return ::hx::Val( wood ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { return ::hx::Val( walls ); }
		if (HX_FIELD_EQ(inName,"metal") ) { return ::hx::Val( metal ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { return ::hx::Val( runtime ); }
		if (HX_FIELD_EQ(inName,"pickups") ) { return ::hx::Val( pickups ); }
		if (HX_FIELD_EQ(inName,"diamond") ) { return ::hx::Val( diamond ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barSpeed") ) { return ::hx::Val( barSpeed ); }
		if (HX_FIELD_EQ(inName,"sound_d1") ) { return ::hx::Val( sound_d1 ); }
		if (HX_FIELD_EQ(inName,"sound_d2") ) { return ::hx::Val( sound_d2 ); }
		if (HX_FIELD_EQ(inName,"sound_d3") ) { return ::hx::Val( sound_d3 ); }
		if (HX_FIELD_EQ(inName,"sound_h1") ) { return ::hx::Val( sound_h1 ); }
		if (HX_FIELD_EQ(inName,"sound_h2") ) { return ::hx::Val( sound_h2 ); }
		if (HX_FIELD_EQ(inName,"sound_h3") ) { return ::hx::Val( sound_h3 ); }
		if (HX_FIELD_EQ(inName,"sound_p1") ) { return ::hx::Val( sound_p1 ); }
		if (HX_FIELD_EQ(inName,"sound_p2") ) { return ::hx::Val( sound_p2 ); }
		if (HX_FIELD_EQ(inName,"sound_p3") ) { return ::hx::Val( sound_p3 ); }
		if (HX_FIELD_EQ(inName,"sound_q1") ) { return ::hx::Val( sound_q1 ); }
		if (HX_FIELD_EQ(inName,"sound_q2") ) { return ::hx::Val( sound_q2 ); }
		if (HX_FIELD_EQ(inName,"sound_q3") ) { return ::hx::Val( sound_q3 ); }
		if (HX_FIELD_EQ(inName,"sound_u1") ) { return ::hx::Val( sound_u1 ); }
		if (HX_FIELD_EQ(inName,"sound_u2") ) { return ::hx::Val( sound_u2 ); }
		if (HX_FIELD_EQ(inName,"sound_u3") ) { return ::hx::Val( sound_u3 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"upg_bought") ) { return ::hx::Val( upg_bought ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerSpeed") ) { return ::hx::Val( playerSpeed ); }
		if (HX_FIELD_EQ(inName,"pickupSpeed") ) { return ::hx::Val( pickupSpeed ); }
		if (HX_FIELD_EQ(inName,"spawnPickup") ) { return ::hx::Val( spawnPickup_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"runtime_timer") ) { return ::hx::Val( runtime_timer ); }
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return ::hx::Val( placeEntities_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playerTouchPickup") ) { return ::hx::Val( playerTouchPickup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::flixel::addons::editors::ogmo::FlxOgmo3Loader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rng") ) { rng=inValue.Cast<  ::flixel::math::FlxRandom >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hud") ) { hud=inValue.Cast<  ::HUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wood") ) { wood=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"metal") ) { metal=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { runtime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pickups") ) { pickups=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diamond") ) { diamond=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barSpeed") ) { barSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_d1") ) { sound_d1=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_d2") ) { sound_d2=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_d3") ) { sound_d3=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_h1") ) { sound_h1=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_h2") ) { sound_h2=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_h3") ) { sound_h3=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_p1") ) { sound_p1=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_p2") ) { sound_p2=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_p3") ) { sound_p3=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_q1") ) { sound_q1=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_q2") ) { sound_q2=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_q3") ) { sound_q3=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_u1") ) { sound_u1=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_u2") ) { sound_u2=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound_u3") ) { sound_u3=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"upg_bought") ) { upg_bought=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playerSpeed") ) { playerSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pickupSpeed") ) { pickupSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"runtime_timer") ) { runtime_timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("walls",29,0c,1f,c5));
	outFields->push(HX_("runtime_timer",de,ed,18,f1));
	outFields->push(HX_("runtime",d8,b4,60,ef));
	outFields->push(HX_("pickups",77,43,9b,74));
	outFields->push(HX_("rng",2b,e1,56,00));
	outFields->push(HX_("hud",b7,50,4f,00));
	outFields->push(HX_("wood",2d,ff,fc,4e));
	outFields->push(HX_("metal",07,22,c8,05));
	outFields->push(HX_("diamond",54,67,1a,5c));
	outFields->push(HX_("bar",d3,b1,4a,00));
	outFields->push(HX_("barSpeed",b4,d8,37,50));
	outFields->push(HX_("playerSpeed",66,3c,48,88));
	outFields->push(HX_("pickupSpeed",6b,1c,2a,99));
	outFields->push(HX_("sound_d1",fd,8b,ae,19));
	outFields->push(HX_("sound_d2",fe,8b,ae,19));
	outFields->push(HX_("sound_d3",ff,8b,ae,19));
	outFields->push(HX_("sound_h1",79,8f,ae,19));
	outFields->push(HX_("sound_h2",7a,8f,ae,19));
	outFields->push(HX_("sound_h3",7b,8f,ae,19));
	outFields->push(HX_("sound_p1",71,96,ae,19));
	outFields->push(HX_("sound_p2",72,96,ae,19));
	outFields->push(HX_("sound_p3",73,96,ae,19));
	outFields->push(HX_("sound_q1",50,97,ae,19));
	outFields->push(HX_("sound_q2",51,97,ae,19));
	outFields->push(HX_("sound_q3",52,97,ae,19));
	outFields->push(HX_("sound_u1",cc,9a,ae,19));
	outFields->push(HX_("sound_u2",cd,9a,ae,19));
	outFields->push(HX_("sound_u3",ce,9a,ae,19));
	outFields->push(HX_("upg_bought",9e,ef,81,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::flixel::addons::editors::ogmo::FlxOgmo3Loader */ ,(int)offsetof(PlayState_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(PlayState_obj,walls),HX_("walls",29,0c,1f,c5)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(PlayState_obj,runtime_timer),HX_("runtime_timer",de,ed,18,f1)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,runtime),HX_("runtime",d8,b4,60,ef)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,pickups),HX_("pickups",77,43,9b,74)},
	{::hx::fsObject /*  ::flixel::math::FlxRandom */ ,(int)offsetof(PlayState_obj,rng),HX_("rng",2b,e1,56,00)},
	{::hx::fsObject /*  ::HUD */ ,(int)offsetof(PlayState_obj,hud),HX_("hud",b7,50,4f,00)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,wood),HX_("wood",2d,ff,fc,4e)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,metal),HX_("metal",07,22,c8,05)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,diamond),HX_("diamond",54,67,1a,5c)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,bar),HX_("bar",d3,b1,4a,00)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,barSpeed),HX_("barSpeed",b4,d8,37,50)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,playerSpeed),HX_("playerSpeed",66,3c,48,88)},
	{::hx::fsFloat,(int)offsetof(PlayState_obj,pickupSpeed),HX_("pickupSpeed",6b,1c,2a,99)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_d1),HX_("sound_d1",fd,8b,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_d2),HX_("sound_d2",fe,8b,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_d3),HX_("sound_d3",ff,8b,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_h1),HX_("sound_h1",79,8f,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_h2),HX_("sound_h2",7a,8f,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_h3),HX_("sound_h3",7b,8f,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_p1),HX_("sound_p1",71,96,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_p2),HX_("sound_p2",72,96,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_p3),HX_("sound_p3",73,96,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_q1),HX_("sound_q1",50,97,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_q2),HX_("sound_q2",51,97,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_q3),HX_("sound_q3",52,97,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_u1),HX_("sound_u1",cc,9a,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_u2),HX_("sound_u2",cd,9a,ae,19)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,sound_u3),HX_("sound_u3",ce,9a,ae,19)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PlayState_obj,upg_bought),HX_("upg_bought",9e,ef,81,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("player",61,eb,b8,37),
	HX_("map",9c,0a,53,00),
	HX_("walls",29,0c,1f,c5),
	HX_("runtime_timer",de,ed,18,f1),
	HX_("runtime",d8,b4,60,ef),
	HX_("pickups",77,43,9b,74),
	HX_("rng",2b,e1,56,00),
	HX_("hud",b7,50,4f,00),
	HX_("wood",2d,ff,fc,4e),
	HX_("metal",07,22,c8,05),
	HX_("diamond",54,67,1a,5c),
	HX_("bar",d3,b1,4a,00),
	HX_("barSpeed",b4,d8,37,50),
	HX_("playerSpeed",66,3c,48,88),
	HX_("pickupSpeed",6b,1c,2a,99),
	HX_("sound_d1",fd,8b,ae,19),
	HX_("sound_d2",fe,8b,ae,19),
	HX_("sound_d3",ff,8b,ae,19),
	HX_("sound_h1",79,8f,ae,19),
	HX_("sound_h2",7a,8f,ae,19),
	HX_("sound_h3",7b,8f,ae,19),
	HX_("sound_p1",71,96,ae,19),
	HX_("sound_p2",72,96,ae,19),
	HX_("sound_p3",73,96,ae,19),
	HX_("sound_q1",50,97,ae,19),
	HX_("sound_q2",51,97,ae,19),
	HX_("sound_q3",52,97,ae,19),
	HX_("sound_u1",cc,9a,ae,19),
	HX_("sound_u2",cd,9a,ae,19),
	HX_("sound_u3",ce,9a,ae,19),
	HX_("upg_bought",9e,ef,81,03),
	HX_("create",fc,66,0f,7c),
	HX_("placeEntities",28,e6,91,17),
	HX_("spawnPickup",17,fa,04,1a),
	HX_("playerTouchPickup",ba,84,a7,5e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

