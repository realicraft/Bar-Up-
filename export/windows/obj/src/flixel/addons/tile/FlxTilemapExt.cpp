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
#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#include <flixel/addons/tile/FlxTileSpecial.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#include <flixel/addons/tile/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_36_new,"flixel.addons.tile.FlxTilemapExt","new",0xf39da2c0,"flixel.addons.tile.FlxTilemapExt.new","flixel/addons/tile/FlxTilemapExt.hx",36,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_61_destroy,"flixel.addons.tile.FlxTilemapExt","destroy",0x5c98af5a,"flixel.addons.tile.FlxTilemapExt.destroy","flixel/addons/tile/FlxTilemapExt.hx",61,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_81_update,"flixel.addons.tile.FlxTilemapExt","update",0x159f6fa9,"flixel.addons.tile.FlxTilemapExt.update","flixel/addons/tile/FlxTilemapExt.hx",81,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_109_drawTilemap,"flixel.addons.tile.FlxTilemapExt","drawTilemap",0x95ca66ea,"flixel.addons.tile.FlxTilemapExt.drawTilemap","flixel/addons/tile/FlxTilemapExt.hx",109,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_269_setSpecialTiles,"flixel.addons.tile.FlxTilemapExt","setSpecialTiles",0xceebf9ae,"flixel.addons.tile.FlxTilemapExt.setSpecialTiles","flixel/addons/tile/FlxTilemapExt.hx",269,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_318_overlapsWithCallback,"flixel.addons.tile.FlxTilemapExt","overlapsWithCallback",0x527644b7,"flixel.addons.tile.FlxTilemapExt.overlapsWithCallback","flixel/addons/tile/FlxTilemapExt.hx",318,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_421_setDownwardsGlue,"flixel.addons.tile.FlxTilemapExt","setDownwardsGlue",0xcc5aee08,"flixel.addons.tile.FlxTilemapExt.setDownwardsGlue","flixel/addons/tile/FlxTilemapExt.hx",421,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_436_setSlopes,"flixel.addons.tile.FlxTilemapExt","setSlopes",0x172c788a,"flixel.addons.tile.FlxTilemapExt.setSlopes","flixel/addons/tile/FlxTilemapExt.hx",436,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_463_setGentle,"flixel.addons.tile.FlxTilemapExt","setGentle",0x426fecff,"flixel.addons.tile.FlxTilemapExt.setGentle","flixel/addons/tile/FlxTilemapExt.hx",463,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_486_setSteep,"flixel.addons.tile.FlxTilemapExt","setSteep",0x6a626cad,"flixel.addons.tile.FlxTilemapExt.setSteep","flixel/addons/tile/FlxTilemapExt.hx",486,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_510_checkThickGentle,"flixel.addons.tile.FlxTilemapExt","checkThickGentle",0x33400952,"flixel.addons.tile.FlxTilemapExt.checkThickGentle","flixel/addons/tile/FlxTilemapExt.hx",510,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_515_checkThinGentle,"flixel.addons.tile.FlxTilemapExt","checkThinGentle",0xc0dd29de,"flixel.addons.tile.FlxTilemapExt.checkThinGentle","flixel/addons/tile/FlxTilemapExt.hx",515,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_520_checkThickSteep,"flixel.addons.tile.FlxTilemapExt","checkThickSteep",0x02ff7bba,"flixel.addons.tile.FlxTilemapExt.checkThickSteep","flixel/addons/tile/FlxTilemapExt.hx",520,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_525_checkThinSteep,"flixel.addons.tile.FlxTilemapExt","checkThinSteep",0x3870b0ae,"flixel.addons.tile.FlxTilemapExt.checkThinSteep","flixel/addons/tile/FlxTilemapExt.hx",525,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_534_fixSlopePoint,"flixel.addons.tile.FlxTilemapExt","fixSlopePoint",0x4a6df7ba,"flixel.addons.tile.FlxTilemapExt.fixSlopePoint","flixel/addons/tile/FlxTilemapExt.hx",534,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_546_onCollideFloorSlope,"flixel.addons.tile.FlxTilemapExt","onCollideFloorSlope",0xd997f31e,"flixel.addons.tile.FlxTilemapExt.onCollideFloorSlope","flixel/addons/tile/FlxTilemapExt.hx",546,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_572_onCollideCeilSlope,"flixel.addons.tile.FlxTilemapExt","onCollideCeilSlope",0x2272f167,"flixel.addons.tile.FlxTilemapExt.onCollideCeilSlope","flixel/addons/tile/FlxTilemapExt.hx",572,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_595_solveCollisionSlopeNorthwest,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeNorthwest",0x6b73d6bc,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeNorthwest","flixel/addons/tile/FlxTilemapExt.hx",595,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_667_solveCollisionSlopeNortheast,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeNortheast",0x5f8af68a,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeNortheast","flixel/addons/tile/FlxTilemapExt.hx",667,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_739_solveCollisionSlopeSouthwest,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeSouthwest",0x06eb4804,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeSouthwest","flixel/addons/tile/FlxTilemapExt.hx",739,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_795_solveCollisionSlopeSoutheast,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeSoutheast",0xfb0267d2,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeSoutheast","flixel/addons/tile/FlxTilemapExt.hx",795,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_849_setSlopeProperties,"flixel.addons.tile.FlxTilemapExt","setSlopeProperties",0x29f54d1c,"flixel.addons.tile.FlxTilemapExt.setSlopeProperties","flixel/addons/tile/FlxTilemapExt.hx",849,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_876_checkArrays,"flixel.addons.tile.FlxTilemapExt","checkArrays",0xa0f57e02,"flixel.addons.tile.FlxTilemapExt.checkArrays","flixel/addons/tile/FlxTilemapExt.hx",876,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_883_set_frames,"flixel.addons.tile.FlxTilemapExt","set_frames",0x6ce9f783,"flixel.addons.tile.FlxTilemapExt.set_frames","flixel/addons/tile/FlxTilemapExt.hx",883,0x29266091)
namespace flixel{
namespace addons{
namespace tile{

void FlxTilemapExt_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_36_new)
HXLINE(  55)		this->_slopeThinSteep = ::Array_obj< int >::__new(0);
HXLINE(  54)		this->_slopeThickSteep = ::Array_obj< int >::__new(0);
HXLINE(  53)		this->_slopeThinGentle = ::Array_obj< int >::__new(0);
HXLINE(  52)		this->_slopeThickGentle = ::Array_obj< int >::__new(0);
HXLINE(  50)		this->_slopeSoutheast = ::Array_obj< int >::__new(0);
HXLINE(  49)		this->_slopeSouthwest = ::Array_obj< int >::__new(0);
HXLINE(  48)		this->_slopeNortheast = ::Array_obj< int >::__new(0);
HXLINE(  47)		this->_slopeNorthwest = ::Array_obj< int >::__new(0);
HXLINE(  45)		this->_slopeSlowDownFactor = ((Float)0);
HXLINE(  42)		this->_downwardsGlue = false;
HXLINE(  41)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  41)		point->_inPool = false;
HXDLIN(  41)		this->_objPoint = point;
HXLINE(  40)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  40)		point1->_inPool = false;
HXDLIN(  40)		this->_slopePoint = point1;
HXLINE(  39)		this->_snapping = 2;
HXLINE(  36)		super::__construct();
            	}

Dynamic FlxTilemapExt_obj::__CreateEmpty() { return new FlxTilemapExt_obj; }

void *FlxTilemapExt_obj::_hx_vtable = 0;

Dynamic FlxTilemapExt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemapExt_obj > _hx_result = new FlxTilemapExt_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTilemapExt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d6253b5) {
		if (inClassId<=(int)0x37464a20) {
			if (inClassId<=(int)0x1dc5d3c6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1dc5d3c6;
			} else {
				return inClassId==(int)0x37464a20;
			}
		} else {
			return inClassId==(int)0x3d6253b5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTilemapExt_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_61_destroy)
HXLINE(  62)		this->_slopePoint = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_slopePoint)) );
HXLINE(  63)		this->_objPoint = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_objPoint)) );
HXLINE(  65)		this->_slopeNorthwest = null();
HXLINE(  66)		this->_slopeNortheast = null();
HXLINE(  67)		this->_slopeSouthwest = null();
HXLINE(  68)		this->_slopeSoutheast = null();
HXLINE(  70)		this->_slopeThickGentle = null();
HXLINE(  71)		this->_slopeThinGentle = null();
HXLINE(  72)		this->_slopeThickSteep = null();
HXLINE(  73)		this->_slopeThinSteep = null();
HXLINE(  75)		this->super::destroy();
HXLINE(  77)		this->_specialTiles = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_specialTiles);
            	}


