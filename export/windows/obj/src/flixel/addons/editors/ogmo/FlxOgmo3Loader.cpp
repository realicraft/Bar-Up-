#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader
#include <flixel/addons/editors/ogmo/FlxOgmo3Loader.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#include <flixel/addons/tile/FlxTileSpecial.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#include <flixel/addons/tile/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2010db050bfafae_34_new,"flixel.addons.editors.ogmo.FlxOgmo3Loader","new",0x25d4d5af,"flixel.addons.editors.ogmo.FlxOgmo3Loader.new","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",34,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_45_getLevelValue,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getLevelValue",0xfb411592,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getLevelValue","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",45,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_60_loadTilemap,"flixel.addons.editors.ogmo.FlxOgmo3Loader","loadTilemap",0xf43a1af7,"flixel.addons.editors.ogmo.FlxOgmo3Loader.loadTilemap","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",60,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_90_loadTilemapExt,"flixel.addons.editors.ogmo.FlxOgmo3Loader","loadTilemapExt",0xbf0a9dea,"flixel.addons.editors.ogmo.FlxOgmo3Loader.loadTilemapExt","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",90,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_125_loadGridMap,"flixel.addons.editors.ogmo.FlxOgmo3Loader","loadGridMap",0xb5e4163f,"flixel.addons.editors.ogmo.FlxOgmo3Loader.loadGridMap","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",125,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_174_loadEntities,"flixel.addons.editors.ogmo.FlxOgmo3Loader","loadEntities",0xb9afdb58,"flixel.addons.editors.ogmo.FlxOgmo3Loader.loadEntities","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",174,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_187_loadDecals,"flixel.addons.editors.ogmo.FlxOgmo3Loader","loadDecals",0xb978c5fd,"flixel.addons.editors.ogmo.FlxOgmo3Loader.loadDecals","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",187,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_211_parseLevelJSON,"flixel.addons.editors.ogmo.FlxOgmo3Loader","parseLevelJSON",0xff96520a,"flixel.addons.editors.ogmo.FlxOgmo3Loader.parseLevelJSON","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",211,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_219_parseProjectJSON,"flixel.addons.editors.ogmo.FlxOgmo3Loader","parseProjectJSON",0xc8bf715f,"flixel.addons.editors.ogmo.FlxOgmo3Loader.parseProjectJSON","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",219,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_226_getTileLayer,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getTileLayer",0x7823d51e,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getTileLayer","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",226,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_237_getGridLayer,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getGridLayer",0xe18bc286,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getGridLayer","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",237,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_248_getEntityLayer,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getEntityLayer",0x859ee1c9,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getEntityLayer","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",248,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_259_getDecalLayer,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getDecalLayer",0x51e105a9,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getDecalLayer","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",259,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_270_getTilesetData,"flixel.addons.editors.ogmo.FlxOgmo3Loader","getTilesetData",0xa0eeef99,"flixel.addons.editors.ogmo.FlxOgmo3Loader.getTilesetData","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",270,0x4c7c9661)
HX_LOCAL_STACK_FRAME(_hx_pos_d2010db050bfafae_281_applyFlagsToTilemapExt,"flixel.addons.editors.ogmo.FlxOgmo3Loader","applyFlagsToTilemapExt",0x0152c318,"flixel.addons.editors.ogmo.FlxOgmo3Loader.applyFlagsToTilemapExt","flixel/addons/editors/ogmo/FlxOgmo3Loader.hx",281,0x4c7c9661)
namespace flixel{
namespace addons{
namespace editors{
namespace ogmo{

void FlxOgmo3Loader_obj::__construct(::String projectData,::String levelData){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_34_new)
HXLINE(  35)		this->project = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::parseProjectJSON(::openfl::utils::Assets_obj::getText(projectData));
HXLINE(  36)		this->level = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::parseLevelJSON(::openfl::utils::Assets_obj::getText(levelData));
            	}

Dynamic FlxOgmo3Loader_obj::__CreateEmpty() { return new FlxOgmo3Loader_obj; }

void *FlxOgmo3Loader_obj::_hx_vtable = 0;

Dynamic FlxOgmo3Loader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxOgmo3Loader_obj > _hx_result = new FlxOgmo3Loader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxOgmo3Loader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e61be9b;
}

