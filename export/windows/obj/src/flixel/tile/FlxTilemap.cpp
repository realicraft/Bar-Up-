#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1146cbfc6764fb25_94_new,"flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",94,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_239_destroy,"flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",239,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_286_set_frames,"flixel.tile.FlxTilemap","set_frames",0xb39c4aa7,"flixel.tile.FlxTilemap.set_frames","flixel/tile/FlxTilemap.hx",286,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_303_onGameResized,"flixel.tile.FlxTilemap","onGameResized",0x240fb4fb,"flixel.tile.FlxTilemap.onGameResized","flixel/tile/FlxTilemap.hx",303,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_308_onCameraChanged,"flixel.tile.FlxTilemap","onCameraChanged",0xe013f4ec,"flixel.tile.FlxTilemap.onCameraChanged","flixel/tile/FlxTilemap.hx",308,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_312_cacheGraphics,"flixel.tile.FlxTilemap","cacheGraphics",0x759126e9,"flixel.tile.FlxTilemap.cacheGraphics","flixel/tile/FlxTilemap.hx",312,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_336_initTileObjects,"flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",336,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_399_computeDimensions,"flixel.tile.FlxTilemap","computeDimensions",0x3602f860,"flixel.tile.FlxTilemap.computeDimensions","flixel/tile/FlxTilemap.hx",399,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_409_updateMap,"flixel.tile.FlxTilemap","updateMap",0x271f1fcf,"flixel.tile.FlxTilemap.updateMap","flixel/tile/FlxTilemap.hx",409,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_499_isOnScreen,"flixel.tile.FlxTilemap","isOnScreen",0xb4cad0b9,"flixel.tile.FlxTilemap.isOnScreen","flixel/tile/FlxTilemap.hx",499,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_514_draw,"flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",514,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_567_refreshBuffers,"flixel.tile.FlxTilemap","refreshBuffers",0x89f6f19c,"flixel.tile.FlxTilemap.refreshBuffers","flixel/tile/FlxTilemap.hx",567,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_587_setDirty,"flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",587,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_609_overlapsWithCallback,"flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",609,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_711_getTileIndexByCoords,"flixel.tile.FlxTilemap","getTileIndexByCoords",0xb5ce22c7,"flixel.tile.FlxTilemap.getTileIndexByCoords","flixel/tile/FlxTilemap.hx",711,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_723_getTileCoordsByIndex,"flixel.tile.FlxTilemap","getTileCoordsByIndex",0xe0680d7d,"flixel.tile.FlxTilemap.getTileCoordsByIndex","flixel/tile/FlxTilemap.hx",723,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_741_getTileCoords,"flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",741,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_778_follow,"flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",778,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_801_ray,"flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",801,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_910_tileToSprite,"flixel.tile.FlxTilemap","tileToSprite",0xe7482ef2,"flixel.tile.FlxTilemap.tileToSprite","flixel/tile/FlxTilemap.hx",910,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_944_updateBuffers,"flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",944,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_957_drawTilemap,"flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",957,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1143_updateTile,"flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",1143,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1152_createBuffer,"flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",1152,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1160_set_antialiasing,"flixel.tile.FlxTilemap","set_antialiasing",0x6cc568b5,"flixel.tile.FlxTilemap.set_antialiasing","flixel/tile/FlxTilemap.hx",1160,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1171_set_graphic,"flixel.tile.FlxTilemap","set_graphic",0xa0b86087,"flixel.tile.FlxTilemap.set_graphic","flixel/tile/FlxTilemap.hx",1171,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1188_set_pixelPerfectRender,"flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",1188,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1197_set_alpha,"flixel.tile.FlxTilemap","set_alpha",0xecd0277d,"flixel.tile.FlxTilemap.set_alpha","flixel/tile/FlxTilemap.hx",1197,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1204_set_color,"flixel.tile.FlxTilemap","set_color",0x1595f182,"flixel.tile.FlxTilemap.set_color","flixel/tile/FlxTilemap.hx",1204,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1214_updateColorTransform,"flixel.tile.FlxTilemap","updateColorTransform",0x6f14b936,"flixel.tile.FlxTilemap.updateColorTransform","flixel/tile/FlxTilemap.hx",1214,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1227_set_blend,"flixel.tile.FlxTilemap","set_blend",0x802e6870,"flixel.tile.FlxTilemap.set_blend","flixel/tile/FlxTilemap.hx",1227,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1233_setScaleXYCallback,"flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",1233,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1239_setScaleXCallback,"flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",1239,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1252_setScaleYCallback,"flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",1252,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1271_defaultTileToSprite,"flixel.tile.FlxTilemap","defaultTileToSprite",0xb4e0664b,"flixel.tile.FlxTilemap.defaultTileToSprite","flixel/tile/FlxTilemap.hx",1271,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1282_set_allowCollisions,"flixel.tile.FlxTilemap","set_allowCollisions",0x96e24689,"flixel.tile.FlxTilemap.set_allowCollisions","flixel/tile/FlxTilemap.hx",1282,0x448feb74)
namespace flixel{
namespace tile{

void FlxTilemap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_94_new)
HXLINE( 205)		this->_checkBufferChanges = false;
HXLINE( 183)		this->_scaledTileHeight = ((Float)0);
HXLINE( 182)		this->_scaledTileWidth = ((Float)0);
HXLINE( 180)		this->_tileHeight = 0;
HXLINE( 175)		this->_tileWidth = 0;
HXLINE( 170)		this->_buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 165)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 160)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 145)		this->blend = null();
HXLINE( 140)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 138)		this->alpha = ((Float)1.0);
HXLINE( 133)		this->color = 16777215;
HXLINE( 120)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 120)		point->_inPool = false;
HXDLIN( 120)		this->offset = point;
HXLINE( 114)		this->antialiasing = false;
HXLINE( 102)		this->useScaleHack = true;
HXLINE( 209)		super::__construct();
HXLINE( 211)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 213)			this->_helperPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 214)			this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 217)		this->scale =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->setScaleXCallback_dyn(),this->setScaleYCallback_dyn(),this->setScaleXYCallback_dyn());
HXLINE( 218)		this->scale->set(1,1);
HXLINE( 220)		::flixel::FlxG_obj::signals->gameResized->add(this->onGameResized_dyn());
HXLINE( 221)		::flixel::FlxG_obj::cameras->cameraAdded->add(this->onCameraChanged_dyn());
HXLINE( 222)		::flixel::FlxG_obj::cameras->cameraRemoved->add(this->onCameraChanged_dyn());
HXLINE( 223)		::flixel::FlxG_obj::cameras->cameraResized->add(this->onCameraChanged_dyn());
            	}

Dynamic FlxTilemap_obj::__CreateEmpty() { return new FlxTilemap_obj; }

void *FlxTilemap_obj::_hx_vtable = 0;

Dynamic FlxTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemap_obj > _hx_result = new FlxTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d6253b5) {
		if (inClassId<=(int)0x1dc5d3c6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1dc5d3c6;
		} else {
			return inClassId==(int)0x3d6253b5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTilemap_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_239_destroy)
HXLINE( 240)		this->_flashPoint = null();
HXLINE( 241)		this->_flashRect = null();
HXLINE( 243)		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
HXLINE( 244)		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
HXLINE( 246)		if (!(::flixel::FlxG_obj::renderBlit)) {
HXLINE( 257)			this->_helperPoint = null();
HXLINE( 258)			this->_matrix = null();
            		}
HXLINE( 261)		this->set_frames(null());
HXLINE( 262)		this->set_graphic(null());
HXLINE( 265)		this->scale = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE( 266)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 268)		this->colorTransform = null();
HXLINE( 270)		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResized_dyn());
HXLINE( 271)		::flixel::FlxG_obj::cameras->cameraAdded->remove(this->onCameraChanged_dyn());
HXLINE( 272)		::flixel::FlxG_obj::cameras->cameraRemoved->remove(this->onCameraChanged_dyn());
HXLINE( 273)		::flixel::FlxG_obj::cameras->cameraResized->remove(this->onCameraChanged_dyn());
HXLINE( 280)		this->shader = null();
HXLINE( 282)		this->super::destroy();
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxTilemap_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_286_set_frames)
HXLINE( 287)		this->frames = value;
HXLINE( 289)		if (::hx::IsNotNull( value )) {
HXLINE( 291)			this->_tileWidth = ::Std_obj::_hx_int(value->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->x);
HXLINE( 292)			this->_tileHeight = ::Std_obj::_hx_int(value->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->y);
HXLINE( 293)			this->_flashRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->_tileWidth) ),( (Float)(this->_tileHeight) ));
HXLINE( 294)			this->set_graphic(value->parent);
HXLINE( 295)			this->postGraphicLoad();
            		}
