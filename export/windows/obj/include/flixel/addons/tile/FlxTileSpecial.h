#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#define INCLUDED_flixel_addons_tile_FlxTileSpecial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileAnimation)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileSpecial)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTileSpecial_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTileSpecial_obj OBJ_;
		FlxTileSpecial_obj();

	public:
		enum { _hx_ClassId = 0x4b129836 };

		void __construct(int TilesetId,bool FlipX,bool FlipY,int Rotate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.tile.FlxTileSpecial")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.tile.FlxTileSpecial"); }
		static ::hx::ObjectPtr< FlxTileSpecial_obj > __new(int TilesetId,bool FlipX,bool FlipY,int Rotate);
		static ::hx::ObjectPtr< FlxTileSpecial_obj > __alloc(::hx::Ctx *_hx_ctx,int TilesetId,bool FlipX,bool FlipY,int Rotate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTileSpecial_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTileSpecial",79,71,41,dd); }

		static void __boot();
		static int ROTATE_0;
		static int ROTATE_90;
		static int ROTATE_270;
		bool flipX;
		bool flipY;
		int rotate;
		 ::flixel::graphics::frames::FlxFramesCollection frames;
		int currTileId;
		 ::flixel::graphics::frames::FlxFrame currFrame;
		bool _tmp_flipH;
		bool _tmp_flipV;
		int _tmp_rot;
		 ::flixel::math::FlxMatrix _matrix;
		 ::flixel::addons::tile::FlxTileAnimation animation;
		int _currIndex;
		int _lastIndex;
		 ::Dynamic _currAnimParam;
		Float _frameTimer;
		bool dirty;
		void destroy();

		void update(Float elapsed);

		bool isSpecial();
		::Dynamic isSpecial_dyn();

		bool isFlipped();
		::Dynamic isFlipped_dyn();

		bool hasAnimation();
		::Dynamic hasAnimation_dyn();

		void paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point at);
		::Dynamic paint_dyn();

		void addAnimation(::Array< int > tiles,::hx::Null< Float >  frameRate,::Array< ::Dynamic> framesData);
		::Dynamic addAnimation_dyn();

		void fromSpriteAnimation( ::flixel::animation::FlxAnimation anim);
		::Dynamic fromSpriteAnimation_dyn();

		 ::flixel::math::FlxMatrix getMatrix();
		::Dynamic getMatrix_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection value);
		::Dynamic set_frames_dyn();

		int set_currTileId(int value);
		::Dynamic set_currTileId_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTileSpecial */ 
