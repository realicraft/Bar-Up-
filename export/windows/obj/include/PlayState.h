#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(Pickup)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmo3Loader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxRandom)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,Timer)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		 ::Player player;
		 ::flixel::addons::editors::ogmo::FlxOgmo3Loader map;
		 ::flixel::tile::FlxTilemap walls;
		 ::haxe::Timer runtime_timer;
		int runtime;
		 ::flixel::group::FlxTypedGroup pickups;
		 ::flixel::math::FlxRandom rng;
		 ::HUD hud;
		int wood;
		int metal;
		int diamond;
		Float bar;
		Float barSpeed;
		Float playerSpeed;
		Float pickupSpeed;
		 ::flixel::_hx_system::FlxSound sound_d1;
		 ::flixel::_hx_system::FlxSound sound_d2;
		 ::flixel::_hx_system::FlxSound sound_d3;
		 ::flixel::_hx_system::FlxSound sound_h1;
		 ::flixel::_hx_system::FlxSound sound_h2;
		 ::flixel::_hx_system::FlxSound sound_h3;
		 ::flixel::_hx_system::FlxSound sound_p1;
		 ::flixel::_hx_system::FlxSound sound_p2;
		 ::flixel::_hx_system::FlxSound sound_p3;
		 ::flixel::_hx_system::FlxSound sound_q1;
		 ::flixel::_hx_system::FlxSound sound_q2;
		 ::flixel::_hx_system::FlxSound sound_q3;
		 ::flixel::_hx_system::FlxSound sound_u1;
		 ::flixel::_hx_system::FlxSound sound_u2;
		 ::flixel::_hx_system::FlxSound sound_u3;
		::Array< int > upg_bought;
		void create();

		void placeEntities( ::Dynamic entity);
		::Dynamic placeEntities_dyn();

		void spawnPickup();
		::Dynamic spawnPickup_dyn();

		void playerTouchPickup( ::Player player, ::Pickup pickup);
		::Dynamic playerTouchPickup_dyn();

		void update(Float elapsed);

};


#endif /* INCLUDED_PlayState */ 