HXLINE( 298)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_frames,return )

void FlxTilemap_obj::onGameResized(int _,int _1){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_303_onGameResized)
HXDLIN( 303)		this->_checkBufferChanges = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResized,(void))

void FlxTilemap_obj::onCameraChanged( ::flixel::FlxCamera _){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_308_onCameraChanged)
HXDLIN( 308)		this->_checkBufferChanges = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,onCameraChanged,(void))

void FlxTilemap_obj::cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_312_cacheGraphics)
HXLINE( 313)		if (::Std_obj::isOfType(TileGraphic,::hx::ClassOf< ::flixel::graphics::frames::FlxFramesCollection >())) {
HXLINE( 315)			this->set_frames(( ( ::flixel::graphics::frames::FlxFramesCollection)(TileGraphic) ));
HXLINE( 316)			return;
            		}
HXLINE( 319)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null());
HXLINE( 320)		if (::hx::IsNull( graph )) {
HXLINE( 321)			return;
            		}
HXLINE( 324)		this->_tileWidth = TileWidth;
HXLINE( 325)		if ((this->_tileWidth <= 0)) {
HXLINE( 326)			this->_tileWidth = graph->height;
            		}
HXLINE( 328)		this->_tileHeight = TileHeight;
HXLINE( 329)		if ((this->_tileHeight <= 0)) {
HXLINE( 330)			this->_tileHeight = this->_tileWidth;
            		}
HXLINE( 332)		Float X = ( (Float)(this->_tileWidth) );
HXDLIN( 332)		Float Y = ( (Float)(this->_tileHeight) );
HXDLIN( 332)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 332)		point->_inPool = false;
HXDLIN( 332)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            	}


void FlxTilemap_obj::initTileObjects(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_336_initTileObjects)
HXLINE( 337)		if (::hx::IsNull( this->frames )) {
HXLINE( 338)			return;
            		}
HXLINE( 340)		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
HXLINE( 342)		this->_tileObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 344)		int length = this->frames->frames->length;
HXLINE( 345)		length = (length + this->_startingIndex);
HXLINE( 347)		{
HXLINE( 347)			int _g = 0;
HXDLIN( 347)			int _g1 = length;
HXDLIN( 347)			while((_g < _g1)){
HXLINE( 347)				_g = (_g + 1);
HXDLIN( 347)				int i = (_g - 1);
HXLINE( 348)				int _hx_tmp;
HXDLIN( 348)				if ((i >= this->_collideIndex)) {
HXLINE( 348)					_hx_tmp = this->allowCollisions;
            				}
            				else {
HXLINE( 348)					_hx_tmp = 0;
            				}
HXDLIN( 348)				this->_tileObjects->set(i, ::flixel::tile::FlxTile_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),i,( (Float)(this->_tileWidth) ),( (Float)(this->_tileHeight) ),(i >= this->_drawIndex),_hx_tmp));
            			}
            		}
            	}


void FlxTilemap_obj::computeDimensions(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_399_computeDimensions)
HXLINE( 400)		this->_scaledTileWidth = (( (Float)(this->_tileWidth) ) * this->scale->x);
HXLINE( 401)		this->_scaledTileHeight = (( (Float)(this->_tileHeight) ) * this->scale->y);
HXLINE( 404)		this->set_width((( (Float)(this->widthInTiles) ) * this->_scaledTileWidth));
HXLINE( 405)		this->set_height((( (Float)(this->heightInTiles) ) * this->_scaledTileHeight));
            	}


void FlxTilemap_obj::updateMap(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_409_updateMap)
HXLINE( 415)		int numTiles = this->_tileObjects->get_length();
HXLINE( 416)		{
HXLINE( 416)			int _g = 0;
HXDLIN( 416)			int _g1 = numTiles;
HXDLIN( 416)			while((_g < _g1)){
HXLINE( 416)				_g = (_g + 1);
HXDLIN( 416)				int i = (_g - 1);
HXLINE( 417)				this->updateTile(i);
            			}
            		}
            	}


bool FlxTilemap_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_499_isOnScreen)
HXLINE( 500)		if (::hx::IsNull( Camera )) {
HXLINE( 501)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 503)		Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));
HXLINE( 504)		Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));
HXLINE( 506)		this->_point->set(minX,minY);
HXLINE( 507)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN( 507)		bool contained;
HXDLIN( 507)		bool contained1;
HXDLIN( 507)		bool contained2;
HXDLIN( 507)		if (((point->x + (this->_scaledTileWidth * ( (Float)(this->widthInTiles) ))) > Camera->viewOffsetX)) {
HXLINE( 507)			contained2 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE( 507)			contained2 = false;
            		}
HXDLIN( 507)		if (contained2) {
HXLINE( 507)			contained1 = ((point->y + (this->_scaledTileHeight * ( (Float)(this->heightInTiles) ))) > Camera->viewOffsetY);
            		}
            		else {
HXLINE( 507)			contained1 = false;
            		}
HXDLIN( 507)		if (contained1) {
HXLINE( 507)			contained = (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE( 507)			contained = false;
            		}
HXDLIN( 507)		if (point->_weak) {
HXLINE( 507)			point->put();
            		}
HXDLIN( 507)		return contained;
            	}


void FlxTilemap_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_514_draw)
HXLINE( 516)		if (::hx::IsNull( this->graphic )) {
HXLINE( 517)			return;
            		}
HXLINE( 519)		if (this->_checkBufferChanges) {
HXLINE( 521)			this->refreshBuffers();
HXLINE( 522)			this->_checkBufferChanges = false;
            		}
HXLINE( 525)		 ::flixel::FlxCamera camera;
HXLINE( 526)		 ::flixel::tile::FlxTilemapBuffer buffer;
HXLINE( 527)		int l = this->get_cameras()->length;
HXLINE( 529)		{
HXLINE( 529)			int _g = 0;
HXDLIN( 529)			int _g1 = l;
HXDLIN( 529)			while((_g < _g1)){
HXLINE( 529)				_g = (_g + 1);
HXDLIN( 529)				int i = (_g - 1);
HXLINE( 531)				camera = this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 533)				bool _hx_tmp;
HXDLIN( 533)				bool _hx_tmp1;
HXDLIN( 533)				if (camera->visible) {
HXLINE( 533)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 533)					_hx_tmp1 = true;
            				}
HXDLIN( 533)				if (!(_hx_tmp1)) {
HXLINE( 533)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 533)					_hx_tmp = true;
            				}
HXDLIN( 533)				if (_hx_tmp) {
HXLINE( 534)					continue;
            				}
HXLINE( 536)				if (::hx::IsNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE( 537)					::Array< ::Dynamic> _hx_tmp = this->_buffers;
HXDLIN( 537)					 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXDLIN( 537)					buffer->pixelPerfectRender = this->pixelPerfectRender;
HXDLIN( 537)					buffer->antialiasing = this->antialiasing;
HXDLIN( 537)					_hx_tmp[i] = buffer;
            				}
HXLINE( 539)				buffer = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXLINE( 541)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 543)					if (buffer->isDirty(::hx::ObjectPtr<OBJ_>(this),camera)) {
HXLINE( 544)						this->drawTilemap(buffer,camera);
            					}
HXLINE( 546)					{
HXLINE( 546)						 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
HXDLIN( 546)						Float Y = buffer->y;
HXDLIN( 546)						_this->set_x((_this->x + buffer->x));
HXDLIN( 546)						_this->set_y((_this->y + Y));
HXDLIN( 546)						 ::flixel::math::FlxPoint _this1 = _this;
HXDLIN( 546)						 ::openfl::geom::Point FlashPoint = this->_flashPoint;
HXDLIN( 546)						if (::hx::IsNull( FlashPoint )) {
HXLINE( 546)							FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            						}
HXDLIN( 546)						FlashPoint->x = _this1->x;
HXDLIN( 546)						FlashPoint->y = _this1->y;
            					}
