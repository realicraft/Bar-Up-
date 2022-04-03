#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#define INCLUDED_flixel_addons_tile_FlxTilemapExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileSpecial)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTilemapExt)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTilemapExt_obj : public  ::flixel::tile::FlxTilemap_obj
{
	public:
		typedef  ::flixel::tile::FlxTilemap_obj super;
		typedef FlxTilemapExt_obj OBJ_;
		FlxTilemapExt_obj();

	public:
		enum { _hx_ClassId = 0x37464a20 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.tile.FlxTilemapExt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.tile.FlxTilemapExt"); }
		static ::hx::ObjectPtr< FlxTilemapExt_obj > __new();
		static ::hx::ObjectPtr< FlxTilemapExt_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTilemapExt_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTilemapExt",05,80,5b,17); }

		int _snapping;
		 ::flixel::math::FlxPoint _slopePoint;
		 ::flixel::math::FlxPoint _objPoint;
		bool _downwardsGlue;
		Float _velocityYDownSlope;
		Float _slopeSlowDownFactor;
		::Array< int > _slopeNorthwest;
		::Array< int > _slopeNortheast;
		::Array< int > _slopeSouthwest;
		::Array< int > _slopeSoutheast;
		::Array< int > _slopeThickGentle;
		::Array< int > _slopeThinGentle;
		::Array< int > _slopeThickSteep;
		::Array< int > _slopeThinSteep;
		::Array< ::Dynamic> _specialTiles;
		void destroy();

		void update(Float elapsed);

		void drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera);

		void setSpecialTiles(::Array< ::Dynamic> tiles);
		::Dynamic setSpecialTiles_dyn();

		bool overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  FlipCallbackParams, ::flixel::math::FlxPoint Position);

		void setDownwardsGlue(bool downwardsGlue,::hx::Null< Float >  slopeSlowDownFactor,::hx::Null< Float >  velocityYDownSlope);
		::Dynamic setDownwardsGlue_dyn();

		void setSlopes(::Array< int > Northwest,::Array< int > Northeast,::Array< int > Southwest,::Array< int > Southeast);
		::Dynamic setSlopes_dyn();

		void setGentle(::Array< int > ThickTiles,::Array< int > ThinTiles);
		::Dynamic setGentle_dyn();

		void setSteep(::Array< int > ThickTiles,::Array< int > ThinTiles);
		::Dynamic setSteep_dyn();

		bool checkThickGentle(int TileIndex);
		::Dynamic checkThickGentle_dyn();

		bool checkThinGentle(int TileIndex);
		::Dynamic checkThinGentle_dyn();

		bool checkThickSteep(int TileIndex);
		::Dynamic checkThickSteep_dyn();

		bool checkThinSteep(int TileIndex);
		::Dynamic checkThinSteep_dyn();

		void fixSlopePoint( ::flixel::tile::FlxTile Slope);
		::Dynamic fixSlopePoint_dyn();

		void onCollideFloorSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic onCollideFloorSlope_dyn();

		void onCollideCeilSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic onCollideCeilSlope_dyn();

		void solveCollisionSlopeNorthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic solveCollisionSlopeNorthwest_dyn();

		void solveCollisionSlopeNortheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic solveCollisionSlopeNortheast_dyn();

		void solveCollisionSlopeSouthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic solveCollisionSlopeSouthwest_dyn();

		void solveCollisionSlopeSoutheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object);
		::Dynamic solveCollisionSlopeSoutheast_dyn();

		void setSlopeProperties();
		::Dynamic setSlopeProperties_dyn();

		bool checkArrays(int TileIndex);
		::Dynamic checkArrays_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTilemapExt */ 