 ::Dynamic FlxOgmo3Loader_obj::getLevelValue(::String value){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_45_getLevelValue)
HXDLIN(  45)		return ::Reflect_obj::field(this->level,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOgmo3Loader_obj,getLevelValue,return )

 ::flixel::tile::FlxTilemap FlxOgmo3Loader_obj::loadTilemap( ::Dynamic tileGraphic,::String __o_tileLayer, ::flixel::tile::FlxTilemap tilemap){
            		::String tileLayer = __o_tileLayer;
            		if (::hx::IsNull(__o_tileLayer)) tileLayer = HX_("tiles",85,fd,34,10);
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_60_loadTilemap)
HXLINE(  61)		if (::hx::IsNull( tilemap )) {
HXLINE(  62)			tilemap =  ::flixel::tile::FlxTilemap_obj::__alloc( HX_CTX );
            		}
HXLINE(  64)		 ::Dynamic layer = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getTileLayer(this->level,tileLayer);
HXLINE(  65)		 ::Dynamic tileset = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getTilesetData(this->project,( (::String)(layer->__Field(HX_("tileset",34,81,93,45),::hx::paccDynamic)) ));
HXLINE(  66)		switch((int)(( (int)(layer->__Field(HX_("arrayMode",9c,ad,d2,91),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE(  69)				tilemap->loadMapFromArray(( (::Array< int >)(layer->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),( (int)(layer->__Field(HX_("gridCellsX",0d,56,a1,3a),::hx::paccDynamic)) ),( (int)(layer->__Field(HX_("gridCellsY",0e,56,a1,3a),::hx::paccDynamic)) ),tileGraphic,tileset->__Field(HX_("tileWidth",f8,13,be,55),::hx::paccDynamic),tileset->__Field(HX_("tileHeight",b5,dd,e2,66),::hx::paccDynamic),null(),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE(  71)				tilemap->loadMapFrom2DArray(( (::Array< ::Dynamic>)(layer->__Field(HX_("data2D",7c,e0,84,22),::hx::paccDynamic)) ),tileGraphic,tileset->__Field(HX_("tileWidth",f8,13,be,55),::hx::paccDynamic),tileset->__Field(HX_("tileHeight",b5,dd,e2,66),::hx::paccDynamic),null(),null(),null(),null());
            			}
            			break;
            		}
HXLINE(  73)		return tilemap;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxOgmo3Loader_obj,loadTilemap,return )

 ::flixel::addons::tile::FlxTilemapExt FlxOgmo3Loader_obj::loadTilemapExt( ::Dynamic tileGraphic,::String __o_tileLayer, ::flixel::addons::tile::FlxTilemapExt tilemap){
            		::String tileLayer = __o_tileLayer;
            		if (::hx::IsNull(__o_tileLayer)) tileLayer = HX_("tiles",85,fd,34,10);
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_90_loadTilemapExt)
HXLINE(  91)		if (::hx::IsNull( tilemap )) {
HXLINE(  92)			tilemap =  ::flixel::addons::tile::FlxTilemapExt_obj::__alloc( HX_CTX );
            		}
HXLINE(  94)		 ::Dynamic layer = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getTileLayer(this->level,tileLayer);
HXLINE(  95)		 ::Dynamic tileset = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getTilesetData(this->project,( (::String)(layer->__Field(HX_("tileset",34,81,93,45),::hx::paccDynamic)) ));
HXLINE(  96)		switch((int)(( (int)(layer->__Field(HX_("arrayMode",9c,ad,d2,91),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE(  99)				tilemap->loadMapFromArray(( (::Array< int >)(layer->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),( (int)(layer->__Field(HX_("gridCellsX",0d,56,a1,3a),::hx::paccDynamic)) ),( (int)(layer->__Field(HX_("gridCellsY",0e,56,a1,3a),::hx::paccDynamic)) ),tileGraphic,tileset->__Field(HX_("tileWidth",f8,13,be,55),::hx::paccDynamic),tileset->__Field(HX_("tileHeight",b5,dd,e2,66),::hx::paccDynamic),null(),null(),null(),null());
HXLINE( 100)				if (::hx::IsNotNull( layer->__Field(HX_("tileFlags",39,89,e7,8d),::hx::paccDynamic) )) {
HXLINE( 102)					::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::applyFlagsToTilemapExt(( (::Array< int >)(layer->__Field(HX_("tileFlags",39,89,e7,8d),::hx::paccDynamic)) ),tilemap);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 106)				tilemap->loadMapFrom2DArray(( (::Array< ::Dynamic>)(layer->__Field(HX_("data2D",7c,e0,84,22),::hx::paccDynamic)) ),tileGraphic,tileset->__Field(HX_("tileWidth",f8,13,be,55),::hx::paccDynamic),tileset->__Field(HX_("tileHeight",b5,dd,e2,66),::hx::paccDynamic),null(),null(),null(),null());
HXLINE( 107)				if (::hx::IsNotNull( layer->__Field(HX_("tileFlags2D",4b,35,c7,7d),::hx::paccDynamic) )) {
HXLINE( 109)					::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::applyFlagsToTilemapExt(::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(( (::Array< ::Dynamic>)(layer->__Field(HX_("tileFlags2D",4b,35,c7,7d),::hx::paccDynamic)) )),tilemap);
            				}
            			}
            			break;
            		}
HXLINE( 112)		return tilemap;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxOgmo3Loader_obj,loadTilemapExt,return )

 ::haxe::ds::StringMap FlxOgmo3Loader_obj::loadGridMap(::String __o_gridLayer){
            		::String gridLayer = __o_gridLayer;
            		if (::hx::IsNull(__o_gridLayer)) gridLayer = HX_("grid",c6,d6,6b,44);
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_125_loadGridMap)
HXLINE( 126)		 ::Dynamic gridLayer1 = ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getGridLayer(this->level,gridLayer);
HXLINE( 127)		 ::haxe::ds::StringMap out =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 128)		switch((int)(( (int)(gridLayer1->__Field(HX_("arrayMode",9c,ad,d2,91),::hx::paccDynamic)) ))){
            			case (int)0: {
HXLINE( 131)				int _g = 0;
HXDLIN( 131)				int _g1 = ( (::Array< ::String >)(gridLayer1->__Field(HX_("grid",c6,d6,6b,44),::hx::paccDynamic)) )->length;
HXDLIN( 131)				while((_g < _g1)){
HXLINE( 131)					_g = (_g + 1);
HXDLIN( 131)					int i = (_g - 1);
HXLINE( 133)					if (!(out->exists(( (::String)( ::Dynamic(gridLayer1->__Field(HX_("grid",c6,d6,6b,44),::hx::paccDynamic))->__GetItem(i)) )))) {
HXLINE( 134)						out->set(( (::String)( ::Dynamic(gridLayer1->__Field(HX_("grid",c6,d6,6b,44),::hx::paccDynamic))->__GetItem(i)) ),::Array_obj< ::Dynamic>::__new(0));
            					}
HXLINE( 135)					::Array< ::Dynamic> _hx_tmp = ( (::Array< ::Dynamic>)(out->get( ::Dynamic(gridLayer1->__Field(HX_("grid",c6,d6,6b,44),::hx::paccDynamic))->__GetItem(i))) );
HXDLIN( 135)					Float X = ( (Float)((::hx::Mod(i,gridLayer1->__Field(HX_("gridCellsX",0d,56,a1,3a),::hx::paccDynamic)) * ( (int)(gridLayer1->__Field(HX_("gridCellWidth",5e,d9,40,2d),::hx::paccDynamic)) ))) );
HXDLIN( 135)					Float Y = ( (Float)((::Math_obj::floor((( (Float)(i) ) / ( (Float)(gridLayer1->__Field(HX_("gridCellsX",0d,56,a1,3a),::hx::paccDynamic)) ))) * ( (int)(gridLayer1->__Field(HX_("gridCellHeight",8f,d1,cc,21),::hx::paccDynamic)) ))) );
HXDLIN( 135)					 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 135)					point->_inPool = false;
HXDLIN( 135)					_hx_tmp->push(point);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 139)				int _g = 0;
HXDLIN( 139)				int _g1 = ( (::Array< ::Dynamic>)(gridLayer1->__Field(HX_("grid2D",18,c0,23,18),::hx::paccDynamic)) )->length;
HXDLIN( 139)				while((_g < _g1)){
HXLINE( 139)					_g = (_g + 1);
HXDLIN( 139)					int j = (_g - 1);
HXLINE( 140)					{
HXLINE( 140)						int _g1 = 0;
HXDLIN( 140)						int _g2 = ( (::Array< ::String >)( ::Dynamic(gridLayer1->__Field(HX_("grid2D",18,c0,23,18),::hx::paccDynamic))->__GetItem(j)) )->length;
HXDLIN( 140)						while((_g1 < _g2)){
HXLINE( 140)							_g1 = (_g1 + 1);
HXDLIN( 140)							int i = (_g1 - 1);
HXLINE( 142)							if (!(out->exists(( (::String)( ::Dynamic(gridLayer1->__Field(HX_("grid2D",18,c0,23,18),::hx::paccDynamic))->__GetItem(j)->__GetItem(i)) )))) {
HXLINE( 143)								out->set(( (::String)( ::Dynamic(gridLayer1->__Field(HX_("grid2D",18,c0,23,18),::hx::paccDynamic))->__GetItem(j)->__GetItem(i)) ),::Array_obj< ::Dynamic>::__new(0));
            							}
HXLINE( 144)							::Array< ::Dynamic> _hx_tmp = ( (::Array< ::Dynamic>)(out->get( ::Dynamic(gridLayer1->__Field(HX_("grid2D",18,c0,23,18),::hx::paccDynamic))->__GetItem(j)->__GetItem(i))) );
HXDLIN( 144)							Float X = ( (Float)((i * ( (int)(gridLayer1->__Field(HX_("gridCellWidth",5e,d9,40,2d),::hx::paccDynamic)) ))) );
HXDLIN( 144)							Float Y = ( (Float)((j * ( (int)(gridLayer1->__Field(HX_("gridCellHeight",8f,d1,cc,21),::hx::paccDynamic)) ))) );
HXDLIN( 144)							 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 144)							point->_inPool = false;
HXDLIN( 144)							_hx_tmp->push(point);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 147)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOgmo3Loader_obj,loadGridMap,return )

void FlxOgmo3Loader_obj::loadEntities( ::Dynamic entityLoadCallback,::String __o_entityLayer){
            		::String entityLayer = __o_entityLayer;
            		if (::hx::IsNull(__o_entityLayer)) entityLayer = HX_("entities",41,96,95,92);
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_174_loadEntities)
HXDLIN( 174)		int _g = 0;
HXDLIN( 174)		::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getEntityLayer(this->level,entityLayer)->__Field(HX_("entities",41,96,95,92),::hx::paccDynamic)) );
HXDLIN( 174)		while((_g < _g1->length)){
HXDLIN( 174)			 ::Dynamic entity = _g1->__get(_g);
HXDLIN( 174)			_g = (_g + 1);
HXLINE( 175)			entityLoadCallback(entity);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,loadEntities,(void))

 ::flixel::group::FlxTypedGroup FlxOgmo3Loader_obj::loadDecals(::String __o_decalLayer,::String decalsPath){
            		::String decalLayer = __o_decalLayer;
            		if (::hx::IsNull(__o_decalLayer)) decalLayer = HX_("decals",a6,c4,e2,64);
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_187_loadDecals)
HXLINE( 188)		if (!(::StringTools_obj::endsWith(decalsPath,HX_("/",2f,00,00,00)))) {
HXLINE( 189)			decalsPath = (decalsPath + HX_("/",2f,00,00,00));
            		}
HXLINE( 190)		 ::flixel::group::FlxTypedGroup g =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 191)		{
HXLINE( 191)			int _g = 0;
HXDLIN( 191)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::getDecalLayer(this->level,decalLayer)->__Field(HX_("decals",a6,c4,e2,64),::hx::paccDynamic)) );
HXDLIN( 191)			while((_g < _g1->length)){
HXLINE( 191)				 ::Dynamic decal = _g1->__get(_g);
HXDLIN( 191)				_g = (_g + 1);
HXLINE( 193)				 ::flixel::FlxSprite s =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,decal->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),decal->__Field(HX_("y",79,00,00,00),::hx::paccDynamic), ::Dynamic((decalsPath + decal->__Field(HX_("texture",db,c8,e0,9e),::hx::paccDynamic))));
HXLINE( 194)				 ::flixel::math::FlxPoint s1 = s->offset;
HXDLIN( 194)				Float _hx_tmp = (s->get_width() / ( (Float)(2) ));
HXDLIN( 194)				s1->set(_hx_tmp,(s->get_height() / ( (Float)(2) )));
HXLINE( 195)				if (::hx::IsNotNull( decal->__Field(HX_("scaleX",8e,ea,25,3c),::hx::paccDynamic) )) {
HXLINE( 196)					s->scale->set_x(( (Float)(decal->__Field(HX_("scaleX",8e,ea,25,3c),::hx::paccDynamic)) ));
            				}
HXLINE( 197)				if (::hx::IsNotNull( decal->__Field(HX_("scaleY",8f,ea,25,3c),::hx::paccDynamic) )) {
HXLINE( 198)					s->scale->set_y(( (Float)(decal->__Field(HX_("scaleY",8f,ea,25,3c),::hx::paccDynamic)) ));
            				}
HXLINE( 199)				if (::hx::IsNotNull( decal->__Field(HX_("rotation",3e,3d,86,08),::hx::paccDynamic) )) {
HXLINE( 200)					Float _hx_tmp;
HXDLIN( 200)					if (( (bool)(this->project->__Field(HX_("anglesRadians",12,81,41,86),::hx::paccDynamic)) )) {
HXLINE( 200)						_hx_tmp = (( (Float)(decal->__Field(HX_("rotation",3e,3d,86,08),::hx::paccDynamic)) ) * (( (Float)(180) ) / ::Math_obj::PI));
            					}
            					else {
HXLINE( 200)						_hx_tmp = ( (Float)(decal->__Field(HX_("rotation",3e,3d,86,08),::hx::paccDynamic)) );
            					}
HXDLIN( 200)					s->set_angle(_hx_tmp);
            				}
HXLINE( 201)				g->add(s).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
HXLINE( 203)		return g;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,loadDecals,return )

 ::Dynamic FlxOgmo3Loader_obj::parseLevelJSON(::String json){
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_211_parseLevelJSON)
HXDLIN( 211)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,json)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxOgmo3Loader_obj,parseLevelJSON,return )