HXLINE( 547)					buffer->draw(camera,this->_flashPoint,this->scale->x,this->scale->y);
            				}
            				else {
HXLINE( 551)					this->drawTilemap(buffer,camera);
            				}
            			}
            		}
            	}


void FlxTilemap_obj::refreshBuffers(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_567_refreshBuffers)
HXDLIN( 567)		int _g = 0;
HXDLIN( 567)		int _g1 = this->get_cameras()->length;
HXDLIN( 567)		while((_g < _g1)){
HXDLIN( 567)			_g = (_g + 1);
HXDLIN( 567)			int i = (_g - 1);
HXLINE( 569)			 ::flixel::FlxCamera camera = this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 570)			 ::flixel::tile::FlxTilemapBuffer buffer = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXLINE( 573)			if (::hx::IsNull( buffer )) {
HXLINE( 574)				::Array< ::Dynamic> _hx_tmp = this->_buffers;
HXDLIN( 574)				 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXDLIN( 574)				buffer->pixelPerfectRender = this->pixelPerfectRender;
HXDLIN( 574)				buffer->antialiasing = this->antialiasing;
HXDLIN( 574)				_hx_tmp[i] = buffer;
            			}
            			else {
HXLINE( 576)				buffer->resize(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,refreshBuffers,(void))

void FlxTilemap_obj::setDirty(::hx::Null< bool >  __o_Dirty){
            		bool Dirty = __o_Dirty.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_587_setDirty)
HXLINE( 588)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 589)			return;
            		}
HXLINE( 591)		{
HXLINE( 591)			int _g = 0;
HXDLIN( 591)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN( 591)			while((_g < _g1->length)){
HXLINE( 591)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN( 591)				_g = (_g + 1);
HXLINE( 592)				if (::hx::IsNotNull( buffer )) {
HXLINE( 593)					buffer->dirty = Dirty;
            				}
            			}
            		}
            	}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_609_overlapsWithCallback)
HXLINE( 610)		bool results = false;
HXLINE( 612)		Float xPos = this->x;
HXLINE( 613)		Float yPos = this->y;
HXLINE( 615)		if (::hx::IsNotNull( Position )) {
HXLINE( 617)			xPos = Position->x;
HXLINE( 618)			yPos = Position->y;
            		}
HXLINE( 622)		int selectionX = ::Math_obj::floor(((Object->x - xPos) / this->_scaledTileWidth));
HXLINE( 623)		int selectionY = ::Math_obj::floor(((Object->y - yPos) / this->_scaledTileHeight));
HXLINE( 624)		Float selectionWidth = Object->get_width();
HXDLIN( 624)		int selectionWidth1 = ((selectionX + ::Math_obj::ceil((selectionWidth / this->_scaledTileWidth))) + 1);
HXLINE( 625)		Float selectionHeight = Object->get_height();
HXDLIN( 625)		int selectionHeight1 = ((selectionY + ::Math_obj::ceil((selectionHeight / this->_scaledTileHeight))) + 1);
HXLINE( 628)		 ::Dynamic Max = this->widthInTiles;
HXDLIN( 628)		Float lowerBound;
HXDLIN( 628)		if ((selectionX < 0)) {
HXLINE( 628)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 628)			lowerBound = ( (Float)(selectionX) );
            		}
HXDLIN( 628)		Float selectionX1;
HXDLIN( 628)		bool selectionX2;
HXDLIN( 628)		if (::hx::IsNotNull( Max )) {
HXLINE( 628)			selectionX2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 628)			selectionX2 = false;
            		}
HXDLIN( 628)		if (selectionX2) {
HXLINE( 628)			selectionX1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 628)			selectionX1 = lowerBound;
            		}
HXDLIN( 628)		selectionX = ::Std_obj::_hx_int(selectionX1);
HXLINE( 629)		 ::Dynamic Max1 = this->heightInTiles;
HXDLIN( 629)		Float lowerBound1;
HXDLIN( 629)		if ((selectionY < 0)) {
HXLINE( 629)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 629)			lowerBound1 = ( (Float)(selectionY) );
            		}
HXDLIN( 629)		Float selectionY1;
HXDLIN( 629)		bool selectionY2;
HXDLIN( 629)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 629)			selectionY2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 629)			selectionY2 = false;
            		}
HXDLIN( 629)		if (selectionY2) {
HXLINE( 629)			selectionY1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 629)			selectionY1 = lowerBound1;
            		}
HXDLIN( 629)		selectionY = ::Std_obj::_hx_int(selectionY1);
HXLINE( 630)		 ::Dynamic Max2 = this->widthInTiles;
HXDLIN( 630)		Float lowerBound2;
HXDLIN( 630)		if ((selectionWidth1 < 0)) {
HXLINE( 630)			lowerBound2 = ( (Float)(0) );
            		}
            		else {
HXLINE( 630)			lowerBound2 = ( (Float)(selectionWidth1) );
            		}
HXDLIN( 630)		Float selectionWidth2;
HXDLIN( 630)		bool selectionWidth3;
HXDLIN( 630)		if (::hx::IsNotNull( Max2 )) {
HXLINE( 630)			selectionWidth3 = ::hx::IsGreater( lowerBound2,Max2 );
            		}
            		else {
HXLINE( 630)			selectionWidth3 = false;
            		}
HXDLIN( 630)		if (selectionWidth3) {
HXLINE( 630)			selectionWidth2 = ( (Float)(Max2) );
            		}
            		else {
HXLINE( 630)			selectionWidth2 = lowerBound2;
            		}
HXDLIN( 630)		selectionWidth1 = ::Std_obj::_hx_int(selectionWidth2);
HXLINE( 631)		 ::Dynamic Max3 = this->heightInTiles;
HXDLIN( 631)		Float lowerBound3;
HXDLIN( 631)		if ((selectionHeight1 < 0)) {
HXLINE( 631)			lowerBound3 = ( (Float)(0) );
            		}
            		else {
HXLINE( 631)			lowerBound3 = ( (Float)(selectionHeight1) );
            		}
HXDLIN( 631)		Float selectionHeight2;
HXDLIN( 631)		bool selectionHeight3;
HXDLIN( 631)		if (::hx::IsNotNull( Max3 )) {
HXLINE( 631)			selectionHeight3 = ::hx::IsGreater( lowerBound3,Max3 );
            		}
            		else {
HXLINE( 631)			selectionHeight3 = false;
            		}
HXDLIN( 631)		if (selectionHeight3) {
HXLINE( 631)			selectionHeight2 = ( (Float)(Max3) );
            		}
            		else {
HXLINE( 631)			selectionHeight2 = lowerBound3;
            		}
