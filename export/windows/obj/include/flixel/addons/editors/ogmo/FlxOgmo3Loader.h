#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader
#define INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmo3Loader)
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTilemapExt)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace editors{
namespace ogmo{


class HXCPP_CLASS_ATTRIBUTES FlxOgmo3Loader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxOgmo3Loader_obj OBJ_;
		FlxOgmo3Loader_obj();

	public:
		enum { _hx_ClassId = 0x0e61be9b };

		void __construct(::String projectData,::String levelData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.ogmo.FlxOgmo3Loader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.ogmo.FlxOgmo3Loader"); }
		static ::hx::ObjectPtr< FlxOgmo3Loader_obj > __new(::String projectData,::String levelData);
		static ::hx::ObjectPtr< FlxOgmo3Loader_obj > __alloc(::hx::Ctx *_hx_ctx,::String projectData,::String levelData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxOgmo3Loader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxOgmo3Loader",3a,0a,62,10); }

		static  ::Dynamic parseLevelJSON(::String json);
		static ::Dynamic parseLevelJSON_dyn();

		static  ::Dynamic parseProjectJSON(::String json);
		static ::Dynamic parseProjectJSON_dyn();

		static  ::Dynamic getTileLayer( ::Dynamic data,::String name);
		static ::Dynamic getTileLayer_dyn();

		static  ::Dynamic getGridLayer( ::Dynamic data,::String name);
		static ::Dynamic getGridLayer_dyn();

		static  ::Dynamic getEntityLayer( ::Dynamic data,::String name);
		static ::Dynamic getEntityLayer_dyn();

		static  ::Dynamic getDecalLayer( ::Dynamic data,::String name);
		static ::Dynamic getDecalLayer_dyn();

		static  ::Dynamic getTilesetData( ::Dynamic data,::String name);
		static ::Dynamic getTilesetData_dyn();

		static void applyFlagsToTilemapExt(::Array< int > tileFlags, ::flixel::addons::tile::FlxTilemapExt tilemap);
		static ::Dynamic applyFlagsToTilemapExt_dyn();

		 ::Dynamic project;
		 ::Dynamic level;
		 ::Dynamic getLevelValue(::String value);
		::Dynamic getLevelValue_dyn();

		 ::flixel::tile::FlxTilemap loadTilemap( ::Dynamic tileGraphic,::String tileLayer, ::flixel::tile::FlxTilemap tilemap);
		::Dynamic loadTilemap_dyn();

		 ::flixel::addons::tile::FlxTilemapExt loadTilemapExt( ::Dynamic tileGraphic,::String tileLayer, ::flixel::addons::tile::FlxTilemapExt tilemap);
		::Dynamic loadTilemapExt_dyn();

		 ::haxe::ds::StringMap loadGridMap(::String gridLayer);
		::Dynamic loadGridMap_dyn();

		void loadEntities( ::Dynamic entityLoadCallback,::String entityLayer);
		::Dynamic loadEntities_dyn();

		 ::flixel::group::FlxTypedGroup loadDecals(::String decalLayer,::String decalsPath);
		::Dynamic loadDecals_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace ogmo

#endif /* INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader */ 