void FlxTilemapExt_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_81_update)
HXLINE(  82)		this->super::update(elapsed);
HXLINE(  83)		bool dirty = false;
HXLINE(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( this->_specialTiles )) {
HXLINE(  85)			_hx_tmp = (this->_specialTiles->length > 0);
            		}
            		else {
HXLINE(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g1 = this->_specialTiles;
HXDLIN(  87)			while((_g < _g1->length)){
HXLINE(  87)				 ::flixel::addons::tile::FlxTileSpecial tile = _g1->__get(_g).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXDLIN(  87)				_g = (_g + 1);
HXLINE(  89)				bool _hx_tmp;
HXDLIN(  89)				if (::hx::IsNotNull( tile )) {
HXLINE(  89)					_hx_tmp = ::hx::IsNotNull( tile->animation );
            				}
            				else {
HXLINE(  89)					_hx_tmp = false;
            				}
HXDLIN(  89)				if (_hx_tmp) {
HXLINE(  91)					tile->update(elapsed);
HXLINE(  92)					if (!(dirty)) {
HXLINE(  92)						dirty = tile->dirty;
            					}
            					else {
HXLINE(  92)						dirty = true;
            					}
            				}
            			}
            		}
HXLINE(  97)		if (dirty) {
HXLINE(  98)			this->setDirty(true);
            		}
            	}


void FlxTilemapExt_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera){
            	HX_GC_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_109_drawTilemap)
HXLINE( 110)		bool isColored;
HXDLIN( 110)		if ((this->alpha == 1)) {
HXLINE( 110)			isColored = (this->color != 16777215);
            		}
            		else {
HXLINE( 110)			isColored = true;
            		}
HXLINE( 112)		Float drawX = ( (Float)(0) );
HXLINE( 113)		Float drawY = ( (Float)(0) );
HXLINE( 114)		Float scaledWidth = ( (Float)(this->_tileWidth) );
HXLINE( 115)		Float scaledHeight = ( (Float)(this->_tileHeight) );
HXLINE( 117)		 ::flixel::math::FlxMatrix _tileTransformMatrix = null();
HXLINE( 118)		 ::flixel::math::FlxMatrix matrixToUse;
HXLINE( 120)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 122)			Buffer->fill(null());
            		}
            		else {
HXLINE( 126)			{
HXLINE( 126)				 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,Camera);
HXDLIN( 126)				 ::openfl::geom::Point FlashPoint = this->_helperPoint;
HXDLIN( 126)				if (::hx::IsNull( FlashPoint )) {
HXLINE( 126)					FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 126)				FlashPoint->x = _this->x;
HXDLIN( 126)				FlashPoint->y = _this->y;
            			}
HXLINE( 128)			Float _hx_tmp;
HXDLIN( 128)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 128)				_hx_tmp = ( (Float)(::Math_obj::floor(this->_helperPoint->x)) );
            			}
            			else {
HXLINE( 128)				_hx_tmp = this->_helperPoint->x;
            			}
HXDLIN( 128)			this->_helperPoint->x = _hx_tmp;
HXLINE( 129)			Float _hx_tmp1;
HXDLIN( 129)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 129)				_hx_tmp1 = ( (Float)(::Math_obj::floor(this->_helperPoint->y)) );
            			}
            			else {
HXLINE( 129)				_hx_tmp1 = this->_helperPoint->y;
            			}
HXDLIN( 129)			this->_helperPoint->y = _hx_tmp1;
            		}
HXLINE( 133)		this->_point->set_x(((((Camera->scroll->x * this->scrollFactor->x) - this->x) - this->offset->x) + Camera->viewOffsetX));
HXLINE( 134)		this->_point->set_y(((((Camera->scroll->y * this->scrollFactor->y) - this->y) - this->offset->y) + Camera->viewOffsetY));
HXLINE( 136)		int screenXInTiles = ::Math_obj::floor((this->_point->x / ( (Float)(this->_tileWidth) )));
HXLINE( 137)		int screenYInTiles = ::Math_obj::floor((this->_point->y / ( (Float)(this->_tileHeight) )));
HXLINE( 138)		int screenRows = Buffer->rows;
HXLINE( 139)		int screenColumns = Buffer->columns;
HXLINE( 142)		 ::Dynamic Max = (this->widthInTiles - screenColumns);
HXDLIN( 142)		Float lowerBound;
HXDLIN( 142)		if ((screenXInTiles < 0)) {
HXLINE( 142)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 142)			lowerBound = ( (Float)(screenXInTiles) );
            		}
HXDLIN( 142)		Float screenXInTiles1;
HXDLIN( 142)		bool screenXInTiles2;
HXDLIN( 142)		if (::hx::IsNotNull( Max )) {
HXLINE( 142)			screenXInTiles2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 142)			screenXInTiles2 = false;
            		}
HXDLIN( 142)		if (screenXInTiles2) {
HXLINE( 142)			screenXInTiles1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 142)			screenXInTiles1 = lowerBound;
            		}
HXDLIN( 142)		screenXInTiles = ::Std_obj::_hx_int(screenXInTiles1);
HXLINE( 143)		 ::Dynamic Max1 = (this->heightInTiles - screenRows);
HXDLIN( 143)		Float lowerBound1;
HXDLIN( 143)		if ((screenYInTiles < 0)) {
HXLINE( 143)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 143)			lowerBound1 = ( (Float)(screenYInTiles) );
            		}
HXDLIN( 143)		Float screenYInTiles1;
HXDLIN( 143)		bool screenYInTiles2;
HXDLIN( 143)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 143)			screenYInTiles2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 143)			screenYInTiles2 = false;
            		}
HXDLIN( 143)		if (screenYInTiles2) {
HXLINE( 143)			screenYInTiles1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 143)			screenYInTiles1 = lowerBound1;
            		}
HXDLIN( 143)		screenYInTiles = ::Std_obj::_hx_int(screenYInTiles1);
HXLINE( 145)		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);
HXLINE( 146)		this->_flashPoint->y = ( (Float)(0) );
HXLINE( 147)		int columnIndex;
HXLINE( 148)		 ::flixel::tile::FlxTile tile;
HXLINE( 149)		 ::flixel::graphics::frames::FlxFrame frame;
HXLINE( 150)		 ::flixel::addons::tile::FlxTileSpecial special;
HXLINE( 156)		bool isSpecial = false;
HXLINE( 158)		{
HXLINE( 158)			int _g = 0;
HXDLIN( 158)			int _g1 = screenRows;
HXDLIN( 158)			while((_g < _g1)){
HXLINE( 158)				_g = (_g + 1);
HXDLIN( 158)				int row = (_g - 1);
HXLINE( 160)				columnIndex = rowIndex;
HXLINE( 161)				this->_flashPoint->x = ( (Float)(0) );
HXLINE( 163)				{
HXLINE( 163)					int _g1 = 0;
HXDLIN( 163)					int _g2 = screenColumns;
HXDLIN( 163)					while((_g1 < _g2)){
HXLINE( 163)						_g1 = (_g1 + 1);
HXDLIN( 163)						int column = (_g1 - 1);
HXLINE( 165)						tile = Dynamic( this->_tileObjects->__get(this->_data->__get(columnIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 166)						special = null();
HXLINE( 167)						isSpecial = false;
HXLINE( 169)						bool _hx_tmp;
HXDLIN( 169)						if (::hx::IsNotNull( this->_specialTiles )) {
HXLINE( 169)							_hx_tmp = ::hx::IsNotNull( this->_specialTiles->__get(columnIndex).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >() );
            						}
            						else {
HXLINE( 169)							_hx_tmp = false;
            						}
HXDLIN( 169)						if (_hx_tmp) {
HXLINE( 171)							special = this->_specialTiles->__get(columnIndex).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXLINE( 172)							bool isSpecial1;
HXDLIN( 172)							bool isSpecial2;
HXDLIN( 172)							if (!(special->flipX)) {
HXLINE( 172)								isSpecial2 = special->flipY;
            							}
            							else {
HXLINE( 172)								isSpecial2 = true;
            							}
HXDLIN( 172)							if (!(isSpecial2)) {
HXLINE( 172)								isSpecial1 = (special->rotate != 0);
            							}
            							else {
HXLINE( 172)								isSpecial1 = true;
            							}
HXDLIN( 172)							if (!(isSpecial1)) {
HXLINE( 172)								isSpecial = ::hx::IsNotNull( special->animation );
            							}
            							else {
HXLINE( 172)								isSpecial = true;
            							}
            						}
HXLINE( 175)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 177)							if (isSpecial) {
HXLINE( 179)								special->paint(Buffer->pixels,this->_flashPoint);
HXLINE( 180)								bool _hx_tmp;
HXDLIN( 180)								if (!(special->dirty)) {
HXLINE( 180)									_hx_tmp = Buffer->dirty;
            								}
            								else {
HXLINE( 180)									_hx_tmp = true;
            								}
HXDLIN( 180)								Buffer->dirty = _hx_tmp;
            							}
            							else {
HXLINE( 182)								bool _hx_tmp;
HXDLIN( 182)								bool _hx_tmp1;
HXDLIN( 182)								if (::hx::IsNotNull( tile )) {
HXLINE( 182)									_hx_tmp1 = tile->visible;
            								}
            								else {
HXLINE( 182)									_hx_tmp1 = false;
            								}
HXDLIN( 182)								if (_hx_tmp1) {
HXLINE( 182)									_hx_tmp = (tile->frame->type != 2);
            								}
            								else {
HXLINE( 182)									_hx_tmp = false;
            								}
HXDLIN( 182)								if (_hx_tmp) {
HXLINE( 184)									tile->frame->paint(Buffer->pixels,this->_flashPoint,true,null());
            								}
            							}
            						}
            						else {
HXLINE( 214)							if (isSpecial) {
HXLINE( 214)								frame = special->currFrame;
            							}
            							else {
HXLINE( 214)								frame = tile->frame;
            							}
HXLINE( 216)							if (::hx::IsNotNull( frame )) {
HXLINE( 218)								drawX = (this->_helperPoint->x + (( (Float)(::hx::Mod(columnIndex,this->widthInTiles)) ) * scaledWidth));
HXLINE( 219)								drawY = (this->_helperPoint->y + (( (Float)(::Math_obj::floor((( (Float)(columnIndex) ) / ( (Float)(this->widthInTiles) )))) ) * scaledHeight));
HXLINE( 221)								if (isSpecial) {
HXLINE( 223)									_tileTransformMatrix = special->getMatrix();
HXLINE( 224)									matrixToUse = _tileTransformMatrix;
            								}
            								else {
HXLINE( 228)									frame->prepareMatrix(this->_matrix,null(),null(),null());
HXLINE( 229)									matrixToUse = this->_matrix;
            								}
HXLINE( 232)								matrixToUse->translate(drawX,drawY);
HXLINE( 233)								Camera->drawPixels(frame,null(),matrixToUse,this->colorTransform,this->blend,null(),null());
            							}
            						}
HXLINE( 237)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 239)							 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN( 239)							fh->x = (fh->x + this->_tileWidth);
            						}
HXLINE( 241)						columnIndex = (columnIndex + 1);
            					}
            				}