HXDLIN( 631)		selectionHeight1 = ::Std_obj::_hx_int(selectionHeight2);
HXLINE( 634)		int rowStart = (selectionY * this->widthInTiles);
HXLINE( 635)		int column;
HXLINE( 636)		 ::flixel::tile::FlxTile tile;
HXLINE( 637)		bool overlapFound;
HXLINE( 638)		Float deltaX = (xPos - this->last->x);
HXLINE( 639)		Float deltaY = (yPos - this->last->y);
HXLINE( 641)		{
HXLINE( 641)			int _g = selectionY;
HXDLIN( 641)			int _g1 = selectionHeight1;
HXDLIN( 641)			while((_g < _g1)){
HXLINE( 641)				_g = (_g + 1);
HXDLIN( 641)				int row = (_g - 1);
HXLINE( 643)				column = selectionX;
HXLINE( 645)				while((column < selectionWidth1)){
HXLINE( 647)					int index = (rowStart + column);
HXLINE( 648)					bool _hx_tmp;
HXDLIN( 648)					if ((index >= 0)) {
HXLINE( 648)						_hx_tmp = (index > (this->_data->length - 1));
            					}
            					else {
HXLINE( 648)						_hx_tmp = true;
            					}
HXDLIN( 648)					if (_hx_tmp) {
HXLINE( 650)						column = (column + 1);
HXLINE( 651)						continue;
            					}
HXLINE( 654)					int dataIndex = this->_data->__get(index);
HXLINE( 655)					if ((dataIndex < 0)) {
HXLINE( 657)						column = (column + 1);
HXLINE( 658)						continue;
            					}
HXLINE( 661)					tile = Dynamic( this->_tileObjects->__get(dataIndex)).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 662)					tile->set_width(this->_scaledTileWidth);
HXLINE( 663)					tile->set_height(this->_scaledTileHeight);
HXLINE( 664)					tile->set_x((xPos + (( (Float)(column) ) * tile->get_width())));
HXLINE( 665)					tile->set_y((yPos + (( (Float)(row) ) * tile->get_height())));
HXLINE( 666)					tile->last->set_x((tile->x - deltaX));
HXLINE( 667)					tile->last->set_y((tile->y - deltaY));
HXLINE( 669)					bool overlapFound1;
HXDLIN( 669)					bool overlapFound2;
HXDLIN( 669)					Float Object1 = Object->x;
HXDLIN( 669)					Float overlapFound3 = (Object1 + Object->get_width());
HXDLIN( 669)					if ((overlapFound3 > tile->x)) {
HXLINE( 670)						Float Object1 = Object->x;
HXDLIN( 670)						Float tile1 = tile->x;
HXLINE( 669)						overlapFound2 = (Object1 < (tile1 + tile->get_width()));
            					}
            					else {
HXLINE( 669)						overlapFound2 = false;
            					}
HXDLIN( 669)					if (overlapFound2) {
HXLINE( 671)						Float Object1 = Object->y;
HXDLIN( 671)						Float overlapFound = (Object1 + Object->get_height());
HXLINE( 669)						overlapFound1 = (overlapFound > tile->y);
            					}
            					else {
HXLINE( 669)						overlapFound1 = false;
            					}
HXDLIN( 669)					if (overlapFound1) {
HXLINE( 672)						Float Object1 = Object->y;
HXDLIN( 672)						Float tile1 = tile->y;
HXDLIN( 672)						overlapFound = (Object1 < (tile1 + tile->get_height()));
            					}
            					else {
HXLINE( 669)						overlapFound = false;
            					}
HXLINE( 674)					if ((tile->allowCollisions != 0)) {
HXLINE( 676)						if (::hx::IsNotNull( Callback )) {
HXLINE( 678)							if (FlipCallbackParams) {
HXLINE( 680)								overlapFound = ( (bool)(Callback(Object,tile)) );
            							}
            							else {
HXLINE( 684)								overlapFound = ( (bool)(Callback(tile,Object)) );
            							}
            						}
            					}
HXLINE( 689)					if (overlapFound) {
HXLINE( 691)						bool _hx_tmp;
HXDLIN( 691)						if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 691)							if (::hx::IsNotNull( tile->filter )) {
HXLINE( 691)								_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            							}
            							else {
HXLINE( 691)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 691)							_hx_tmp = false;
            						}
HXDLIN( 691)						if (_hx_tmp) {
HXLINE( 693)							tile->mapIndex = (rowStart + column);
HXLINE( 694)							tile->callbackFunction(tile,Object);
            						}
HXLINE( 697)						if ((tile->allowCollisions != 0)) {
HXLINE( 698)							results = true;
            						}
            					}
HXLINE( 701)					column = (column + 1);
            				}
HXLINE( 704)				rowStart = (rowStart + this->widthInTiles);
            			}
            		}
HXLINE( 707)		return results;
            	}


int FlxTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_711_getTileIndexByCoords)
HXLINE( 712)		Float localX = (Coord->x - this->x);
HXLINE( 713)		Float localY = (Coord->y - this->y);
HXLINE( 714)		if (Coord->_weak) {
HXLINE( 714)			Coord->put();
            		}
HXLINE( 716)		bool _hx_tmp;
HXDLIN( 716)		bool _hx_tmp1;
HXDLIN( 716)		bool _hx_tmp2;
HXDLIN( 716)		if (!((localX < 0))) {
HXLINE( 716)			_hx_tmp2 = (localY < 0);
            		}
            		else {
HXLINE( 716)			_hx_tmp2 = true;
            		}
HXDLIN( 716)		if (!(_hx_tmp2)) {
HXLINE( 716)			_hx_tmp1 = (localX >= this->get_width());
            		}
            		else {
HXLINE( 716)			_hx_tmp1 = true;
            		}
HXDLIN( 716)		if (!(_hx_tmp1)) {
HXLINE( 716)			_hx_tmp = (localY >= this->get_height());
            		}
            		else {
HXLINE( 716)			_hx_tmp = true;
            		}
HXDLIN( 716)		if (_hx_tmp) {
HXLINE( 717)			return -1;
            		}
HXLINE( 719)		int _hx_tmp3 = ::Std_obj::_hx_int((localY / this->_scaledTileHeight));
HXDLIN( 719)		int _hx_tmp4 = (_hx_tmp3 * this->widthInTiles);
HXDLIN( 719)		return (_hx_tmp4 + ::Std_obj::_hx_int((localX / this->_scaledTileWidth)));
            	}


 ::flixel::math::FlxPoint FlxTilemap_obj::getTileCoordsByIndex(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_723_getTileCoordsByIndex)
HXLINE( 724)		Float X = (this->x + (( (Float)(::hx::Mod(Index,this->widthInTiles)) ) * this->_scaledTileWidth));
HXDLIN( 724)		Float Y = this->y;
HXDLIN( 724)		int Y1 = ::Std_obj::_hx_int((( (Float)(Index) ) / ( (Float)(this->widthInTiles) )));
HXDLIN( 724)		Float Y2 = (Y + (( (Float)(Y1) ) * this->_scaledTileHeight));
HXDLIN( 724)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y2);
HXDLIN( 724)		point->_inPool = false;
HXDLIN( 724)		 ::flixel::math::FlxPoint point1 = point;
HXLINE( 725)		if (Midpoint) {
HXLINE( 727)			point1->set_x((point1->x + (this->_scaledTileWidth * ((Float)0.5))));
HXLINE( 728)			point1->set_y((point1->y + (this->_scaledTileHeight * ((Float)0.5))));
            		}
HXLINE( 730)		return point1;
            	}


::Array< ::Dynamic> FlxTilemap_obj::getTileCoords(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_741_getTileCoords)
HXLINE( 742)		::Array< ::Dynamic> array = null();
HXLINE( 744)		 ::flixel::math::FlxPoint point;
HXLINE( 745)		int l = (this->widthInTiles * this->heightInTiles);
HXLINE( 747)		{
HXLINE( 747)			int _g = 0;
HXDLIN( 747)			int _g1 = l;
HXDLIN( 747)			while((_g < _g1)){
HXLINE( 747)				_g = (_g + 1);
HXDLIN( 747)				int i = (_g - 1);
HXLINE( 749)				if ((this->_data->__get(i) == Index)) {
HXLINE( 751)					Float X = (this->x + (( (Float)(::hx::Mod(i,this->widthInTiles)) ) * this->_scaledTileWidth));
HXDLIN( 751)					Float Y = this->y;
HXDLIN( 751)					int Y1 = ::Std_obj::_hx_int((( (Float)(i) ) / ( (Float)(this->widthInTiles) )));
HXDLIN( 751)					Float Y2 = (Y + (( (Float)(Y1) ) * this->_scaledTileHeight));
HXDLIN( 751)					 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y2);
HXDLIN( 751)					point1->_inPool = false;
HXDLIN( 751)					point = point1;
HXLINE( 753)					if (Midpoint) {
HXLINE( 755)						point->set_x((point->x + (this->_scaledTileWidth * ((Float)0.5))));
HXLINE( 756)						point->set_y((point->y + (this->_scaledTileHeight * ((Float)0.5))));
            					}
HXLINE( 759)					if (::hx::IsNull( array )) {
HXLINE( 761)						array = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 763)					array->push(point);
            				}
            			}
            		}
HXLINE( 767)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,::hx::Null< int >  __o_Border,::hx::Null< bool >  __o_UpdateWorld){
            		int Border = __o_Border.Default(0);
            		bool UpdateWorld = __o_UpdateWorld.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_778_follow)
