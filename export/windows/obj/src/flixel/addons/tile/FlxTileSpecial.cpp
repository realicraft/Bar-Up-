#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#include <flixel/addons/tile/FlxTileSpecial.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_813c730f1cce36dc_16_new,"flixel.addons.tile.FlxTileSpecial","new",0x87a80782,"flixel.addons.tile.FlxTileSpecial.new","flixel/addons/tile/FlxTileSpecial.hx",16,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_61_destroy,"flixel.addons.tile.FlxTileSpecial","destroy",0x83619d1c,"flixel.addons.tile.FlxTileSpecial.destroy","flixel/addons/tile/FlxTileSpecial.hx",61,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_75_update,"flixel.addons.tile.FlxTileSpecial","update",0xbd66f027,"flixel.addons.tile.FlxTileSpecial.update","flixel/addons/tile/FlxTileSpecial.hx",75,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_116_isSpecial,"flixel.addons.tile.FlxTileSpecial","isSpecial",0x44053411,"flixel.addons.tile.FlxTileSpecial.isSpecial","flixel/addons/tile/FlxTileSpecial.hx",116,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_121_isFlipped,"flixel.addons.tile.FlxTileSpecial","isFlipped",0xe438261a,"flixel.addons.tile.FlxTileSpecial.isFlipped","flixel/addons/tile/FlxTileSpecial.hx",121,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_126_hasAnimation,"flixel.addons.tile.FlxTileSpecial","hasAnimation",0x5057a8e8,"flixel.addons.tile.FlxTileSpecial.hasAnimation","flixel/addons/tile/FlxTileSpecial.hx",126,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_130_paint,"flixel.addons.tile.FlxTileSpecial","paint",0xeb787b40,"flixel.addons.tile.FlxTileSpecial.paint","flixel/addons/tile/FlxTileSpecial.hx",130,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_165_addAnimation,"flixel.addons.tile.FlxTileSpecial","addAnimation",0xc259e541,"flixel.addons.tile.FlxTileSpecial.addAnimation","flixel/addons/tile/FlxTileSpecial.hx",165,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_174_fromSpriteAnimation,"flixel.addons.tile.FlxTileSpecial","fromSpriteAnimation",0xb09aef17,"flixel.addons.tile.FlxTileSpecial.fromSpriteAnimation","flixel/addons/tile/FlxTileSpecial.hx",174,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_184_getMatrix,"flixel.addons.tile.FlxTileSpecial","getMatrix",0x98cffc19,"flixel.addons.tile.FlxTileSpecial.getMatrix","flixel/addons/tile/FlxTileSpecial.hx",184,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_212_set_frames,"flixel.addons.tile.FlxTileSpecial","set_frames",0xdaee8f01,"flixel.addons.tile.FlxTileSpecial.set_frames","flixel/addons/tile/FlxTileSpecial.hx",212,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_224_set_currTileId,"flixel.addons.tile.FlxTileSpecial","set_currTileId",0x581f5c16,"flixel.addons.tile.FlxTileSpecial.set_currTileId","flixel/addons/tile/FlxTileSpecial.hx",224,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_18_boot,"flixel.addons.tile.FlxTileSpecial","boot",0x23778ad0,"flixel.addons.tile.FlxTileSpecial.boot","flixel/addons/tile/FlxTileSpecial.hx",18,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_19_boot,"flixel.addons.tile.FlxTileSpecial","boot",0x23778ad0,"flixel.addons.tile.FlxTileSpecial.boot","flixel/addons/tile/FlxTileSpecial.hx",19,0x5033d72d)
HX_LOCAL_STACK_FRAME(_hx_pos_813c730f1cce36dc_20_boot,"flixel.addons.tile.FlxTileSpecial","boot",0x23778ad0,"flixel.addons.tile.FlxTileSpecial.boot","flixel/addons/tile/FlxTileSpecial.hx",20,0x5033d72d)
namespace flixel{
namespace addons{
namespace tile{

void FlxTileSpecial_obj::__construct(int TilesetId,bool FlipX,bool FlipY,int Rotate){
            	HX_GC_STACKFRAME(&_hx_pos_813c730f1cce36dc_16_new)
HXLINE(  46)		this->dirty = true;
HXLINE(  44)		this->_frameTimer = ((Float)0.0);
HXLINE(  42)		this->_lastIndex = -1;
HXLINE(  41)		this->_currIndex = 0;
HXLINE(  29)		this->currTileId = 0;
HXLINE(  23)		this->flipY = false;
HXLINE(  22)		this->flipX = false;
HXLINE(  50)		super::__construct();
HXLINE(  52)		this->set_currTileId(TilesetId);
HXLINE(  53)		this->flipX = FlipX;
HXLINE(  54)		this->flipY = FlipY;
HXLINE(  55)		this->rotate = Rotate;
HXLINE(  57)		this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}

Dynamic FlxTileSpecial_obj::__CreateEmpty() { return new FlxTileSpecial_obj; }

void *FlxTileSpecial_obj::_hx_vtable = 0;

Dynamic FlxTileSpecial_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTileSpecial_obj > _hx_result = new FlxTileSpecial_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxTileSpecial_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4b129836) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4b129836;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTileSpecial_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_61_destroy)
HXLINE(  62)		this->super::destroy();
HXLINE(  64)		this->animation = ( ( ::flixel::addons::tile::FlxTileAnimation)(::flixel::util::FlxDestroyUtil_obj::destroy(this->animation)) );
HXLINE(  65)		this->_currAnimParam = null();
HXLINE(  66)		this->_matrix = null();
HXLINE(  68)		this->currFrame = null();
HXLINE(  69)		this->set_frames(null());
            	}