HXLINE( 244)				rowIndex = (rowIndex + this->widthInTiles);
HXLINE( 245)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 247)					 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN( 247)					fh->y = (fh->y + this->_tileHeight);
            				}
            			}
            		}
HXLINE( 251)		Buffer->x = ( (Float)((screenXInTiles * this->_tileWidth)) );
HXLINE( 252)		Buffer->y = ( (Float)((screenYInTiles * this->_tileHeight)) );
HXLINE( 254)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 256)			if (isColored) {
HXLINE( 257)				Buffer->colorTransform(this->colorTransform);
            			}
HXLINE( 258)			Buffer->blend = this->blend;
            		}
HXLINE( 261)		Buffer->dirty = false;
            	}


void FlxTilemapExt_obj::setSpecialTiles(::Array< ::Dynamic> tiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_269_setSpecialTiles)
HXLINE( 270)		this->_specialTiles = ::Array_obj< ::Dynamic>::__new();
HXLINE( 272)		 ::flixel::addons::tile::FlxTileSpecial tile;
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			int _g1 = tiles->length;
HXDLIN( 273)			while((_g < _g1)){
HXLINE( 273)				_g = (_g + 1);
HXDLIN( 273)				int i = (_g - 1);
HXLINE( 275)				tile = tiles->__get(i).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXLINE( 276)				bool _hx_tmp;
HXDLIN( 276)				if (::hx::IsNotNull( tile )) {
HXLINE( 276)					bool _hx_tmp1;
HXDLIN( 276)					bool _hx_tmp2;
HXDLIN( 276)					if (!(tile->flipX)) {
HXLINE( 276)						_hx_tmp2 = tile->flipY;
            					}
            					else {
HXLINE( 276)						_hx_tmp2 = true;
            					}
HXDLIN( 276)					if (!(_hx_tmp2)) {
HXLINE( 276)						_hx_tmp1 = (tile->rotate != 0);
            					}
            					else {
HXLINE( 276)						_hx_tmp1 = true;
            					}
HXDLIN( 276)					if (!(_hx_tmp1)) {
HXLINE( 276)						_hx_tmp = ::hx::IsNotNull( tile->animation );
            					}
            					else {
HXLINE( 276)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 276)					_hx_tmp = false;
            				}
HXDLIN( 276)				if (_hx_tmp) {
HXLINE( 278)					this->_specialTiles[i] = tile;
HXLINE( 280)					tile->set_currTileId((tile->currTileId - this->_startingIndex));
HXLINE( 281)					tile->set_frames(this->frames);
HXLINE( 283)					if (::hx::IsNotNull( tile->animation )) {
HXLINE( 285)						::Array< int > animFrames = tile->animation->frames;
HXLINE( 286)						::Array< int > preparedFrames = ::Array_obj< int >::__new(0);
HXLINE( 288)						{
HXLINE( 288)							int _g = 0;
HXDLIN( 288)							int _g1 = animFrames->length;
HXDLIN( 288)							while((_g < _g1)){
HXLINE( 288)								_g = (_g + 1);
HXDLIN( 288)								int j = (_g - 1);
HXLINE( 290)								preparedFrames[j] = (animFrames->__get(j) - this->_startingIndex);
            							}
            						}
HXLINE( 293)						tile->animation->frames = preparedFrames;
            					}
            				}
            				else {
HXLINE( 298)					this->_specialTiles[i] = null();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,setSpecialTiles,(void))

bool FlxTilemapExt_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_318_overlapsWithCallback)
HXLINE( 319)		bool results = false;
HXLINE( 321)		Float X = this->x;
HXLINE( 322)		Float Y = this->y;
HXLINE( 324)		if (::hx::IsNotNull( Position )) {
HXLINE( 326)			X = Position->x;
HXLINE( 327)			Y = Position->y;
            		}
HXLINE( 331)		int selectionX = ::Math_obj::floor(((Object->x - X) / ( (Float)(this->_tileWidth) )));
HXLINE( 332)		int selectionY = ::Math_obj::floor(((Object->y - Y) / ( (Float)(this->_tileHeight) )));
HXLINE( 333)		Float selectionWidth = Object->get_width();
HXDLIN( 333)		int selectionWidth1 = ((selectionX + ::Math_obj::ceil((selectionWidth / ( (Float)(this->_tileWidth) )))) + 1);
HXLINE( 334)		Float selectionHeight = Object->get_height();
HXDLIN( 334)		int selectionHeight1 = ((selectionY + ::Math_obj::ceil((selectionHeight / ( (Float)(this->_tileHeight) )))) + 1);
HXLINE( 337)		if ((selectionX <= 0)) {
HXLINE( 337)			selectionX = 0;
            		}
HXLINE( 338)		if ((selectionY <= 0)) {
HXLINE( 338)			selectionY = 0;
            		}
HXLINE( 339)		int b = this->widthInTiles;
HXDLIN( 339)		if ((selectionWidth1 > b)) {
HXLINE( 339)			selectionWidth1 = b;
            		}
HXLINE( 340)		int b1 = this->heightInTiles;
HXDLIN( 340)		if ((selectionHeight1 > b1)) {
HXLINE( 340)			selectionHeight1 = b1;
            		}
HXLINE( 343)		int rowStart = (selectionY * this->widthInTiles);
HXLINE( 344)		int row = selectionY;
HXLINE( 345)		int column;
HXLINE( 346)		 ::flixel::tile::FlxTile tile;
HXLINE( 347)		bool overlapFound;
HXLINE( 348)		Float deltaX = (X - this->last->x);
HXLINE( 349)		Float deltaY = (Y - this->last->y);
HXLINE( 351)		while((row < selectionHeight1)){
HXLINE( 353)			column = selectionX;
HXLINE( 355)			while((column < selectionWidth1)){
HXLINE( 357)				overlapFound = false;
HXLINE( 358)				tile = Dynamic( this->_tileObjects->__get(this->_data->__get((rowStart + column)))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 360)				if ((tile->allowCollisions != 0)) {
HXLINE( 362)					tile->set_x((X + (column * this->_tileWidth)));
HXLINE( 363)					tile->set_y((Y + (row * this->_tileHeight)));
HXLINE( 364)					tile->last->set_x((tile->x - deltaX));
HXLINE( 365)					tile->last->set_y((tile->y - deltaY));
HXLINE( 367)					if (::hx::IsNotNull( Callback )) {
HXLINE( 369)						if (FlipCallbackParams) {
HXLINE( 371)							overlapFound = ( (bool)(Callback(Object,tile)) );
            						}
            						else {
HXLINE( 375)							overlapFound = ( (bool)(Callback(tile,Object)) );
            						}
            					}
            					else {
HXLINE( 380)						bool overlapFound1;
HXDLIN( 380)						bool overlapFound2;
HXDLIN( 380)						Float Object1 = Object->x;
HXDLIN( 380)						Float overlapFound3 = (Object1 + Object->get_width());
HXDLIN( 380)						if ((overlapFound3 > tile->x)) {
HXLINE( 380)							Float Object1 = Object->x;
HXDLIN( 380)							Float tile1 = tile->x;
HXDLIN( 380)							overlapFound2 = (Object1 < (tile1 + tile->get_width()));
            						}
            						else {
HXLINE( 380)							overlapFound2 = false;
            						}
HXDLIN( 380)						if (overlapFound2) {
HXLINE( 380)							Float Object1 = Object->y;
HXDLIN( 380)							Float overlapFound = (Object1 + Object->get_height());
HXDLIN( 380)							overlapFound1 = (overlapFound > tile->y);
            						}
            						else {
HXLINE( 380)							overlapFound1 = false;
            						}
HXDLIN( 380)						if (overlapFound1) {
HXLINE( 381)							Float Object1 = Object->y;
HXDLIN( 381)							Float tile1 = tile->y;
HXDLIN( 381)							overlapFound = (Object1 < (tile1 + tile->get_height()));
            						}
            						else {
HXLINE( 380)							overlapFound = false;
            						}
            					}
HXLINE( 385)					bool _hx_tmp;
HXDLIN( 385)					if (!(overlapFound)) {
HXLINE( 385)						if (!(overlapFound)) {
HXLINE( 385)							_hx_tmp = this->checkArrays(tile->index);
            						}
            						else {
HXLINE( 385)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 385)						_hx_tmp = true;
            					}
HXDLIN( 385)					if (_hx_tmp) {
HXLINE( 387)						bool _hx_tmp;
HXDLIN( 387)						if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 388)							if (::hx::IsNotNull( tile->filter )) {
HXLINE( 387)								_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            							}
            							else {
HXLINE( 387)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 387)							_hx_tmp = false;
            						}
HXDLIN( 387)						if (_hx_tmp) {
HXLINE( 390)							tile->mapIndex = (rowStart + column);
HXLINE( 391)							tile->callbackFunction(tile,Object);
            						}
HXLINE( 393)						results = true;
            					}
            				}
            				else {
HXLINE( 396)					bool _hx_tmp;
HXDLIN( 396)					if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 397)						if (::hx::IsNotNull( tile->filter )) {
HXLINE( 396)							_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            						}
            						else {
HXLINE( 396)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 396)						_hx_tmp = false;
            					}