HXLINE( 779)		if (::hx::IsNull( Camera )) {
HXLINE( 780)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 782)		Float _hx_tmp = (this->x + (( (Float)(Border) ) * this->_scaledTileWidth));
HXLINE( 783)		Float _hx_tmp1 = (this->y + (( (Float)(Border) ) * this->_scaledTileHeight));
HXLINE( 784)		Float _hx_tmp2 = this->get_width();
HXDLIN( 784)		Float _hx_tmp3 = (_hx_tmp2 - ((( (Float)(Border) ) * this->_scaledTileWidth) * ( (Float)(2) )));
HXLINE( 786)		Float _hx_tmp4 = this->get_height();
HXLINE( 782)		Camera->setScrollBoundsRect(_hx_tmp,_hx_tmp1,_hx_tmp3,(_hx_tmp4 - ((( (Float)(Border) ) * this->_scaledTileHeight) * ( (Float)(2) ))),UpdateWorld);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

bool FlxTilemap_obj::ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  __o_Resolution){
            		Float Resolution = __o_Resolution.Default(1);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_801_ray)
HXLINE( 802)		Float step = this->_scaledTileWidth;
HXLINE( 804)		if ((this->_scaledTileHeight < this->_scaledTileWidth)) {
HXLINE( 805)			step = this->_scaledTileHeight;
            		}
HXLINE( 807)		step = (step / Resolution);
HXLINE( 808)		Float deltaX = (End->x - Start->x);
HXLINE( 809)		Float deltaY = (End->y - Start->y);
HXLINE( 810)		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));
HXLINE( 811)		int steps = ::Math_obj::ceil((distance / step));
HXLINE( 812)		Float stepX = (deltaX / ( (Float)(steps) ));
HXLINE( 813)		Float stepY = (deltaY / ( (Float)(steps) ));
HXLINE( 814)		Float curX = ((Start->x - stepX) - this->x);
HXLINE( 815)		Float curY = ((Start->y - stepY) - this->y);
HXLINE( 816)		int tileX;
HXLINE( 817)		int tileY;
HXLINE( 818)		int i = 0;
HXLINE( 820)		if (Start->_weak) {
HXLINE( 820)			Start->put();
            		}
HXLINE( 821)		if (End->_weak) {
HXLINE( 821)			End->put();
            		}
HXLINE( 823)		while((i < steps)){
HXLINE( 825)			curX = (curX + stepX);
HXLINE( 826)			curY = (curY + stepY);
HXLINE( 828)			bool _hx_tmp;
HXDLIN( 828)			bool _hx_tmp1;
HXDLIN( 828)			bool _hx_tmp2;
HXDLIN( 828)			if (!((curX < 0))) {
HXLINE( 828)				_hx_tmp2 = (curX > this->get_width());
            			}
            			else {
HXLINE( 828)				_hx_tmp2 = true;
            			}
HXDLIN( 828)			if (!(_hx_tmp2)) {
HXLINE( 828)				_hx_tmp1 = (curY < 0);
            			}
            			else {
HXLINE( 828)				_hx_tmp1 = true;
            			}
HXDLIN( 828)			if (!(_hx_tmp1)) {
HXLINE( 828)				_hx_tmp = (curY > this->get_height());
            			}
            			else {
HXLINE( 828)				_hx_tmp = true;
            			}
HXDLIN( 828)			if (_hx_tmp) {
HXLINE( 830)				i = (i + 1);
HXLINE( 831)				continue;
            			}
HXLINE( 834)			tileX = ::Math_obj::floor((curX / this->_scaledTileWidth));
HXLINE( 835)			tileY = ::Math_obj::floor((curY / this->_scaledTileHeight));
HXLINE( 837)			if ((Dynamic( this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX)))).StaticCast<  ::flixel::tile::FlxTile >()->allowCollisions != 0)) {
HXLINE( 840)				tileX = (tileX * ::Std_obj::_hx_int(this->_scaledTileWidth));
HXLINE( 841)				tileY = (tileY * ::Std_obj::_hx_int(this->_scaledTileHeight));
HXLINE( 842)				Float rx = ( (Float)(0) );
HXLINE( 843)				Float ry = ( (Float)(0) );
HXLINE( 845)				Float lx = (curX - stepX);
HXLINE( 846)				Float ly = (curY - stepY);
HXLINE( 844)				Float q = ( (Float)(tileX) );
HXLINE( 851)				if ((deltaX < 0)) {
HXLINE( 853)					q = (q + this->_scaledTileWidth);
            				}
HXLINE( 856)				rx = q;
HXLINE( 857)				ry = (ly + (stepY * ((q - lx) / stepX)));
HXLINE( 859)				bool _hx_tmp;
HXDLIN( 859)				if ((ry >= tileY)) {
HXLINE( 859)					_hx_tmp = (ry <= (tileY + this->_scaledTileHeight));
            				}
            				else {
HXLINE( 859)					_hx_tmp = false;
            				}
HXDLIN( 859)				if (_hx_tmp) {
HXLINE( 861)					if (::hx::IsNull( Result )) {
HXLINE( 863)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 863)						point->_inPool = false;
HXDLIN( 863)						Result = point;
            					}
HXLINE( 866)					Result->set(rx,ry);
HXLINE( 867)					return false;
            				}
HXLINE( 871)				q = ( (Float)(tileY) );
HXLINE( 873)				if ((deltaY < 0)) {
HXLINE( 875)					q = (q + this->_scaledTileHeight);
            				}
HXLINE( 878)				rx = (lx + (stepX * ((q - ly) / stepY)));
HXLINE( 879)				ry = q;
HXLINE( 881)				bool _hx_tmp1;
HXDLIN( 881)				if ((rx >= tileX)) {
HXLINE( 881)					_hx_tmp1 = (rx <= (tileX + this->_scaledTileWidth));
            				}
            				else {
HXLINE( 881)					_hx_tmp1 = false;
            				}
HXDLIN( 881)				if (_hx_tmp1) {
HXLINE( 883)					if (::hx::IsNull( Result )) {
HXLINE( 885)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 885)						point->_inPool = false;
HXDLIN( 885)						Result = point;
            					}
HXLINE( 888)					Result->set(rx,ry);
HXLINE( 889)					return false;
            				}
HXLINE( 892)				return true;
            			}
HXLINE( 894)			i = (i + 1);
            		}
HXLINE( 897)		return true;
            	}


 ::flixel::FlxSprite FlxTilemap_obj::tileToSprite(int X,int Y,::hx::Null< int >  __o_NewTile, ::Dynamic SpriteFactory){
            		int NewTile = __o_NewTile.Default(0);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_910_tileToSprite)
HXLINE( 911)		if (::hx::IsNull( SpriteFactory )) {
HXLINE( 912)			SpriteFactory = this->defaultTileToSprite_dyn();
            		}
HXLINE( 914)		int rowIndex = (X + (Y * this->widthInTiles));
HXLINE( 915)		 ::flixel::tile::FlxTile tile = Dynamic( this->_tileObjects->__get(this->_data->__get(rowIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 916)		 ::flixel::graphics::frames::FlxImageFrame image = null();
HXLINE( 918)		bool _hx_tmp;
HXDLIN( 918)		if (::hx::IsNotNull( tile )) {
HXLINE( 918)			_hx_tmp = tile->visible;
            		}
            		else {
HXLINE( 918)			_hx_tmp = false;
            		}
HXDLIN( 918)		if (_hx_tmp) {
HXLINE( 919)			image = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tile->frame);
            		}
            		else {
HXLINE( 921)			 ::flixel::graphics::FlxGraphic image1 = this->graphic;
HXDLIN( 921)			Float Width = ( (Float)(this->_tileWidth) );
HXDLIN( 921)			Float Height = ( (Float)(this->_tileHeight) );
HXDLIN( 921)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 921)			_this->x = ( (Float)(0) );
HXDLIN( 921)			_this->y = ( (Float)(0) );
HXDLIN( 921)			_this->width = Width;
HXDLIN( 921)			_this->height = Height;
HXDLIN( 921)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 921)			rect->_inPool = false;
HXDLIN( 921)			image = ::flixel::graphics::frames::FlxImageFrame_obj::fromEmptyFrame(image1,rect);
            		}