 ::Dynamic FlxOgmo3Loader_obj::parseProjectJSON(::String json){
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_219_parseProjectJSON)
HXDLIN( 219)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,json)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxOgmo3Loader_obj,parseProjectJSON,return )

 ::Dynamic FlxOgmo3Loader_obj::getTileLayer( ::Dynamic data,::String name){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_226_getTileLayer)
HXLINE( 227)		{
HXLINE( 227)			int _g = 0;
HXDLIN( 227)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("layers",82,15,b1,58),::hx::paccDynamic)) );
HXDLIN( 227)			while((_g < _g1->length)){
HXLINE( 227)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN( 227)				_g = (_g + 1);
HXLINE( 228)				if (::hx::IsEq( layer->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 229)					return layer;
            				}
            			}
            		}
HXLINE( 230)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,getTileLayer,return )

 ::Dynamic FlxOgmo3Loader_obj::getGridLayer( ::Dynamic data,::String name){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_237_getGridLayer)
HXLINE( 238)		{
HXLINE( 238)			int _g = 0;
HXDLIN( 238)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("layers",82,15,b1,58),::hx::paccDynamic)) );
HXDLIN( 238)			while((_g < _g1->length)){
HXLINE( 238)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN( 238)				_g = (_g + 1);
HXLINE( 239)				if (::hx::IsEq( layer->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 240)					return layer;
            				}
            			}
            		}