HXDLIN( 396)					if (_hx_tmp) {
HXLINE( 399)						tile->mapIndex = (rowStart + column);
HXLINE( 400)						tile->callbackFunction(tile,Object);
            					}
            				}
HXLINE( 402)				column = (column + 1);
            			}
HXLINE( 404)			rowStart = (rowStart + this->widthInTiles);
HXLINE( 405)			row = (row + 1);
            		}
HXLINE( 408)		return results;
            	}


void FlxTilemapExt_obj::setDownwardsGlue(bool downwardsGlue,::hx::Null< Float >  __o_slopeSlowDownFactor,::hx::Null< Float >  __o_velocityYDownSlope){
            		Float slopeSlowDownFactor = __o_slopeSlowDownFactor.Default(((Float)0.0));
            		Float velocityYDownSlope = __o_velocityYDownSlope.Default(200);
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_421_setDownwardsGlue)
HXLINE( 422)		this->_downwardsGlue = downwardsGlue;
HXLINE( 423)		this->_slopeSlowDownFactor = (( (Float)(1) ) - (slopeSlowDownFactor / ( (Float)(10) )));
HXLINE( 424)		this->_velocityYDownSlope = velocityYDownSlope;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemapExt_obj,setDownwardsGlue,(void))

void FlxTilemapExt_obj::setSlopes(::Array< int > Northwest,::Array< int > Northeast,::Array< int > Southwest,::Array< int > Southeast){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_436_setSlopes)
HXLINE( 437)		if (::hx::IsNotNull( Northwest )) {
HXLINE( 439)			this->_slopeNorthwest = Northwest;
            		}
HXLINE( 441)		if (::hx::IsNotNull( Northeast )) {
HXLINE( 443)			this->_slopeNortheast = Northeast;
            		}
HXLINE( 445)		if (::hx::IsNotNull( Southwest )) {
HXLINE( 447)			this->_slopeSouthwest = Southwest;
            		}
HXLINE( 449)		if (::hx::IsNotNull( Southeast )) {
HXLINE( 451)			this->_slopeSoutheast = Southeast;
            		}
HXLINE( 453)		this->setSlopeProperties();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapExt_obj,setSlopes,(void))

void FlxTilemapExt_obj::setGentle(::Array< int > ThickTiles,::Array< int > ThinTiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_463_setGentle)
HXLINE( 464)		if (::hx::IsNotNull( ThickTiles )) {
HXLINE( 466)			this->_slopeThickGentle = ThickTiles;
            		}
HXLINE( 469)		if (::hx::IsNotNull( ThinTiles )) {
HXLINE( 471)			this->_slopeThinGentle = ThinTiles;
HXLINE( 472)			{
HXLINE( 472)				int _g = 0;
HXDLIN( 472)				::Array< int > _g1 = this->_slopeThinGentle;
HXDLIN( 472)				while((_g < _g1->length)){
HXLINE( 472)					int tile = _g1->__get(_g);
HXDLIN( 472)					_g = (_g + 1);
HXLINE( 474)					 ::flixel::tile::FlxTile _hx_tmp = Dynamic( this->_tileObjects->__get(tile)).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN( 474)					int _hx_tmp1;
HXDLIN( 474)					bool _hx_tmp2;
HXDLIN( 474)					if ((this->_slopeSouthwest->indexOf(tile,null()) < 0)) {
HXLINE( 474)						_hx_tmp2 = (this->_slopeSoutheast->indexOf(tile,null()) >= 0);
            					}
            					else {
HXLINE( 474)						_hx_tmp2 = true;
            					}
HXDLIN( 474)					if (_hx_tmp2) {
HXLINE( 474)						_hx_tmp1 = 256;
            					}
            					else {
HXLINE( 474)						_hx_tmp1 = 4096;
            					}
HXDLIN( 474)					_hx_tmp->set_allowCollisions(_hx_tmp1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,setGentle,(void))

void FlxTilemapExt_obj::setSteep(::Array< int > ThickTiles,::Array< int > ThinTiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_486_setSteep)
HXLINE( 487)		if (::hx::IsNotNull( ThickTiles )) {
HXLINE( 489)			this->_slopeThickSteep = ThickTiles;
            		}
HXLINE( 492)		if (::hx::IsNotNull( ThinTiles )) {
HXLINE( 494)			this->_slopeThinSteep = ThinTiles;
HXLINE( 495)			{
HXLINE( 495)				int _g = 0;
HXDLIN( 495)				::Array< int > _g1 = this->_slopeThinSteep;
HXDLIN( 495)				while((_g < _g1->length)){
HXLINE( 495)					int tile = _g1->__get(_g);
HXDLIN( 495)					_g = (_g + 1);
HXLINE( 497)					 ::flixel::tile::FlxTile _hx_tmp = Dynamic( this->_tileObjects->__get(tile)).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN( 497)					int _hx_tmp1;
HXDLIN( 497)					bool _hx_tmp2;
HXDLIN( 497)					if ((this->_slopeSouthwest->indexOf(tile,null()) < 0)) {
HXLINE( 497)						_hx_tmp2 = (this->_slopeNorthwest->indexOf(tile,null()) >= 0);
            					}
            					else {
HXLINE( 497)						_hx_tmp2 = true;
            					}
HXDLIN( 497)					if (_hx_tmp2) {
HXLINE( 497)						_hx_tmp1 = 16;
            					}
            					else {
HXLINE( 497)						_hx_tmp1 = 1;
            					}
HXDLIN( 497)					_hx_tmp->set_allowCollisions(_hx_tmp1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,setSteep,(void))

bool FlxTilemapExt_obj::checkThickGentle(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_510_checkThickGentle)
HXDLIN( 510)		return (this->_slopeThickGentle->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThickGentle,return )

bool FlxTilemapExt_obj::checkThinGentle(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_515_checkThinGentle)
HXDLIN( 515)		return (this->_slopeThinGentle->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThinGentle,return )

bool FlxTilemapExt_obj::checkThickSteep(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_520_checkThickSteep)
HXDLIN( 520)		return (this->_slopeThickSteep->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThickSteep,return )

bool FlxTilemapExt_obj::checkThinSteep(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_525_checkThinSteep)
HXDLIN( 525)		return (this->_slopeThinSteep->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThinSteep,return )

void FlxTilemapExt_obj::fixSlopePoint( ::flixel::tile::FlxTile Slope){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_534_fixSlopePoint)
HXLINE( 535)		Float Value = this->_slopePoint->x;
HXDLIN( 535)		 ::Dynamic Min = Slope->x;
HXDLIN( 535)		 ::Dynamic Max = (Slope->x + this->_tileWidth);
HXDLIN( 535)		Float lowerBound;
HXDLIN( 535)		bool lowerBound1;
HXDLIN( 535)		if (::hx::IsNotNull( Min )) {
HXLINE( 535)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE( 535)			lowerBound1 = false;
            		}
HXDLIN( 535)		if (lowerBound1) {
HXLINE( 535)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE( 535)			lowerBound = Value;
            		}
HXDLIN( 535)		Float _hx_tmp;
HXDLIN( 535)		bool _hx_tmp1;
HXDLIN( 535)		if (::hx::IsNotNull( Max )) {
HXLINE( 535)			_hx_tmp1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 535)			_hx_tmp1 = false;
            		}
HXDLIN( 535)		if (_hx_tmp1) {
HXLINE( 535)			_hx_tmp = ( (Float)(Max) );
            		}
            		else {
HXLINE( 535)			_hx_tmp = lowerBound;
            		}
HXDLIN( 535)		this->_slopePoint->set_x(_hx_tmp);
HXLINE( 536)		Float Value1 = this->_slopePoint->y;
HXDLIN( 536)		 ::Dynamic Min1 = Slope->y;
HXDLIN( 536)		 ::Dynamic Max1 = (Slope->y + this->_tileHeight);
HXDLIN( 536)		Float lowerBound2;
HXDLIN( 536)		bool lowerBound3;
HXDLIN( 536)		if (::hx::IsNotNull( Min1 )) {
HXLINE( 536)			lowerBound3 = ::hx::IsLess( Value1,Min1 );
            		}
            		else {
HXLINE( 536)			lowerBound3 = false;
            		}
HXDLIN( 536)		if (lowerBound3) {
HXLINE( 536)			lowerBound2 = ( (Float)(Min1) );
            		}
            		else {
HXLINE( 536)			lowerBound2 = Value1;
            		}
HXDLIN( 536)		Float _hx_tmp2;
HXDLIN( 536)		bool _hx_tmp3;
HXDLIN( 536)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 536)			_hx_tmp3 = ::hx::IsGreater( lowerBound2,Max1 );
            		}
            		else {
HXLINE( 536)			_hx_tmp3 = false;
            		}
HXDLIN( 536)		if (_hx_tmp3) {
HXLINE( 536)			_hx_tmp2 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 536)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN( 536)		this->_slopePoint->set_y(_hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,fixSlopePoint,(void))

void FlxTilemapExt_obj::onCollideFloorSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_546_onCollideFloorSlope)
HXLINE( 548)		Object->touching = 4096;
HXLINE( 551)		if (this->_downwardsGlue) {
HXLINE( 552)			Object->velocity->set_y(this->_velocityYDownSlope);
            		}
            		else {
HXLINE( 554)			Object->velocity->set_y(::Math_obj::min(Object->velocity->y,( (Float)(0) )));
            		}
HXLINE( 557)		Float _hx_tmp = this->_slopePoint->y;
HXDLIN( 557)		Object->set_y((_hx_tmp - Object->get_height()));
HXLINE( 559)		Float Object1 = Object->y;
HXDLIN( 559)		Float Slope1 = Slope->y;
HXDLIN( 559)		if ((Object1 < (Slope1 - Object->get_height()))) {
HXLINE( 561)			Float Slope1 = Slope->y;
HXDLIN( 561)			Object->set_y((Slope1 - Object->get_height()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideFloorSlope,(void))

void FlxTilemapExt_obj::onCollideCeilSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_572_onCollideCeilSlope)
HXLINE( 574)		Object->touching = 256;
HXLINE( 577)		Object->velocity->set_y(::Math_obj::max(Object->velocity->y,( (Float)(0) )));
HXLINE( 580)		Object->set_y(this->_slopePoint->y);
HXLINE( 582)		if ((Object->y > (Slope->y + this->_tileHeight))) {
HXLINE( 584)			Object->set_y((Slope->y + this->_tileHeight));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideCeilSlope,(void))

void FlxTilemapExt_obj::solveCollisionSlopeNorthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_595_solveCollisionSlopeNorthwest)
HXLINE( 596)		Float Object1 = Object->x;
HXDLIN( 596)		Float _hx_tmp = (Object1 + Object->get_width());
HXDLIN( 596)		Float Slope1 = Slope->x;
HXDLIN( 596)		Float _hx_tmp1 = (Slope1 + Slope->get_width());
HXDLIN( 596)		if ((_hx_tmp > (_hx_tmp1 + this->_snapping))) {
HXLINE( 598)			return;
            		}
HXLINE( 601)		 ::flixel::math::FlxPoint _hx_tmp2 = this->_objPoint;
HXDLIN( 601)		Float Object2 = Object->x;
HXDLIN( 601)		Float _hx_tmp3 = (Object2 + Object->get_width());
HXDLIN( 601)		_hx_tmp2->set_x(( (Float)(::Math_obj::floor((_hx_tmp3 + this->_snapping))) ));
HXLINE( 602)		 ::flixel::math::FlxPoint _hx_tmp4 = this->_objPoint;
HXDLIN( 602)		Float Object3 = Object->y;
HXDLIN( 602)		_hx_tmp4->set_y(( (Float)(::Math_obj::floor((Object3 + Object->get_height()))) ));
HXLINE( 606)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 607)		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (this->_slopePoint->x - Slope->x)));
HXLINE( 609)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 610)		if (this->checkThinSteep(tileId)) {
HXLINE( 612)			if (((this->_slopePoint->x - Slope->x) <= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 614)				return;
            			}
            			else {
HXLINE( 618)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(2) ) - ((( (Float)(2) ) * (this->_slopePoint->x - Slope->x)) / ( (Float)(this->_tileWidth) ))))) + this->_snapping));
HXLINE( 619)				bool _hx_tmp;
HXDLIN( 619)				if (this->_downwardsGlue) {
HXLINE( 619)					_hx_tmp = (Object->velocity->x > 0);
            				}
            				else {
HXLINE( 619)					_hx_tmp = false;
            				}