HXLINE( 923)		Float tileX = ((( (Float)((X * this->_tileWidth)) ) * this->scale->x) + this->x);
HXLINE( 924)		Float tileY = ((( (Float)((Y * this->_tileHeight)) ) * this->scale->y) + this->y);
HXLINE( 929)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 929)		point->_inPool = false;
HXDLIN( 929)		 ::flixel::math::FlxPoint _this = point;
HXDLIN( 929)		 ::flixel::math::FlxPoint point1 = this->scale;
HXDLIN( 929)		_this->set_x(point1->x);
HXDLIN( 929)		_this->set_y(point1->y);
HXDLIN( 929)		if (point1->_weak) {
HXLINE( 929)			point1->put();
            		}
HXLINE( 925)		 ::flixel::FlxSprite tileSprite = ( ( ::flixel::FlxSprite)(SpriteFactory( ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("blend",51,e8,f4,b4),this->blend)
            			->setFixed(1,HX_("x",78,00,00,00),tileX)
            			->setFixed(2,HX_("y",79,00,00,00),tileY)
            			->setFixed(3,HX_("alpha",5e,a7,96,21),this->alpha)
            			->setFixed(4,HX_("graphic",a8,5a,07,74),image)
            			->setFixed(5,HX_("scale",8a,ce,ce,78),_this)))) );
HXLINE( 934)		if ((NewTile >= 0)) {
HXLINE( 935)			this->setTile(X,Y,NewTile,null());
            		}
HXLINE( 937)		return tileSprite;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,tileToSprite,return )

void FlxTilemap_obj::updateBuffers(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_944_updateBuffers)
HXLINE( 945)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
HXLINE( 946)		this->_buffers = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_957_drawTilemap)
HXLINE( 958)		bool isColored;
HXDLIN( 958)		if ((this->alpha == 1)) {
HXLINE( 958)			isColored = (this->color != 16777215);
            		}
            		else {
HXLINE( 958)			isColored = true;
            		}
HXLINE( 961)		Float drawX = ( (Float)(0) );
HXLINE( 962)		Float drawY = ( (Float)(0) );
HXLINE( 963)		Float scaledWidth = ( (Float)(0) );
HXLINE( 964)		Float scaledHeight = ( (Float)(0) );
HXLINE( 965)		 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = null();
HXLINE( 967)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 969)			Buffer->fill(null());
            		}
            		else {
HXLINE( 973)			{
HXLINE( 973)				 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,Camera)->subtractPoint(this->offset);
HXDLIN( 973)				 ::openfl::geom::Point FlashPoint = this->_helperPoint;
HXDLIN( 973)				if (::hx::IsNull( FlashPoint )) {
HXLINE( 973)					FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 973)				FlashPoint->x = _this->x;
HXDLIN( 973)				FlashPoint->y = _this->y;
            			}
HXLINE( 975)			Float _hx_tmp;
HXDLIN( 975)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 975)				_hx_tmp = ( (Float)(::Math_obj::floor(this->_helperPoint->x)) );
            			}
            			else {
HXLINE( 975)				_hx_tmp = this->_helperPoint->x;
            			}
HXDLIN( 975)			this->_helperPoint->x = _hx_tmp;
HXLINE( 976)			Float _hx_tmp1;
HXDLIN( 976)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 976)				_hx_tmp1 = ( (Float)(::Math_obj::floor(this->_helperPoint->y)) );
            			}
            			else {
HXLINE( 976)				_hx_tmp1 = this->_helperPoint->y;
            			}
HXDLIN( 976)			this->_helperPoint->y = _hx_tmp1;
HXLINE( 978)			scaledWidth = this->_scaledTileWidth;
HXLINE( 979)			scaledHeight = this->_scaledTileHeight;
HXLINE( 981)			bool hasColorOffsets;
HXDLIN( 981)			if (::hx::IsNotNull( this->colorTransform )) {
HXLINE( 981)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(this->colorTransform);
            			}
            			else {
HXLINE( 981)				hasColorOffsets = false;
            			}
HXLINE( 982)			drawItem = Camera->startQuadBatch(this->graphic,isColored,hasColorOffsets,this->blend,this->antialiasing,this->shader);
            		}
HXLINE( 986)		this->_point->set_x(((((Camera->scroll->x * this->scrollFactor->x) - this->x) - this->offset->x) + Camera->viewOffsetX));
HXLINE( 987)		this->_point->set_y(((((Camera->scroll->y * this->scrollFactor->y) - this->y) - this->offset->y) + Camera->viewOffsetY));
HXLINE( 989)		int screenXInTiles = ::Math_obj::floor((this->_point->x / this->_scaledTileWidth));
HXLINE( 990)		int screenYInTiles = ::Math_obj::floor((this->_point->y / this->_scaledTileHeight));
HXLINE( 991)		int screenRows = Buffer->rows;
HXLINE( 992)		int screenColumns = Buffer->columns;
HXLINE( 995)		 ::Dynamic Max = (this->widthInTiles - screenColumns);
HXDLIN( 995)		Float lowerBound;
HXDLIN( 995)		if ((screenXInTiles < 0)) {
HXLINE( 995)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 995)			lowerBound = ( (Float)(screenXInTiles) );
            		}
HXDLIN( 995)		Float screenXInTiles1;
HXDLIN( 995)		bool screenXInTiles2;
HXDLIN( 995)		if (::hx::IsNotNull( Max )) {
HXLINE( 995)			screenXInTiles2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 995)			screenXInTiles2 = false;
            		}
HXDLIN( 995)		if (screenXInTiles2) {
HXLINE( 995)			screenXInTiles1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 995)			screenXInTiles1 = lowerBound;
            		}
HXDLIN( 995)		screenXInTiles = ::Std_obj::_hx_int(screenXInTiles1);
HXLINE( 996)		 ::Dynamic Max1 = (this->heightInTiles - screenRows);
HXDLIN( 996)		Float lowerBound1;
HXDLIN( 996)		if ((screenYInTiles < 0)) {
HXLINE( 996)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 996)			lowerBound1 = ( (Float)(screenYInTiles) );
            		}
HXDLIN( 996)		Float screenYInTiles1;
HXDLIN( 996)		bool screenYInTiles2;
HXDLIN( 996)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 996)			screenYInTiles2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 996)			screenYInTiles2 = false;
            		}
HXDLIN( 996)		if (screenYInTiles2) {
HXLINE( 996)			screenYInTiles1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 996)			screenYInTiles1 = lowerBound1;
            		}
HXDLIN( 996)		screenYInTiles = ::Std_obj::_hx_int(screenYInTiles1);
HXLINE( 998)		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);
HXLINE( 999)		this->_flashPoint->y = ( (Float)(0) );
HXLINE(1000)		int columnIndex;
HXLINE(1001)		 ::flixel::tile::FlxTile tile;
HXLINE(1002)		 ::flixel::graphics::frames::FlxFrame frame;
HXLINE(1008)		{
HXLINE(1008)			int _g = 0;
HXDLIN(1008)			int _g1 = screenRows;
HXDLIN(1008)			while((_g < _g1)){
HXLINE(1008)				_g = (_g + 1);
HXDLIN(1008)				int row = (_g - 1);
HXLINE(1010)				columnIndex = rowIndex;
HXLINE(1011)				this->_flashPoint->x = ( (Float)(0) );
HXLINE(1013)				{
HXLINE(1013)					int _g1 = 0;
HXDLIN(1013)					int _g2 = screenColumns;
HXDLIN(1013)					while((_g1 < _g2)){
HXLINE(1013)						_g1 = (_g1 + 1);
HXDLIN(1013)						int column = (_g1 - 1);
HXLINE(1015)						tile = Dynamic( this->_tileObjects->__get(this->_data->__get(columnIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE(1017)						bool _hx_tmp;
HXDLIN(1017)						bool _hx_tmp1;
HXDLIN(1017)						if (::hx::IsNotNull( tile )) {
HXLINE(1017)							_hx_tmp1 = tile->visible;
            						}
            						else {
HXLINE(1017)							_hx_tmp1 = false;
            						}
HXDLIN(1017)						if (_hx_tmp1) {
HXLINE(1017)							_hx_tmp = (tile->frame->type != 2);
            						}
            						else {
HXLINE(1017)							_hx_tmp = false;
            						}
HXDLIN(1017)						if (_hx_tmp) {
HXLINE(1019)							frame = tile->frame;
HXLINE(1021)							if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1023)								frame->paint(Buffer->pixels,this->_flashPoint,true,null());
            							}
            							else {
HXLINE(1049)								drawX = (this->_helperPoint->x + (( (Float)(::hx::Mod(columnIndex,this->widthInTiles)) ) * scaledWidth));
HXLINE(1050)								drawY = (this->_helperPoint->y + (( (Float)(::Math_obj::floor((( (Float)(columnIndex) ) / ( (Float)(this->widthInTiles) )))) ) * scaledHeight));
HXLINE(1052)								this->_matrix->identity();
HXLINE(1054)								if ((frame->angle != 0)) {
HXLINE(1056)									frame->prepareMatrix(this->_matrix,null(),null(),null());
            								}
HXLINE(1059)								Float scaleX = this->scale->x;
HXLINE(1060)								Float scaleY = this->scale->y;
HXLINE(1062)								if (this->useScaleHack) {
HXLINE(1064)									scaleX = (scaleX + (( (Float)(1) ) / (frame->sourceSize->x * Camera->totalScaleX)));
HXLINE(1065)									scaleY = (scaleY + (( (Float)(1) ) / (frame->sourceSize->y * Camera->totalScaleY)));
            								}
HXLINE(1068)								this->_matrix->scale(scaleX,scaleY);
HXLINE(1069)								this->_matrix->translate(drawX,drawY);
HXLINE(1071)								drawItem->addQuad(frame,this->_matrix,this->colorTransform);
            							}
            						}
HXLINE(1075)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1076)							 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN(1076)							fh->x = (fh->x + this->_tileWidth);
            						}
HXLINE(1078)						columnIndex = (columnIndex + 1);
            					}
            				}
HXLINE(1081)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1082)					 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN(1082)					fh->y = (fh->y + this->_tileHeight);
            				}