void FlxTileSpecial_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_75_update)
HXLINE(  76)		this->super::update(elapsed);
HXLINE(  77)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  79)			this->dirty = false;
            		}
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( this->animation )) {
HXLINE(  82)			_hx_tmp = (this->animation->delay > 0);
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  84)			 ::flixel::addons::tile::FlxTileSpecial _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)			_hx_tmp->_frameTimer = (_hx_tmp->_frameTimer + elapsed);
HXLINE(  85)			if ((this->_frameTimer > this->animation->delay)) {
HXLINE(  87)				this->_lastIndex = this->_currIndex;
            			}
HXLINE(  89)			while((this->_frameTimer > this->animation->delay)){
HXLINE(  91)				this->_frameTimer = (this->_frameTimer - this->animation->delay);
HXLINE(  92)				if ((this->_currIndex >= (this->animation->frames->length - 1))) {
HXLINE(  94)					this->_currIndex = 0;
            				}
            				else {
HXLINE(  98)					this->_currIndex++;
            				}
            			}
HXLINE( 101)			this->set_currTileId(this->animation->frames->__get(this->_currIndex));
HXLINE( 102)			if (::hx::IsNotNull( this->animation->framesData )) {
HXLINE( 104)				this->_currAnimParam = this->animation->framesData->__get(this->_currIndex);
            			}
HXLINE( 107)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 109)				this->dirty = (this->_currIndex != this->_lastIndex);
            			}
            		}
            	}


bool FlxTileSpecial_obj::isSpecial(){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_116_isSpecial)
HXDLIN( 116)		bool _hx_tmp;
HXDLIN( 116)		bool _hx_tmp1;
HXDLIN( 116)		if (!(this->flipX)) {
HXDLIN( 116)			_hx_tmp1 = this->flipY;
            		}
            		else {
HXDLIN( 116)			_hx_tmp1 = true;
            		}
HXDLIN( 116)		if (!(_hx_tmp1)) {
HXDLIN( 116)			_hx_tmp = (this->rotate != 0);
            		}
            		else {
HXDLIN( 116)			_hx_tmp = true;
            		}
HXDLIN( 116)		if (!(_hx_tmp)) {
HXDLIN( 116)			return ::hx::IsNotNull( this->animation );
            		}
            		else {
HXDLIN( 116)			return true;
            		}