HXDLIN( 619)				if (_hx_tmp) {
HXLINE( 620)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 620)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            		}
            		else {
HXLINE( 623)			if (this->checkThickSteep(tileId)) {
HXLINE( 625)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(1) ) - (( (Float)(2) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))))) + this->_snapping));
HXLINE( 626)				bool _hx_tmp;
HXDLIN( 626)				if (this->_downwardsGlue) {
HXLINE( 626)					_hx_tmp = (Object->velocity->x > 0);
            				}
            				else {
HXLINE( 626)					_hx_tmp = false;
            				}
HXDLIN( 626)				if (_hx_tmp) {
HXLINE( 627)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 627)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            			else {
HXLINE( 629)				if (this->checkThickGentle(tileId)) {
HXLINE( 631)					this->_slopePoint->set_y((Slope->y + (((( (Float)(this->_tileHeight) ) - this->_slopePoint->x) + Slope->x) / ( (Float)(2) ))));
HXLINE( 632)					bool _hx_tmp;
HXDLIN( 632)					if (this->_downwardsGlue) {
HXLINE( 632)						_hx_tmp = (Object->velocity->x > 0);
            					}
            					else {
HXLINE( 632)						_hx_tmp = false;
            					}
HXDLIN( 632)					if (_hx_tmp) {
HXLINE( 633)						 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 633)						fh->set_x((fh->x * this->_slopeSlowDownFactor));
            					}
            				}
            				else {
HXLINE( 635)					if (this->checkThinGentle(tileId)) {
HXLINE( 637)						this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((this->_slopePoint->x - Slope->x) / ( (Float)(2) ))));
HXLINE( 638)						bool _hx_tmp;
HXDLIN( 638)						if (this->_downwardsGlue) {
HXLINE( 638)							_hx_tmp = (Object->velocity->x > 0);
            						}
            						else {
HXLINE( 638)							_hx_tmp = false;
            						}
HXDLIN( 638)						if (_hx_tmp) {
HXLINE( 639)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 639)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            					else {
HXLINE( 643)						bool _hx_tmp;
HXDLIN( 643)						if (this->_downwardsGlue) {
HXLINE( 643)							_hx_tmp = (Object->velocity->x > 0);
            						}
            						else {
HXLINE( 643)							_hx_tmp = false;
            						}
HXDLIN( 643)						if (_hx_tmp) {
HXLINE( 644)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 644)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            				}
            			}
            		}
HXLINE( 647)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 650)		bool _hx_tmp5;
HXDLIN( 650)		bool _hx_tmp6;
HXDLIN( 650)		bool _hx_tmp7;
HXDLIN( 650)		if ((this->_objPoint->x > (Slope->x + this->_snapping))) {
HXLINE( 651)			Float _hx_tmp = this->_objPoint->x;
HXDLIN( 651)			Float _hx_tmp1 = (Slope->x + this->_tileWidth);
HXDLIN( 651)			Float _hx_tmp2 = (_hx_tmp1 + Object->get_width());
HXLINE( 650)			_hx_tmp7 = (_hx_tmp < (_hx_tmp2 + this->_snapping));
            		}
            		else {
HXLINE( 650)			_hx_tmp7 = false;
            		}
HXDLIN( 650)		if (_hx_tmp7) {
HXLINE( 650)			_hx_tmp6 = (this->_objPoint->y >= this->_slopePoint->y);
            		}
            		else {
HXLINE( 650)			_hx_tmp6 = false;
            		}
HXDLIN( 650)		if (_hx_tmp6) {
HXLINE( 650)			_hx_tmp5 = (this->_objPoint->y <= (Slope->y + this->_tileHeight));
            		}
            		else {
HXLINE( 650)			_hx_tmp5 = false;
            		}
HXDLIN( 650)		if (_hx_tmp5) {
HXLINE( 656)			this->onCollideFloorSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeNorthwest,(void))

void FlxTilemapExt_obj::solveCollisionSlopeNortheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_667_solveCollisionSlopeNortheast)
HXLINE( 668)		if ((Object->x < (Slope->x - ( (Float)(this->_snapping) )))) {
HXLINE( 670)			return;
            		}