HXLINE(1083)				rowIndex = (rowIndex + this->widthInTiles);
            			}
            		}
HXLINE(1086)		Buffer->x = (( (Float)(screenXInTiles) ) * this->_scaledTileWidth);
HXLINE(1087)		Buffer->y = (( (Float)(screenYInTiles) ) * this->_scaledTileHeight);
HXLINE(1089)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1091)			if (isColored) {
HXLINE(1092)				Buffer->colorTransform(this->colorTransform);
            			}
HXLINE(1093)			Buffer->blend = this->blend;
            		}
HXLINE(1096)		Buffer->dirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

void FlxTilemap_obj::updateTile(int Index){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1143_updateTile)
HXLINE(1144)		 ::flixel::tile::FlxTile tile = Dynamic( this->_tileObjects->__get(Index)).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE(1145)		bool _hx_tmp;
HXDLIN(1145)		if (::hx::IsNotNull( tile )) {
HXLINE(1145)			_hx_tmp = !(tile->visible);
            		}
            		else {
HXLINE(1145)			_hx_tmp = true;
            		}
HXDLIN(1145)		if (_hx_tmp) {
HXLINE(1146)			return;
            		}
HXLINE(1148)		tile->frame = this->frames->frames->__get((Index - this->_startingIndex)).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


 ::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1152_createBuffer)
HXLINE(1153)		 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXLINE(1154)		buffer->pixelPerfectRender = this->pixelPerfectRender;
HXLINE(1155)		buffer->antialiasing = this->antialiasing;
HXLINE(1156)		return buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

bool FlxTilemap_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1160_set_antialiasing)
HXLINE(1161)		{
HXLINE(1161)			int _g = 0;
HXDLIN(1161)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN(1161)			while((_g < _g1->length)){
HXLINE(1161)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1161)				_g = (_g + 1);
HXLINE(1162)				buffer->antialiasing = value;
            			}
            		}
HXLINE(1163)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_antialiasing,return )

 ::flixel::graphics::FlxGraphic FlxTilemap_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1171_set_graphic)
HXLINE(1173)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1176)			if (::hx::IsNotNull( Value )) {
HXLINE(1177)				Value->set_useCount((Value->get_useCount() + 1));
            			}
HXLINE(1180)			if (::hx::IsNotNull( this->graphic )) {
HXLINE(1181)				 ::flixel::graphics::FlxGraphic fh = this->graphic;
HXDLIN(1181)				fh->set_useCount((fh->get_useCount() - 1));
            			}
            		}
HXLINE(1184)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_graphic,return )

bool FlxTilemap_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1188_set_pixelPerfectRender)
HXLINE(1189)		if (::hx::IsNotNull( this->_buffers )) {
HXLINE(1190)			int _g = 0;
HXDLIN(1190)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN(1190)			while((_g < _g1->length)){
HXLINE(1190)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1190)				_g = (_g + 1);
HXLINE(1191)				buffer->pixelPerfectRender = Value;
            			}
            		}
HXLINE(1193)		return ( (bool)((this->pixelPerfectRender = Value)) );
            	}


Float FlxTilemap_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1197_set_alpha)
HXLINE(1198)		Float lowerBound;
HXDLIN(1198)		if ((Alpha < 0)) {
HXLINE(1198)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1198)			lowerBound = Alpha;
            		}
HXDLIN(1198)		Float _hx_tmp;
HXDLIN(1198)		if ((lowerBound > 1)) {
HXLINE(1198)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1198)			_hx_tmp = lowerBound;
            		}
HXDLIN(1198)		this->alpha = _hx_tmp;
HXLINE(1199)		this->updateColorTransform();
HXLINE(1200)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_alpha,return )

int FlxTilemap_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1204_set_color)
HXLINE(1205)		if ((this->color == Color)) {
HXLINE(1206)			return Color;
            		}
HXLINE(1208)		this->color = Color;
HXLINE(1209)		this->updateColorTransform();
HXLINE(1210)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_color,return )

void FlxTilemap_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1214_updateColorTransform)
HXLINE(1215)		if (::hx::IsNull( this->colorTransform )) {
HXLINE(1216)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1218)		bool _hx_tmp;
HXDLIN(1218)		if ((this->alpha == 1)) {
HXLINE(1218)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE(1218)			_hx_tmp = true;
            		}
HXDLIN(1218)		if (_hx_tmp) {
HXLINE(1219)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE(1221)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE(1223)		this->setDirty(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateColorTransform,(void))

 ::Dynamic FlxTilemap_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1227_set_blend)
HXLINE(1228)		this->setDirty(null());
HXLINE(1229)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_blend,return )

void FlxTilemap_obj::setScaleXYCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1233_setScaleXYCallback)
HXLINE(1234)		this->setScaleXCallback(Scale);
HXLINE(1235)		this->setScaleYCallback(Scale);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

void FlxTilemap_obj::setScaleXCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1239_setScaleXCallback)
HXLINE(1240)		this->_scaledTileWidth = (( (Float)(this->_tileWidth) ) * this->scale->x);
HXLINE(1241)		this->set_width((( (Float)(this->widthInTiles) ) * this->_scaledTileWidth));
HXLINE(1243)		if (::hx::IsNull( this->get_cameras() )) {
HXLINE(1244)			return;
            		}