HXDLIN( 116)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,isSpecial,return )

bool FlxTileSpecial_obj::isFlipped(){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_121_isFlipped)
HXDLIN( 121)		bool _hx_tmp;
HXDLIN( 121)		if (!(this->flipX)) {
HXDLIN( 121)			_hx_tmp = this->flipY;
            		}
            		else {
HXDLIN( 121)			_hx_tmp = true;
            		}
HXDLIN( 121)		if (!(_hx_tmp)) {
HXDLIN( 121)			return (this->rotate != 0);
            		}
            		else {
HXDLIN( 121)			return true;
            		}
HXDLIN( 121)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,isFlipped,return )

bool FlxTileSpecial_obj::hasAnimation(){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_126_hasAnimation)
HXDLIN( 126)		return ::hx::IsNotNull( this->animation );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,hasAnimation,return )

void FlxTileSpecial_obj::paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point at){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_130_paint)
HXLINE( 131)		if (!(::flixel::FlxG_obj::renderBlit)) {
HXLINE( 132)			return;
            		}
HXLINE( 134)		this->_tmp_flipH = this->flipX;
HXLINE( 135)		this->_tmp_flipV = this->flipY;
HXLINE( 136)		this->_tmp_rot = this->rotate;
HXLINE( 138)		if (::hx::IsNotNull( this->_currAnimParam )) {
HXLINE( 140)			this->_tmp_flipH = ( (bool)(this->_currAnimParam->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic)) );
HXLINE( 141)			this->_tmp_flipV = ( (bool)(this->_currAnimParam->__Field(HX_("flipY",0c,45,92,02),::hx::paccDynamic)) );
HXLINE( 142)			this->_tmp_rot = ( (int)(this->_currAnimParam->__Field(HX_("rotate",5b,46,20,cb),::hx::paccDynamic)) );
            		}
HXLINE( 145)		int rotation = 0;
HXLINE( 146)		if ((this->_tmp_rot == 1)) {
HXLINE( 148)			rotation = 90;
            		}
            		else {
HXLINE( 150)			if ((this->_tmp_rot == 2)) {
HXLINE( 152)				rotation = -90;
            			}
            		}
HXLINE( 155)		this->currFrame->paintRotatedAndFlipped(bmd,at,rotation,this->_tmp_flipH,this->_tmp_flipV,true,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileSpecial_obj,paint,(void))

void FlxTileSpecial_obj::addAnimation(::Array< int > tiles,::hx::Null< Float >  __o_frameRate,::Array< ::Dynamic> framesData){
            		Float frameRate = __o_frameRate.Default(30);
            	HX_GC_STACKFRAME(&_hx_pos_813c730f1cce36dc_165_addAnimation)
HXDLIN( 165)		this->animation =  ::flixel::addons::tile::FlxTileAnimation_obj::__alloc( HX_CTX ,HX_("tileAnim",5f,ac,77,7a),tiles,frameRate,true,framesData);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTileSpecial_obj,addAnimation,(void))