HXLINE( 673)		this->_objPoint->set_x(( (Float)(::Math_obj::floor((Object->x - ( (Float)(this->_snapping) )))) ));
HXLINE( 674)		 ::flixel::math::FlxPoint _hx_tmp = this->_objPoint;
HXDLIN( 674)		Float Object1 = Object->y;
HXDLIN( 674)		_hx_tmp->set_y(( (Float)(::Math_obj::floor((Object1 + Object->get_height()))) ));
HXLINE( 678)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 679)		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((Slope->x - this->_slopePoint->x) + this->_tileWidth)));
HXLINE( 681)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 682)		if (this->checkThinSteep(tileId)) {
HXLINE( 684)			if (((this->_slopePoint->x - Slope->x) >= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 686)				return;
            			}
            			else {
HXLINE( 690)				this->_slopePoint->set_y(((Slope->y + (( (Float)((this->_tileHeight * 2)) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))) + this->_snapping));
            			}
HXLINE( 692)			bool _hx_tmp;
HXDLIN( 692)			if (this->_downwardsGlue) {
HXLINE( 692)				_hx_tmp = (Object->velocity->x < 0);
            			}
            			else {
HXLINE( 692)				_hx_tmp = false;
            			}
HXDLIN( 692)			if (_hx_tmp) {
HXLINE( 693)				 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 693)				fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            			}
            		}
            		else {
HXLINE( 695)			if (this->checkThickSteep(tileId)) {
HXLINE( 697)				this->_slopePoint->set_y(((Slope->y - (( (Float)(this->_tileHeight) ) * (1 + (( (Float)(2) ) * ((Slope->x - this->_slopePoint->x) / ( (Float)(this->_tileWidth) )))))) + this->_snapping));
HXLINE( 698)				bool _hx_tmp;
HXDLIN( 698)				if (this->_downwardsGlue) {
HXLINE( 698)					_hx_tmp = (Object->velocity->x < 0);
            				}
            				else {
HXLINE( 698)					_hx_tmp = false;
            				}
HXDLIN( 698)				if (_hx_tmp) {
HXLINE( 699)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 699)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            			else {
HXLINE( 701)				if (this->checkThickGentle(tileId)) {
HXLINE( 703)					this->_slopePoint->set_y((Slope->y + ((((( (Float)(this->_tileHeight) ) - Slope->x) + this->_slopePoint->x) - ( (Float)(this->_tileWidth) )) / ( (Float)(2) ))));
HXLINE( 704)					bool _hx_tmp;
HXDLIN( 704)					if (this->_downwardsGlue) {
HXLINE( 704)						_hx_tmp = (Object->velocity->x < 0);
            					}
            					else {
HXLINE( 704)						_hx_tmp = false;
            					}
HXDLIN( 704)					if (_hx_tmp) {
HXLINE( 705)						 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 705)						fh->set_x((fh->x * this->_slopeSlowDownFactor));
            					}
            				}
            				else {
HXLINE( 707)					if (this->checkThinGentle(tileId)) {
HXLINE( 709)						this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (((Slope->x - this->_slopePoint->x) + this->_tileWidth) / ( (Float)(2) ))));
HXLINE( 710)						bool _hx_tmp;
HXDLIN( 710)						if (this->_downwardsGlue) {
HXLINE( 710)							_hx_tmp = (Object->velocity->x < 0);
            						}
            						else {
HXLINE( 710)							_hx_tmp = false;
            						}
HXDLIN( 710)						if (_hx_tmp) {
HXLINE( 711)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 711)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            					else {
HXLINE( 715)						bool _hx_tmp;
HXDLIN( 715)						if (this->_downwardsGlue) {
HXLINE( 715)							_hx_tmp = (Object->velocity->x < 0);
            						}
            						else {
HXLINE( 715)							_hx_tmp = false;
            						}
HXDLIN( 715)						if (_hx_tmp) {
HXLINE( 716)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 716)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            				}
            			}
            		}
HXLINE( 719)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 722)		bool _hx_tmp1;
HXDLIN( 722)		bool _hx_tmp2;
HXDLIN( 722)		bool _hx_tmp3;
HXDLIN( 722)		Float _hx_tmp4 = this->_objPoint->x;
HXDLIN( 722)		Float Slope1 = Slope->x;
HXDLIN( 722)		Float _hx_tmp5 = (Slope1 - Object->get_width());
HXDLIN( 722)		if ((_hx_tmp4 > (_hx_tmp5 - ( (Float)(this->_snapping) )))) {
HXLINE( 722)			_hx_tmp3 = (this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping));
            		}
            		else {
HXLINE( 722)			_hx_tmp3 = false;
            		}
HXDLIN( 722)		if (_hx_tmp3) {
HXLINE( 722)			_hx_tmp2 = (this->_objPoint->y >= this->_slopePoint->y);
            		}
            		else {
HXLINE( 722)			_hx_tmp2 = false;
            		}
HXDLIN( 722)		if (_hx_tmp2) {
HXLINE( 722)			_hx_tmp1 = (this->_objPoint->y <= (Slope->y + this->_tileHeight));
            		}
            		else {
HXLINE( 722)			_hx_tmp1 = false;
            		}
HXDLIN( 722)		if (_hx_tmp1) {
HXLINE( 728)			this->onCollideFloorSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeNortheast,(void))

void FlxTilemapExt_obj::solveCollisionSlopeSouthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_739_solveCollisionSlopeSouthwest)
HXLINE( 741)		 ::flixel::math::FlxPoint _hx_tmp = this->_objPoint;
HXDLIN( 741)		Float Object1 = Object->x;
HXDLIN( 741)		Float _hx_tmp1 = (Object1 + Object->get_width());
HXDLIN( 741)		_hx_tmp->set_x(( (Float)(::Math_obj::floor((_hx_tmp1 + this->_snapping))) ));
HXLINE( 742)		this->_objPoint->set_y(( (Float)(::Math_obj::ceil(Object->y)) ));
HXLINE( 746)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 747)		this->_slopePoint->set_y((Slope->y + (this->_slopePoint->x - Slope->x)));
HXLINE( 749)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 750)		if (this->checkThinSteep(tileId)) {
HXLINE( 752)			if (((this->_slopePoint->x - Slope->x) <= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 754)				return;
            			}
            			else {
HXLINE( 758)				this->_slopePoint->set_y(((Slope->y - (( (Float)(this->_tileHeight) ) * (1 + (( (Float)(2) ) * ((Slope->x - this->_slopePoint->x) / ( (Float)(this->_tileWidth) )))))) - ( (Float)(this->_snapping) )));
            			}
            		}
            		else {
HXLINE( 761)			if (this->checkThickSteep(tileId)) {
HXLINE( 763)				this->_slopePoint->set_y(((Slope->y + (( (Float)((this->_tileHeight * 2)) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))) - ( (Float)(this->_snapping) )));
            			}
            			else {
HXLINE( 765)				if (this->checkThickGentle(tileId)) {
HXLINE( 767)					this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (((Slope->x - this->_slopePoint->x) + this->_tileWidth) / ( (Float)(2) ))));
            				}
            				else {
HXLINE( 769)					if (this->checkThinGentle(tileId)) {
HXLINE( 771)						this->_slopePoint->set_y((Slope->y + ((((( (Float)(this->_tileHeight) ) - Slope->x) + this->_slopePoint->x) - ( (Float)(this->_tileWidth) )) / ( (Float)(2) ))));
            					}
            				}
            			}
            		}
HXLINE( 775)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 778)		bool _hx_tmp2;
HXDLIN( 778)		bool _hx_tmp3;
HXDLIN( 778)		bool _hx_tmp4;
HXDLIN( 778)		if ((this->_objPoint->x > (Slope->x + this->_snapping))) {
HXLINE( 779)			Float _hx_tmp = this->_objPoint->x;
HXDLIN( 779)			Float _hx_tmp1 = (Slope->x + this->_tileWidth);
HXDLIN( 779)			Float _hx_tmp2 = (_hx_tmp1 + Object->get_width());
HXLINE( 778)			_hx_tmp4 = (_hx_tmp < (_hx_tmp2 + this->_snapping));
            		}
            		else {
HXLINE( 778)			_hx_tmp4 = false;
            		}
HXDLIN( 778)		if (_hx_tmp4) {
HXLINE( 778)			_hx_tmp3 = (this->_objPoint->y <= this->_slopePoint->y);
            		}
            		else {
HXLINE( 778)			_hx_tmp3 = false;
            		}
HXDLIN( 778)		if (_hx_tmp3) {
HXLINE( 778)			_hx_tmp2 = (this->_objPoint->y >= Slope->y);
            		}
            		else {
HXLINE( 778)			_hx_tmp2 = false;
            		}
HXDLIN( 778)		if (_hx_tmp2) {
HXLINE( 784)			this->onCollideCeilSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeSouthwest,(void))