HXLINE( 241)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,getGridLayer,return )

 ::Dynamic FlxOgmo3Loader_obj::getEntityLayer( ::Dynamic data,::String name){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_248_getEntityLayer)
HXLINE( 249)		{
HXLINE( 249)			int _g = 0;
HXDLIN( 249)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("layers",82,15,b1,58),::hx::paccDynamic)) );
HXDLIN( 249)			while((_g < _g1->length)){
HXLINE( 249)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN( 249)				_g = (_g + 1);
HXLINE( 250)				if (::hx::IsEq( layer->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 251)					return layer;
            				}
            			}
            		}
HXLINE( 252)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,getEntityLayer,return )

 ::Dynamic FlxOgmo3Loader_obj::getDecalLayer( ::Dynamic data,::String name){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_259_getDecalLayer)
HXLINE( 260)		{
HXLINE( 260)			int _g = 0;
HXDLIN( 260)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("layers",82,15,b1,58),::hx::paccDynamic)) );
HXDLIN( 260)			while((_g < _g1->length)){
HXLINE( 260)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN( 260)				_g = (_g + 1);
HXLINE( 261)				if (::hx::IsEq( layer->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 262)					return layer;
            				}
            			}
            		}
HXLINE( 263)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,getDecalLayer,return )

 ::Dynamic FlxOgmo3Loader_obj::getTilesetData( ::Dynamic data,::String name){
            	HX_STACKFRAME(&_hx_pos_d2010db050bfafae_270_getTilesetData)
HXLINE( 271)		{
HXLINE( 271)			int _g = 0;
HXDLIN( 271)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(data->__Field(HX_("tilesets",bf,8c,7d,9b),::hx::paccDynamic)) );
HXDLIN( 271)			while((_g < _g1->length)){
HXLINE( 271)				 ::Dynamic tileset = _g1->__get(_g);
HXDLIN( 271)				_g = (_g + 1);
HXLINE( 272)				if (::hx::IsEq( tileset->__Field(HX_("label",f4,0d,af,6f),::hx::paccDynamic),name )) {
HXLINE( 273)					return tileset;
            				}
            			}
            		}