void FlxTileSpecial_obj::fromSpriteAnimation( ::flixel::animation::FlxAnimation anim){
            	HX_GC_STACKFRAME(&_hx_pos_813c730f1cce36dc_174_fromSpriteAnimation)
HXDLIN( 174)		::String anim1 = anim->name;
HXDLIN( 174)		 ::Dynamic _hx_tmp = ::Reflect_obj::field(anim,HX_("_frames",45,c1,fc,1a));
HXDLIN( 174)		this->animation =  ::flixel::addons::tile::FlxTileAnimation_obj::__alloc( HX_CTX ,anim1,( (::Array< int >)(_hx_tmp) ),anim->frameRate,anim->looped,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTileSpecial_obj,fromSpriteAnimation,(void))

 ::flixel::math::FlxMatrix FlxTileSpecial_obj::getMatrix(){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_184_getMatrix)
HXLINE( 185)		this->_tmp_flipH = this->flipX;
HXLINE( 186)		this->_tmp_flipV = this->flipY;
HXLINE( 187)		this->_tmp_rot = this->rotate;
HXLINE( 189)		if (::hx::IsNotNull( this->_currAnimParam )) {
HXLINE( 191)			this->_tmp_flipH = ( (bool)(this->_currAnimParam->__Field(HX_("flipX",0b,45,92,02),::hx::paccDynamic)) );
HXLINE( 192)			this->_tmp_flipV = ( (bool)(this->_currAnimParam->__Field(HX_("flipY",0c,45,92,02),::hx::paccDynamic)) );
HXLINE( 193)			this->_tmp_rot = ( (int)(this->_currAnimParam->__Field(HX_("rotate",5b,46,20,cb),::hx::paccDynamic)) );
            		}
HXLINE( 196)		int rotation = 0;
HXLINE( 197)		if ((this->_tmp_rot == 1)) {
HXLINE( 199)			rotation = 90;
            		}
            		else {
HXLINE( 201)			if ((this->_tmp_rot == 2)) {
HXLINE( 203)				rotation = -90;
            			}
            		}
HXLINE( 206)		this->currFrame->prepareMatrix(this->_matrix,rotation,this->_tmp_flipH,this->_tmp_flipV);
HXLINE( 208)		return this->_matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileSpecial_obj,getMatrix,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxTileSpecial_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_212_set_frames)
HXLINE( 213)		this->frames = value;
HXLINE( 215)		if (::hx::IsNotNull( value )) {
HXLINE( 217)			this->currFrame = this->frames->frames->__get(this->currTileId).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 220)		return this->frames;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTileSpecial_obj,set_frames,return )

int FlxTileSpecial_obj::set_currTileId(int value){
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_224_set_currTileId)
HXLINE( 225)		if (::hx::IsNotNull( this->frames )) {
HXLINE( 227)			this->currFrame = this->frames->frames->__get(value).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 230)		return (this->currTileId = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTileSpecial_obj,set_currTileId,return )

int FlxTileSpecial_obj::ROTATE_0;

int FlxTileSpecial_obj::ROTATE_90;

int FlxTileSpecial_obj::ROTATE_270;


::hx::ObjectPtr< FlxTileSpecial_obj > FlxTileSpecial_obj::__new(int TilesetId,bool FlipX,bool FlipY,int Rotate) {
	::hx::ObjectPtr< FlxTileSpecial_obj > __this = new FlxTileSpecial_obj();
	__this->__construct(TilesetId,FlipX,FlipY,Rotate);
	return __this;
}

::hx::ObjectPtr< FlxTileSpecial_obj > FlxTileSpecial_obj::__alloc(::hx::Ctx *_hx_ctx,int TilesetId,bool FlipX,bool FlipY,int Rotate) {
	FlxTileSpecial_obj *__this = (FlxTileSpecial_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTileSpecial_obj), true, "flixel.addons.tile.FlxTileSpecial"));
	*(void **)__this = FlxTileSpecial_obj::_hx_vtable;
	__this->__construct(TilesetId,FlipX,FlipY,Rotate);
	return __this;
}

FlxTileSpecial_obj::FlxTileSpecial_obj()
{
}