HXLINE(1246)		{
HXLINE(1246)			int _g = 0;
HXDLIN(1246)			int _g1 = this->get_cameras()->length;
HXDLIN(1246)			while((_g < _g1)){
HXLINE(1246)				_g = (_g + 1);
HXDLIN(1246)				int i = (_g - 1);
HXLINE(1247)				if (::hx::IsNotNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE(1248)					 ::flixel::tile::FlxTilemapBuffer _hx_tmp = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1248)					int _hx_tmp1 = this->_tileWidth;
HXDLIN(1248)					int _hx_tmp2 = this->widthInTiles;
HXDLIN(1248)					Float _hx_tmp3 = this->scale->x;
HXDLIN(1248)					_hx_tmp->updateColumns(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

void FlxTilemap_obj::setScaleYCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1252_setScaleYCallback)
HXLINE(1253)		this->_scaledTileHeight = (( (Float)(this->_tileHeight) ) * this->scale->y);
HXLINE(1254)		this->set_height((( (Float)(this->heightInTiles) ) * this->_scaledTileHeight));
HXLINE(1256)		if (::hx::IsNull( this->get_cameras() )) {
HXLINE(1257)			return;
            		}
HXLINE(1259)		{
HXLINE(1259)			int _g = 0;
HXDLIN(1259)			int _g1 = this->get_cameras()->length;
HXDLIN(1259)			while((_g < _g1)){
HXLINE(1259)				_g = (_g + 1);
HXDLIN(1259)				int i = (_g - 1);
HXLINE(1260)				if (::hx::IsNotNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE(1261)					 ::flixel::tile::FlxTilemapBuffer _hx_tmp = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1261)					int _hx_tmp1 = this->_tileHeight;
HXDLIN(1261)					int _hx_tmp2 = this->heightInTiles;
HXDLIN(1261)					Float _hx_tmp3 = this->scale->y;
HXDLIN(1261)					_hx_tmp->updateRows(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

 ::flixel::FlxSprite FlxTilemap_obj::defaultTileToSprite( ::Dynamic TileProperties){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1271_defaultTileToSprite)
HXLINE(1272)		 ::flixel::FlxSprite tileSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,TileProperties->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),TileProperties->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),null());
HXLINE(1273)		tileSprite->set_frames(( ( ::flixel::graphics::frames::FlxFramesCollection)(TileProperties->__Field(HX_("graphic",a8,5a,07,74),::hx::paccDynamic)) ));
HXLINE(1274)		{
HXLINE(1274)			 ::flixel::math::FlxPoint _this = tileSprite->scale;
HXDLIN(1274)			 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(TileProperties->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXDLIN(1274)			_this->set_x(point->x);
HXDLIN(1274)			_this->set_y(point->y);
HXDLIN(1274)			if (point->_weak) {
HXLINE(1274)				point->put();
            			}
            		}
HXLINE(1275)		TileProperties->__SetField(HX_("scale",8a,ce,ce,78),::flixel::util::FlxDestroyUtil_obj::put( ::Dynamic(TileProperties->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic))),::hx::paccDynamic);
HXLINE(1276)		tileSprite->set_alpha(( (Float)(TileProperties->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ));
HXLINE(1277)		tileSprite->set_blend(TileProperties->__Field(HX_("blend",51,e8,f4,b4),::hx::paccDynamic));
HXLINE(1278)		return tileSprite;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,defaultTileToSprite,return )

int FlxTilemap_obj::set_allowCollisions(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1282_set_allowCollisions)
HXLINE(1283)		int Value = _tmp_Value;
HXDLIN(1283)		{
HXLINE(1283)			int _g = 0;
HXDLIN(1283)			::Array< ::Dynamic> _g1 = this->_tileObjects;
HXDLIN(1283)			while((_g < _g1->length)){
HXLINE(1283)				 ::flixel::tile::FlxTile tile = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN(1283)				_g = (_g + 1);
HXLINE(1284)				if ((tile->index >= this->_collideIndex)) {
HXLINE(1285)					tile->set_allowCollisions(Value);
            				}
            			}
            		}
HXLINE(1287)		return this->super::set_allowCollisions(Value);
            	}



::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new() {
	::hx::ObjectPtr< FlxTilemap_obj > __this = new FlxTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTilemap_obj *__this = (FlxTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemap_obj), true, "flixel.tile.FlxTilemap"));
	*(void **)__this = FlxTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_checkBufferChanges,"_checkBufferChanges");
	 ::flixel::tile::FlxBaseTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_checkBufferChanges,"_checkBufferChanges");
	 ::flixel::tile::FlxBaseTilemap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return ::hx::Val( _buffers ); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return ::hx::Val( updateMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return ::hx::Val( _tileWidth ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return ::hx::Val( updateTile_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return ::hx::Val( _tileHeight ); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return ::hx::Val( drawTilemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return ::hx::Val( useScaleHack ); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return ::hx::Val( _helperPoint ); }
		if (HX_FIELD_EQ(inName,"tileToSprite") ) { return ::hx::Val( tileToSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onGameResized") ) { return ::hx::Val( onGameResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return ::hx::Val( cacheGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return ::hx::Val( getTileCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return ::hx::Val( updateBuffers_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"refreshBuffers") ) { return ::hx::Val( refreshBuffers_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onCameraChanged") ) { return ::hx::Val( onCameraChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return ::hx::Val( _scaledTileWidth ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return ::hx::Val( _scaledTileHeight ); }
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return ::hx::Val( computeDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return ::hx::Val( setScaleXCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return ::hx::Val( setScaleYCallback_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return ::hx::Val( setScaleXYCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_checkBufferChanges") ) { return ::hx::Val( _checkBufferChanges ); }
		if (HX_FIELD_EQ(inName,"defaultTileToSprite") ) { return ::hx::Val( defaultTileToSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return ::hx::Val( getTileIndexByCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return ::hx::Val( getTileCoordsByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_checkBufferChanges") ) { _checkBufferChanges=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("useScaleHack",44,9c,16,98));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_buffers",f4,fc,48,eb));
	outFields->push(HX_("_tileWidth",b9,8f,60,b1));
	outFields->push(HX_("_tileHeight",d4,aa,6c,39));
	outFields->push(HX_("_scaledTileWidth",7f,28,09,38));
	outFields->push(HX_("_scaledTileHeight",4e,bf,49,86));
	outFields->push(HX_("_helperPoint",03,e6,14,f8));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_checkBufferChanges",1a,1a,89,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,useScaleHack),HX_("useScaleHack",44,9c,16,98)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemap_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemap_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxTilemap_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxTilemap_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxTilemap_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemap_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxTilemap_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_("_buffers",f4,fc,48,eb)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_("_tileWidth",b9,8f,60,b1)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_("_tileHeight",d4,aa,6c,39)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_("_scaledTileWidth",7f,28,09,38)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_("_scaledTileHeight",4e,bf,49,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_("_helperPoint",03,e6,14,f8)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxTilemap_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,_checkBufferChanges),HX_("_checkBufferChanges",1a,1a,89,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemap_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemap_obj_sMemberFields[] = {
	HX_("useScaleHack",44,9c,16,98),
	HX_("scale",8a,ce,ce,78),
	HX_("antialiasing",f4,16,b3,48),
	HX_("offset",93,97,3f,60),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("color",63,71,5c,4a),
	HX_("alpha",5e,a7,96,21),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("blend",51,e8,f4,b4),
	HX_("shader",25,bf,20,1d),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_buffers",f4,fc,48,eb),
	HX_("_tileWidth",b9,8f,60,b1),
	HX_("_tileHeight",d4,aa,6c,39),
	HX_("_scaledTileWidth",7f,28,09,38),
	HX_("_scaledTileHeight",4e,bf,49,86),
	HX_("_helperPoint",03,e6,14,f8),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_checkBufferChanges",1a,1a,89,0b),
	HX_("destroy",fa,2c,86,24),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("onGameResized",3f,ef,13,ab),
	HX_("onCameraChanged",30,48,4e,5c),
	HX_("cacheGraphics",2d,61,95,fc),
	HX_("initTileObjects",16,be,45,2e),
	HX_("computeDimensions",a4,a4,eb,f3),
	HX_("updateMap",13,e8,df,82),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("draw",04,2c,70,42),
	HX_("refreshBuffers",d8,b2,a5,26),
	HX_("setDirty",10,b9,04,e8),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("getTileIndexByCoords",03,79,8b,76),
	HX_("getTileCoordsByIndex",b9,63,25,a1),
	HX_("getTileCoords",22,d6,8d,89),
	HX_("follow",71,91,96,f9),
	HX_("ray",ea,d5,56,00),
	HX_("tileToSprite",2e,e9,26,c3),
	HX_("updateBuffers",6a,08,ff,7c),
	HX_("drawTilemap",8a,34,d7,8e),
	HX_("updateTile",d7,b5,b1,05),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("set_blend",b4,30,ef,db),
	HX_("setScaleXYCallback",6e,fd,35,90),
	HX_("setScaleXCallback",b5,05,a2,03),
	HX_("setScaleYCallback",b6,6e,93,d6),
	HX_("defaultTileToSprite",8f,ab,7f,3f),
	HX_("set_allowCollisions",cd,8b,81,21),
	::String(null()) };

::hx::Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	FlxTilemap_obj _hx_dummy;
	FlxTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTilemap",2a,d5,63,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