HXLINE( 274)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,getTilesetData,return )

void FlxOgmo3Loader_obj::applyFlagsToTilemapExt(::Array< int > tileFlags, ::flixel::addons::tile::FlxTilemapExt tilemap){
            	HX_GC_STACKFRAME(&_hx_pos_d2010db050bfafae_281_applyFlagsToTilemapExt)
HXLINE( 282)		::Array< ::Dynamic> specialTiles = ::Array_obj< ::Dynamic>::__new();
HXLINE( 284)		{
HXLINE( 284)			int _g = 0;
HXDLIN( 284)			int _g1 = tileFlags->length;
HXDLIN( 284)			while((_g < _g1)){
HXLINE( 284)				_g = (_g + 1);
HXDLIN( 284)				int i = (_g - 1);
HXLINE( 286)				int flag = tileFlags->__get(i);
HXLINE( 287)				 ::flixel::addons::tile::FlxTileSpecial specialTile =  ::flixel::addons::tile::FlxTileSpecial_obj::__alloc( HX_CTX ,tilemap->getTileByIndex(i),false,false,0);
HXLINE( 289)				if (((flag & 4) > 0)) {
HXLINE( 290)					specialTile->flipX = true;
            				}
HXLINE( 291)				if (((flag & 2) > 0)) {
HXLINE( 292)					specialTile->flipY = true;
            				}
HXLINE( 293)				if (((flag & 1) > 0)) {
HXLINE( 295)					if (specialTile->flipY) {
HXLINE( 297)						specialTile->flipY = false;
HXLINE( 298)						specialTile->rotate = 2;
            					}
            					else {
HXLINE( 302)						specialTile->flipX = !(specialTile->flipX);
HXLINE( 303)						specialTile->rotate = 1;
            					}
            				}
HXLINE( 306)				specialTiles->push(specialTile);
            			}
            		}
HXLINE( 308)		tilemap->setSpecialTiles(specialTiles);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxOgmo3Loader_obj,applyFlagsToTilemapExt,(void))