void FlxTileSpecial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileSpecial);
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(currTileId,"currTileId");
	HX_MARK_MEMBER_NAME(currFrame,"currFrame");
	HX_MARK_MEMBER_NAME(_tmp_flipH,"_tmp_flipH");
	HX_MARK_MEMBER_NAME(_tmp_flipV,"_tmp_flipV");
	HX_MARK_MEMBER_NAME(_tmp_rot,"_tmp_rot");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(_currIndex,"_currIndex");
	HX_MARK_MEMBER_NAME(_lastIndex,"_lastIndex");
	HX_MARK_MEMBER_NAME(_currAnimParam,"_currAnimParam");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileSpecial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(currTileId,"currTileId");
	HX_VISIT_MEMBER_NAME(currFrame,"currFrame");
	HX_VISIT_MEMBER_NAME(_tmp_flipH,"_tmp_flipH");
	HX_VISIT_MEMBER_NAME(_tmp_flipV,"_tmp_flipV");
	HX_VISIT_MEMBER_NAME(_tmp_rot,"_tmp_rot");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(_currIndex,"_currIndex");
	HX_VISIT_MEMBER_NAME(_lastIndex,"_lastIndex");
	HX_VISIT_MEMBER_NAME(_currAnimParam,"_currAnimParam");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTileSpecial_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"paint") ) { return ::hx::Val( paint_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tmp_rot") ) { return ::hx::Val( _tmp_rot ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { return ::hx::Val( currFrame ); }
		if (HX_FIELD_EQ(inName,"animation") ) { return ::hx::Val( animation ); }
		if (HX_FIELD_EQ(inName,"isSpecial") ) { return ::hx::Val( isSpecial_dyn() ); }
		if (HX_FIELD_EQ(inName,"isFlipped") ) { return ::hx::Val( isFlipped_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return ::hx::Val( getMatrix_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currTileId") ) { return ::hx::Val( currTileId ); }
		if (HX_FIELD_EQ(inName,"_tmp_flipH") ) { return ::hx::Val( _tmp_flipH ); }
		if (HX_FIELD_EQ(inName,"_tmp_flipV") ) { return ::hx::Val( _tmp_flipV ); }
		if (HX_FIELD_EQ(inName,"_currIndex") ) { return ::hx::Val( _currIndex ); }
		if (HX_FIELD_EQ(inName,"_lastIndex") ) { return ::hx::Val( _lastIndex ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return ::hx::Val( _frameTimer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasAnimation") ) { return ::hx::Val( hasAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return ::hx::Val( addAnimation_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currAnimParam") ) { return ::hx::Val( _currAnimParam ); }
		if (HX_FIELD_EQ(inName,"set_currTileId") ) { return ::hx::Val( set_currTileId_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromSpriteAnimation") ) { return ::hx::Val( fromSpriteAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTileSpecial_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tmp_rot") ) { _tmp_rot=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { currFrame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::flixel::addons::tile::FlxTileAnimation >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currTileId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currTileId(inValue.Cast< int >()) );currTileId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tmp_flipH") ) { _tmp_flipH=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tmp_flipV") ) { _tmp_flipV=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currIndex") ) { _currIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastIndex") ) { _lastIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currAnimParam") ) { _currAnimParam=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileSpecial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("rotate",5b,46,20,cb));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("currTileId",3b,33,e4,14));
	outFields->push(HX_("currFrame",db,af,58,6a));
	outFields->push(HX_("_tmp_flipH",14,28,5e,7b));
	outFields->push(HX_("_tmp_flipV",22,28,5e,7b));
	outFields->push(HX_("_tmp_rot",f0,9c,5b,62));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("_currIndex",81,4e,8c,7d));
	outFields->push(HX_("_lastIndex",9d,44,64,66));
	outFields->push(HX_("_currAnimParam",ab,63,24,5f));
	outFields->push(HX_("_frameTimer",77,c1,e5,c5));
	outFields->push(HX_("dirty",12,50,d0,d9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTileSpecial_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxTileSpecial_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxTileSpecial_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsInt,(int)offsetof(FlxTileSpecial_obj,rotate),HX_("rotate",5b,46,20,cb)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxTileSpecial_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsInt,(int)offsetof(FlxTileSpecial_obj,currTileId),HX_("currTileId",3b,33,e4,14)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxTileSpecial_obj,currFrame),HX_("currFrame",db,af,58,6a)},
	{::hx::fsBool,(int)offsetof(FlxTileSpecial_obj,_tmp_flipH),HX_("_tmp_flipH",14,28,5e,7b)},
	{::hx::fsBool,(int)offsetof(FlxTileSpecial_obj,_tmp_flipV),HX_("_tmp_flipV",22,28,5e,7b)},
	{::hx::fsInt,(int)offsetof(FlxTileSpecial_obj,_tmp_rot),HX_("_tmp_rot",f0,9c,5b,62)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxTileSpecial_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::addons::tile::FlxTileAnimation */ ,(int)offsetof(FlxTileSpecial_obj,animation),HX_("animation",04,ef,34,4b)},
	{::hx::fsInt,(int)offsetof(FlxTileSpecial_obj,_currIndex),HX_("_currIndex",81,4e,8c,7d)},
	{::hx::fsInt,(int)offsetof(FlxTileSpecial_obj,_lastIndex),HX_("_lastIndex",9d,44,64,66)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTileSpecial_obj,_currAnimParam),HX_("_currAnimParam",ab,63,24,5f)},
	{::hx::fsFloat,(int)offsetof(FlxTileSpecial_obj,_frameTimer),HX_("_frameTimer",77,c1,e5,c5)},
	{::hx::fsBool,(int)offsetof(FlxTileSpecial_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTileSpecial_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxTileSpecial_obj::ROTATE_0,HX_("ROTATE_0",0c,d2,08,62)},
	{::hx::fsInt,(void *) &FlxTileSpecial_obj::ROTATE_90,HX_("ROTATE_90",7b,00,af,65)},
	{::hx::fsInt,(void *) &FlxTileSpecial_obj::ROTATE_270,HX_("ROTATE_270",a7,21,6c,93)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTileSpecial_obj_sMemberFields[] = {
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("rotate",5b,46,20,cb),
	HX_("frames",a6,af,85,ac),
	HX_("currTileId",3b,33,e4,14),
	HX_("currFrame",db,af,58,6a),
	HX_("_tmp_flipH",14,28,5e,7b),
	HX_("_tmp_flipV",22,28,5e,7b),
	HX_("_tmp_rot",f0,9c,5b,62),
	HX_("_matrix",e0,47,3f,2a),
	HX_("animation",04,ef,34,4b),
	HX_("_currIndex",81,4e,8c,7d),
	HX_("_lastIndex",9d,44,64,66),
	HX_("_currAnimParam",ab,63,24,5f),
	HX_("_frameTimer",77,c1,e5,c5),
	HX_("dirty",12,50,d0,d9),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("isSpecial",6f,f7,53,e3),
	HX_("isFlipped",78,e9,86,83),
	HX_("hasAnimation",4a,d4,86,d8),
	HX_("paint",9e,b7,4e,bd),
	HX_("addAnimation",a3,10,89,4a),
	HX_("fromSpriteAnimation",f5,d3,c6,7a),
	HX_("getMatrix",77,bf,1e,38),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("set_currTileId",f8,a3,f9,aa),
	::String(null()) };

static void FlxTileSpecial_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_0,"ROTATE_0");
	HX_MARK_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_90,"ROTATE_90");
	HX_MARK_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_270,"ROTATE_270");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTileSpecial_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_0,"ROTATE_0");
	HX_VISIT_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_90,"ROTATE_90");
	HX_VISIT_MEMBER_NAME(FlxTileSpecial_obj::ROTATE_270,"ROTATE_270");
};

#endif

::hx::Class FlxTileSpecial_obj::__mClass;

static ::String FlxTileSpecial_obj_sStaticFields[] = {
	HX_("ROTATE_0",0c,d2,08,62),
	HX_("ROTATE_90",7b,00,af,65),
	HX_("ROTATE_270",a7,21,6c,93),
	::String(null())
};

void FlxTileSpecial_obj::__register()
{
	FlxTileSpecial_obj _hx_dummy;
	FlxTileSpecial_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.tile.FlxTileSpecial",90,de,f1,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTileSpecial_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTileSpecial_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTileSpecial_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTileSpecial_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTileSpecial_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTileSpecial_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTileSpecial_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTileSpecial_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_18_boot)
HXDLIN(  18)		ROTATE_0 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_19_boot)
HXDLIN(  19)		ROTATE_90 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_813c730f1cce36dc_20_boot)
HXDLIN(  20)		ROTATE_270 = 2;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