void FlxTilemapExt_obj::solveCollisionSlopeSoutheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_795_solveCollisionSlopeSoutheast)
HXLINE( 797)		this->_objPoint->set_x(( (Float)(::Math_obj::floor((Object->x - ( (Float)(this->_snapping) )))) ));
HXLINE( 798)		this->_objPoint->set_y(( (Float)(::Math_obj::ceil(Object->y)) ));
HXLINE( 802)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 803)		this->_slopePoint->set_y((Slope->y + ((Slope->x - this->_slopePoint->x) + this->_tileWidth)));
HXLINE( 805)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 806)		if (this->checkThinSteep(tileId)) {
HXLINE( 808)			if (((this->_slopePoint->x - Slope->x) >= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 810)				return;
            			}
            			else {
HXLINE( 814)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(1) ) - (( (Float)(2) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))))) - ( (Float)(this->_snapping) )));
            			}
            		}
            		else {
HXLINE( 817)			if (this->checkThickSteep(tileId)) {
HXLINE( 819)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(2) ) - ((( (Float)(2) ) * (this->_slopePoint->x - Slope->x)) / ( (Float)(this->_tileWidth) ))))) - ( (Float)(this->_snapping) )));
            			}
            			else {
HXLINE( 821)				if (this->checkThickGentle(tileId)) {
HXLINE( 823)					this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((this->_slopePoint->x - Slope->x) / ( (Float)(2) ))));
            				}
            				else {
HXLINE( 825)					if (this->checkThinGentle(tileId)) {
HXLINE( 827)						this->_slopePoint->set_y((Slope->y + (((( (Float)(this->_tileHeight) ) - this->_slopePoint->x) + Slope->x) / ( (Float)(2) ))));
            					}
            				}
            			}
            		}
HXLINE( 831)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 834)		bool _hx_tmp;
HXDLIN( 834)		bool _hx_tmp1;
HXDLIN( 834)		bool _hx_tmp2;
HXDLIN( 834)		Float _hx_tmp3 = this->_objPoint->x;
HXDLIN( 834)		Float Slope1 = Slope->x;
HXDLIN( 834)		Float _hx_tmp4 = (Slope1 - Object->get_width());
HXDLIN( 834)		if ((_hx_tmp3 > (_hx_tmp4 - ( (Float)(this->_snapping) )))) {
HXLINE( 834)			_hx_tmp2 = (this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping));
            		}
            		else {
HXLINE( 834)			_hx_tmp2 = false;
            		}
HXDLIN( 834)		if (_hx_tmp2) {
HXLINE( 834)			_hx_tmp1 = (this->_objPoint->y <= this->_slopePoint->y);
            		}
            		else {
HXLINE( 834)			_hx_tmp1 = false;
            		}
HXDLIN( 834)		if (_hx_tmp1) {
HXLINE( 834)			_hx_tmp = (this->_objPoint->y >= Slope->y);
            		}
            		else {
HXLINE( 834)			_hx_tmp = false;
            		}
HXDLIN( 834)		if (_hx_tmp) {
HXLINE( 840)			this->onCollideCeilSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeSoutheast,(void))

void FlxTilemapExt_obj::setSlopeProperties(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_849_setSlopeProperties)
HXLINE( 850)		{
HXLINE( 850)			int _g = 0;
HXDLIN( 850)			::Array< int > _g1 = this->_slopeNorthwest;
HXDLIN( 850)			while((_g < _g1->length)){
HXLINE( 850)				int tile = _g1->__get(_g);
HXDLIN( 850)				_g = (_g + 1);
HXLINE( 852)				this->setTileProperties(tile,(16 | 4096),this->solveCollisionSlopeNorthwest_dyn(),null(),null());
            			}
            		}
HXLINE( 854)		{
HXLINE( 854)			int _g2 = 0;
HXDLIN( 854)			::Array< int > _g3 = this->_slopeNortheast;
HXDLIN( 854)			while((_g2 < _g3->length)){
HXLINE( 854)				int tile = _g3->__get(_g2);
HXDLIN( 854)				_g2 = (_g2 + 1);
HXLINE( 856)				this->setTileProperties(tile,(1 | 4096),this->solveCollisionSlopeNortheast_dyn(),null(),null());
            			}
            		}
HXLINE( 858)		{
HXLINE( 858)			int _g4 = 0;
HXDLIN( 858)			::Array< int > _g5 = this->_slopeSouthwest;
HXDLIN( 858)			while((_g4 < _g5->length)){
HXLINE( 858)				int tile = _g5->__get(_g4);
HXDLIN( 858)				_g4 = (_g4 + 1);
HXLINE( 860)				this->setTileProperties(tile,(16 | 256),this->solveCollisionSlopeSouthwest_dyn(),null(),null());
            			}
            		}
HXLINE( 862)		{
HXLINE( 862)			int _g6 = 0;
HXDLIN( 862)			::Array< int > _g7 = this->_slopeSoutheast;
HXDLIN( 862)			while((_g6 < _g7->length)){
HXLINE( 862)				int tile = _g7->__get(_g6);
HXDLIN( 862)				_g6 = (_g6 + 1);
HXLINE( 864)				this->setTileProperties(tile,(1 | 256),this->solveCollisionSlopeSoutheast_dyn(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapExt_obj,setSlopeProperties,(void))

bool FlxTilemapExt_obj::checkArrays(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_876_checkArrays)
HXDLIN( 876)		bool _hx_tmp;
HXDLIN( 876)		bool _hx_tmp1;
HXDLIN( 876)		if ((this->_slopeNorthwest->indexOf(TileIndex,null()) < 0)) {
HXDLIN( 876)			_hx_tmp1 = (this->_slopeNortheast->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 876)			_hx_tmp1 = true;
            		}
HXDLIN( 876)		if (!(_hx_tmp1)) {
HXDLIN( 876)			_hx_tmp = (this->_slopeSouthwest->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 876)			_hx_tmp = true;
            		}
HXDLIN( 876)		if (!(_hx_tmp)) {
HXLINE( 879)			return (this->_slopeSoutheast->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 876)			return true;
            		}
HXDLIN( 876)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkArrays,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxTilemapExt_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_883_set_frames)
HXLINE( 884)		this->super::set_frames(value);
HXLINE( 886)		bool _hx_tmp;
HXDLIN( 886)		bool _hx_tmp1;
HXDLIN( 886)		if (::hx::IsNotNull( value )) {
HXLINE( 886)			_hx_tmp1 = ::hx::IsNotNull( this->_specialTiles );
            		}
            		else {
HXLINE( 886)			_hx_tmp1 = false;
            		}
HXDLIN( 886)		if (_hx_tmp1) {
HXLINE( 886)			_hx_tmp = (this->_specialTiles->length > 0);
            		}
            		else {
HXLINE( 886)			_hx_tmp = false;
            		}
HXDLIN( 886)		if (_hx_tmp) {
HXLINE( 888)			int _g = 0;
HXDLIN( 888)			::Array< ::Dynamic> _g1 = this->_specialTiles;
HXDLIN( 888)			while((_g < _g1->length)){
HXLINE( 888)				 ::flixel::addons::tile::FlxTileSpecial tile = _g1->__get(_g).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXDLIN( 888)				_g = (_g + 1);
HXLINE( 890)				if (::hx::IsNotNull( tile )) {
HXLINE( 892)					tile->set_frames(this->frames);
            				}
            			}
            		}
HXLINE( 897)		return value;
            	}



::hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__new() {
	::hx::ObjectPtr< FlxTilemapExt_obj > __this = new FlxTilemapExt_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTilemapExt_obj *__this = (FlxTilemapExt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemapExt_obj), true, "flixel.addons.tile.FlxTilemapExt"));
	*(void **)__this = FlxTilemapExt_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTilemapExt_obj::FlxTilemapExt_obj()
{
}

void FlxTilemapExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapExt);
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_MARK_MEMBER_NAME(_objPoint,"_objPoint");
	HX_MARK_MEMBER_NAME(_downwardsGlue,"_downwardsGlue");
	HX_MARK_MEMBER_NAME(_velocityYDownSlope,"_velocityYDownSlope");
	HX_MARK_MEMBER_NAME(_slopeSlowDownFactor,"_slopeSlowDownFactor");
	HX_MARK_MEMBER_NAME(_slopeNorthwest,"_slopeNorthwest");
	HX_MARK_MEMBER_NAME(_slopeNortheast,"_slopeNortheast");
	HX_MARK_MEMBER_NAME(_slopeSouthwest,"_slopeSouthwest");
	HX_MARK_MEMBER_NAME(_slopeSoutheast,"_slopeSoutheast");
	HX_MARK_MEMBER_NAME(_slopeThickGentle,"_slopeThickGentle");
	HX_MARK_MEMBER_NAME(_slopeThinGentle,"_slopeThinGentle");
	HX_MARK_MEMBER_NAME(_slopeThickSteep,"_slopeThickSteep");
	HX_MARK_MEMBER_NAME(_slopeThinSteep,"_slopeThinSteep");
	HX_MARK_MEMBER_NAME(_specialTiles,"_specialTiles");
	 ::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemapExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_VISIT_MEMBER_NAME(_objPoint,"_objPoint");
	HX_VISIT_MEMBER_NAME(_downwardsGlue,"_downwardsGlue");
	HX_VISIT_MEMBER_NAME(_velocityYDownSlope,"_velocityYDownSlope");
	HX_VISIT_MEMBER_NAME(_slopeSlowDownFactor,"_slopeSlowDownFactor");
	HX_VISIT_MEMBER_NAME(_slopeNorthwest,"_slopeNorthwest");
	HX_VISIT_MEMBER_NAME(_slopeNortheast,"_slopeNortheast");
	HX_VISIT_MEMBER_NAME(_slopeSouthwest,"_slopeSouthwest");
	HX_VISIT_MEMBER_NAME(_slopeSoutheast,"_slopeSoutheast");
	HX_VISIT_MEMBER_NAME(_slopeThickGentle,"_slopeThickGentle");
	HX_VISIT_MEMBER_NAME(_slopeThinGentle,"_slopeThinGentle");
	HX_VISIT_MEMBER_NAME(_slopeThickSteep,"_slopeThickSteep");
	HX_VISIT_MEMBER_NAME(_slopeThinSteep,"_slopeThinSteep");
	HX_VISIT_MEMBER_NAME(_specialTiles,"_specialTiles");
	 ::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTilemapExt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSteep") ) { return ::hx::Val( setSteep_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_snapping") ) { return ::hx::Val( _snapping ); }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { return ::hx::Val( _objPoint ); }
		if (HX_FIELD_EQ(inName,"setSlopes") ) { return ::hx::Val( setSlopes_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGentle") ) { return ::hx::Val( setGentle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { return ::hx::Val( _slopePoint ); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return ::hx::Val( drawTilemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkArrays") ) { return ::hx::Val( checkArrays_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { return ::hx::Val( _specialTiles ); }
		if (HX_FIELD_EQ(inName,"fixSlopePoint") ) { return ::hx::Val( fixSlopePoint_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_downwardsGlue") ) { return ::hx::Val( _downwardsGlue ); }
		if (HX_FIELD_EQ(inName,"checkThinSteep") ) { return ::hx::Val( checkThinSteep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_slopeNorthwest") ) { return ::hx::Val( _slopeNorthwest ); }
		if (HX_FIELD_EQ(inName,"_slopeNortheast") ) { return ::hx::Val( _slopeNortheast ); }
		if (HX_FIELD_EQ(inName,"_slopeSouthwest") ) { return ::hx::Val( _slopeSouthwest ); }
		if (HX_FIELD_EQ(inName,"_slopeSoutheast") ) { return ::hx::Val( _slopeSoutheast ); }
		if (HX_FIELD_EQ(inName,"_slopeThinSteep") ) { return ::hx::Val( _slopeThinSteep ); }
		if (HX_FIELD_EQ(inName,"setSpecialTiles") ) { return ::hx::Val( setSpecialTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThinGentle") ) { return ::hx::Val( checkThinGentle_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThickSteep") ) { return ::hx::Val( checkThickSteep_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeThinGentle") ) { return ::hx::Val( _slopeThinGentle ); }
		if (HX_FIELD_EQ(inName,"_slopeThickSteep") ) { return ::hx::Val( _slopeThickSteep ); }
		if (HX_FIELD_EQ(inName,"setDownwardsGlue") ) { return ::hx::Val( setDownwardsGlue_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThickGentle") ) { return ::hx::Val( checkThickGentle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_slopeThickGentle") ) { return ::hx::Val( _slopeThickGentle ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onCollideCeilSlope") ) { return ::hx::Val( onCollideCeilSlope_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSlopeProperties") ) { return ::hx::Val( setSlopeProperties_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_velocityYDownSlope") ) { return ::hx::Val( _velocityYDownSlope ); }
		if (HX_FIELD_EQ(inName,"onCollideFloorSlope") ) { return ::hx::Val( onCollideFloorSlope_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_slopeSlowDownFactor") ) { return ::hx::Val( _slopeSlowDownFactor ); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeNorthwest") ) { return ::hx::Val( solveCollisionSlopeNorthwest_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeNortheast") ) { return ::hx::Val( solveCollisionSlopeNortheast_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeSouthwest") ) { return ::hx::Val( solveCollisionSlopeSouthwest_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeSoutheast") ) { return ::hx::Val( solveCollisionSlopeSoutheast_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemapExt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { _objPoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { _slopePoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { _specialTiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_downwardsGlue") ) { _downwardsGlue=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_slopeNorthwest") ) { _slopeNorthwest=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeNortheast") ) { _slopeNortheast=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeSouthwest") ) { _slopeSouthwest=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeSoutheast") ) { _slopeSoutheast=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeThinSteep") ) { _slopeThinSteep=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeThinGentle") ) { _slopeThinGentle=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeThickSteep") ) { _slopeThickSteep=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_slopeThickGentle") ) { _slopeThickGentle=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_velocityYDownSlope") ) { _velocityYDownSlope=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_slopeSlowDownFactor") ) { _slopeSlowDownFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_snapping",1b,2d,4f,67));
	outFields->push(HX_("_slopePoint",44,f8,e1,eb));
	outFields->push(HX_("_objPoint",38,4c,3e,bb));
	outFields->push(HX_("_downwardsGlue",ab,15,d0,27));
	outFields->push(HX_("_velocityYDownSlope",4c,ea,f9,4e));
	outFields->push(HX_("_slopeSlowDownFactor",be,e5,ff,c6));
	outFields->push(HX_("_slopeNorthwest",68,65,26,14));
	outFields->push(HX_("_slopeNortheast",36,85,3d,08));
	outFields->push(HX_("_slopeSouthwest",b0,d6,9d,af));
	outFields->push(HX_("_slopeSoutheast",7e,f6,b4,a3));
	outFields->push(HX_("_slopeThickGentle",8e,e6,40,0b));
	outFields->push(HX_("_slopeThinGentle",22,c8,46,c5));
	outFields->push(HX_("_slopeThickSteep",fe,19,69,07));
	outFields->push(HX_("_slopeThinSteep",ea,86,a2,7f));
	outFields->push(HX_("_specialTiles",6b,d7,b8,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemapExt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxTilemapExt_obj,_snapping),HX_("_snapping",1b,2d,4f,67)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemapExt_obj,_slopePoint),HX_("_slopePoint",44,f8,e1,eb)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemapExt_obj,_objPoint),HX_("_objPoint",38,4c,3e,bb)},
	{::hx::fsBool,(int)offsetof(FlxTilemapExt_obj,_downwardsGlue),HX_("_downwardsGlue",ab,15,d0,27)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapExt_obj,_velocityYDownSlope),HX_("_velocityYDownSlope",4c,ea,f9,4e)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapExt_obj,_slopeSlowDownFactor),HX_("_slopeSlowDownFactor",be,e5,ff,c6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeNorthwest),HX_("_slopeNorthwest",68,65,26,14)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeNortheast),HX_("_slopeNortheast",36,85,3d,08)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeSouthwest),HX_("_slopeSouthwest",b0,d6,9d,af)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeSoutheast),HX_("_slopeSoutheast",7e,f6,b4,a3)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThickGentle),HX_("_slopeThickGentle",8e,e6,40,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThinGentle),HX_("_slopeThinGentle",22,c8,46,c5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThickSteep),HX_("_slopeThickSteep",fe,19,69,07)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThinSteep),HX_("_slopeThinSteep",ea,86,a2,7f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTilemapExt_obj,_specialTiles),HX_("_specialTiles",6b,d7,b8,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemapExt_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapExt_obj_sMemberFields[] = {
	HX_("_snapping",1b,2d,4f,67),
	HX_("_slopePoint",44,f8,e1,eb),
	HX_("_objPoint",38,4c,3e,bb),
	HX_("_downwardsGlue",ab,15,d0,27),
	HX_("_velocityYDownSlope",4c,ea,f9,4e),
	HX_("_slopeSlowDownFactor",be,e5,ff,c6),
	HX_("_slopeNorthwest",68,65,26,14),
	HX_("_slopeNortheast",36,85,3d,08),
	HX_("_slopeSouthwest",b0,d6,9d,af),
	HX_("_slopeSoutheast",7e,f6,b4,a3),
	HX_("_slopeThickGentle",8e,e6,40,0b),
	HX_("_slopeThinGentle",22,c8,46,c5),
	HX_("_slopeThickSteep",fe,19,69,07),
	HX_("_slopeThinSteep",ea,86,a2,7f),
	HX_("_specialTiles",6b,d7,b8,46),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("drawTilemap",8a,34,d7,8e),
	HX_("setSpecialTiles",4e,17,00,83),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("setDownwardsGlue",68,bc,e0,a9),
	HX_("setSlopes",2a,9e,ac,d3),
	HX_("setGentle",9f,12,f0,fe),
	HX_("setSteep",0d,db,42,92),
	HX_("checkThickGentle",b2,d7,c5,10),
	HX_("checkThinGentle",7e,47,f1,74),
	HX_("checkThickSteep",5a,99,13,b7),
	HX_("checkThinSteep",0e,27,64,59),
	HX_("fixSlopePoint",5a,6d,81,3a),
	HX_("onCollideFloorSlope",be,60,9b,e6),
	HX_("onCollideCeilSlope",c7,17,d1,c7),
	HX_("solveCollisionSlopeNorthwest",1c,b5,a5,09),
	HX_("solveCollisionSlopeNortheast",ea,d4,bc,fd),
	HX_("solveCollisionSlopeSouthwest",64,26,1d,a5),
	HX_("solveCollisionSlopeSoutheast",32,46,34,99),
	HX_("setSlopeProperties",7c,73,53,cf),
	HX_("checkArrays",a2,4b,02,9a),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

::hx::Class FlxTilemapExt_obj::__mClass;

void FlxTilemapExt_obj::__register()
{
	FlxTilemapExt_obj _hx_dummy;
	FlxTilemapExt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.tile.FlxTilemapExt",ce,82,6d,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemapExt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemapExt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapExt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapExt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