::hx::ObjectPtr< FlxOgmo3Loader_obj > FlxOgmo3Loader_obj::__new(::String projectData,::String levelData) {
	::hx::ObjectPtr< FlxOgmo3Loader_obj > __this = new FlxOgmo3Loader_obj();
	__this->__construct(projectData,levelData);
	return __this;
}

::hx::ObjectPtr< FlxOgmo3Loader_obj > FlxOgmo3Loader_obj::__alloc(::hx::Ctx *_hx_ctx,::String projectData,::String levelData) {
	FlxOgmo3Loader_obj *__this = (FlxOgmo3Loader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxOgmo3Loader_obj), true, "flixel.addons.editors.ogmo.FlxOgmo3Loader"));
	*(void **)__this = FlxOgmo3Loader_obj::_hx_vtable;
	__this->__construct(projectData,levelData);
	return __this;
}

FlxOgmo3Loader_obj::FlxOgmo3Loader_obj()
{
}

void FlxOgmo3Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxOgmo3Loader);
	HX_MARK_MEMBER_NAME(project,"project");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_END_CLASS();
}

void FlxOgmo3Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(project,"project");
	HX_VISIT_MEMBER_NAME(level,"level");
}

::hx::Val FlxOgmo3Loader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return ::hx::Val( level ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return ::hx::Val( project ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadDecals") ) { return ::hx::Val( loadDecals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTilemap") ) { return ::hx::Val( loadTilemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGridMap") ) { return ::hx::Val( loadGridMap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEntities") ) { return ::hx::Val( loadEntities_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLevelValue") ) { return ::hx::Val( getLevelValue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadTilemapExt") ) { return ::hx::Val( loadTilemapExt_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxOgmo3Loader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getTileLayer") ) { outValue = getTileLayer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getGridLayer") ) { outValue = getGridLayer_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDecalLayer") ) { outValue = getDecalLayer_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseLevelJSON") ) { outValue = parseLevelJSON_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEntityLayer") ) { outValue = getEntityLayer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTilesetData") ) { outValue = getTilesetData_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"parseProjectJSON") ) { outValue = parseProjectJSON_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"applyFlagsToTilemapExt") ) { outValue = applyFlagsToTilemapExt_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxOgmo3Loader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { project=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxOgmo3Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("project",d9,12,eb,f5));
	outFields->push(HX_("level",84,15,63,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxOgmo3Loader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxOgmo3Loader_obj,project),HX_("project",d9,12,eb,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxOgmo3Loader_obj,level),HX_("level",84,15,63,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxOgmo3Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxOgmo3Loader_obj_sMemberFields[] = {
	HX_("project",d9,12,eb,f5),
	HX_("level",84,15,63,72),
	HX_("getLevelValue",83,b7,c4,6d),
	HX_("loadTilemap",a8,ae,2c,16),
	HX_("loadTilemapExt",d9,ae,b4,7f),
	HX_("loadGridMap",f0,a9,d6,d7),
	HX_("loadEntities",87,82,fe,4b),
	HX_("loadDecals",6c,f3,0d,1a),
	::String(null()) };

::hx::Class FlxOgmo3Loader_obj::__mClass;

static ::String FlxOgmo3Loader_obj_sStaticFields[] = {
	HX_("parseLevelJSON",f9,62,40,c0),
	HX_("parseProjectJSON",0e,dc,c2,94),
	HX_("getTileLayer",4d,7c,72,0a),
	HX_("getGridLayer",b5,69,da,73),
	HX_("getEntityLayer",b8,f2,48,46),
	HX_("getDecalLayer",9a,a7,64,c4),
	HX_("getTilesetData",88,00,99,61),
	HX_("applyFlagsToTilemapExt",07,db,ed,81),
	::String(null())
};

void FlxOgmo3Loader_obj::__register()
{
	FlxOgmo3Loader_obj _hx_dummy;
	FlxOgmo3Loader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.ogmo.FlxOgmo3Loader",3d,d2,d6,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxOgmo3Loader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxOgmo3Loader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxOgmo3Loader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxOgmo3Loader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxOgmo3Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxOgmo3Loader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace ogmo
