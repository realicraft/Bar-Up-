#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_Context3DState
#include <openfl/display3D/_internal/Context3DState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_RenderEvent
#include <openfl/events/RenderEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a81acb3bead7383_60_new,"openfl.display.DisplayObjectRenderer","new",0x2db5f24c,"openfl.display.DisplayObjectRenderer.new","openfl/display/DisplayObjectRenderer.hx",60,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_68___clear,"openfl.display.DisplayObjectRenderer","__clear",0x54d15259,"openfl.display.DisplayObjectRenderer.__clear","openfl/display/DisplayObjectRenderer.hx",68,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_72___getAlpha,"openfl.display.DisplayObjectRenderer","__getAlpha",0x82bb5d9c,"openfl.display.DisplayObjectRenderer.__getAlpha","openfl/display/DisplayObjectRenderer.hx",72,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_77___getColorTransform,"openfl.display.DisplayObjectRenderer","__getColorTransform",0x8add698b,"openfl.display.DisplayObjectRenderer.__getColorTransform","openfl/display/DisplayObjectRenderer.hx",77,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_89___popMask,"openfl.display.DisplayObjectRenderer","__popMask",0xc15a12e9,"openfl.display.DisplayObjectRenderer.__popMask","openfl/display/DisplayObjectRenderer.hx",89,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_91___popMaskObject,"openfl.display.DisplayObjectRenderer","__popMaskObject",0xe6109a88,"openfl.display.DisplayObjectRenderer.__popMaskObject","openfl/display/DisplayObjectRenderer.hx",91,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_93___popMaskRect,"openfl.display.DisplayObjectRenderer","__popMaskRect",0x0ba8b4ad,"openfl.display.DisplayObjectRenderer.__popMaskRect","openfl/display/DisplayObjectRenderer.hx",93,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_95___pushMask,"openfl.display.DisplayObjectRenderer","__pushMask",0x18951a9a,"openfl.display.DisplayObjectRenderer.__pushMask","openfl/display/DisplayObjectRenderer.hx",95,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_97___pushMaskObject,"openfl.display.DisplayObjectRenderer","__pushMaskObject",0xb221fcf9,"openfl.display.DisplayObjectRenderer.__pushMaskObject","openfl/display/DisplayObjectRenderer.hx",97,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_99___pushMaskRect,"openfl.display.DisplayObjectRenderer","__pushMaskRect",0xd45fe8de,"openfl.display.DisplayObjectRenderer.__pushMaskRect","openfl/display/DisplayObjectRenderer.hx",99,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_101___render,"openfl.display.DisplayObjectRenderer","__render",0xdfd83d0a,"openfl.display.DisplayObjectRenderer.__render","openfl/display/DisplayObjectRenderer.hx",101,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_104___renderEvent,"openfl.display.DisplayObjectRenderer","__renderEvent",0x7eae76b0,"openfl.display.DisplayObjectRenderer.__renderEvent","openfl/display/DisplayObjectRenderer.hx",104,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_161___resize,"openfl.display.DisplayObjectRenderer","__resize",0xe32a2ba8,"openfl.display.DisplayObjectRenderer.__resize","openfl/display/DisplayObjectRenderer.hx",161,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_163___setBlendMode,"openfl.display.DisplayObjectRenderer","__setBlendMode",0x84c0b506,"openfl.display.DisplayObjectRenderer.__setBlendMode","openfl/display/DisplayObjectRenderer.hx",163,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_166___shouldCacheHardware,"openfl.display.DisplayObjectRenderer","__shouldCacheHardware",0x0f82bca3,"openfl.display.DisplayObjectRenderer.__shouldCacheHardware","openfl/display/DisplayObjectRenderer.hx",166,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_199___shouldCacheHardware_DisplayObject,"openfl.display.DisplayObjectRenderer","__shouldCacheHardware_DisplayObject",0x716eeea5,"openfl.display.DisplayObjectRenderer.__shouldCacheHardware_DisplayObject","openfl/display/DisplayObjectRenderer.hx",199,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_211___updateCacheBitmap,"openfl.display.DisplayObjectRenderer","__updateCacheBitmap",0xdf40cb14,"openfl.display.DisplayObjectRenderer.__updateCacheBitmap","openfl/display/DisplayObjectRenderer.hx",211,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_43_boot,"openfl.display.DisplayObjectRenderer","boot",0xc99710c6,"openfl.display.DisplayObjectRenderer.boot","openfl/display/DisplayObjectRenderer.hx",43,0x59a0b9a6)
namespace openfl{
namespace display{

void DisplayObjectRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_60_new)
HXLINE(  61)		super::__construct(null());
HXLINE(  63)		this->_hx___allowSmoothing = true;
HXLINE(  64)		this->_hx___tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  65)		this->_hx___worldAlpha = ( (Float)(1) );
            	}

Dynamic DisplayObjectRenderer_obj::__CreateEmpty() { return new DisplayObjectRenderer_obj; }

void *DisplayObjectRenderer_obj::_hx_vtable = 0;

Dynamic DisplayObjectRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectRenderer_obj > _hx_result = new DisplayObjectRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x49529132;
	}
}

void DisplayObjectRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_68___clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___clear,(void))

Float DisplayObjectRenderer_obj::_hx___getAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_72___getAlpha)
HXDLIN(  72)		return (value * this->_hx___worldAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getAlpha,return )

 ::openfl::geom::ColorTransform DisplayObjectRenderer_obj::_hx___getColorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_77___getColorTransform)
HXDLIN(  77)		if (::hx::IsNotNull( this->_hx___worldColorTransform )) {
HXLINE(  79)			this->_hx___tempColorTransform->_hx___copyFrom(this->_hx___worldColorTransform);
HXLINE(  80)			this->_hx___tempColorTransform->_hx___combine(value);
HXLINE(  81)			return this->_hx___tempColorTransform;
            		}
            		else {
HXLINE(  85)			return value;
            		}
HXLINE(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getColorTransform,return )

void DisplayObjectRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_89___popMask)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMask,(void))

void DisplayObjectRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_91___popMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___popMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_93___popMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_95___pushMask)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___pushMask,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_97___pushMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_99___pushMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_101___render)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___render,(void))

void DisplayObjectRenderer_obj::_hx___renderEvent( ::openfl::display::DisplayObject displayObject){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_104___renderEvent)
HXLINE( 105)		 ::openfl::display::DisplayObjectRenderer renderer = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (::hx::IsNotNull( displayObject->_hx___customRenderEvent )) {
HXLINE( 107)			_hx_tmp = displayObject->_hx___renderable;
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 109)			displayObject->_hx___customRenderEvent->allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE( 110)			displayObject->_hx___customRenderEvent->objectMatrix->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 111)			displayObject->_hx___customRenderEvent->objectColorTransform->_hx___copyFrom(displayObject->_hx___worldColorTransform);
HXLINE( 112)			displayObject->_hx___customRenderEvent->renderer = renderer;
HXLINE( 114)			::String _hx_switch_0 = renderer->_hx___type;
            			if (  (_hx_switch_0==HX_("cairo",88,30,19,41)) ){
HXLINE( 126)				displayObject->_hx___customRenderEvent->type = HX_("renderCairo",52,5d,ca,0c);
HXDLIN( 126)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("canvas",d8,54,42,b8)) ){
HXLINE( 139)				displayObject->_hx___customRenderEvent->type = HX_("renderCanvas",ce,58,98,27);
HXDLIN( 139)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("dom",82,42,4c,00)) ){
HXLINE( 129)				bool _hx_tmp;
HXDLIN( 129)				if (::hx::IsNotNull( displayObject->stage )) {
HXLINE( 129)					_hx_tmp = displayObject->_hx___worldVisible;
            				}
            				else {
HXLINE( 129)					_hx_tmp = false;
            				}
HXDLIN( 129)				if (_hx_tmp) {
HXLINE( 131)					displayObject->_hx___customRenderEvent->type = HX_("renderDOM",cc,ac,57,cd);
            				}
            				else {
HXLINE( 135)					displayObject->_hx___customRenderEvent->type = HX_("clearDOM",f5,22,08,31);
            				}
HXLINE( 129)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ){
HXLINE( 117)				if (!(renderer->_hx___cleared)) {
HXLINE( 117)					renderer->_hx___clear();
            				}
HXLINE( 119)				 ::openfl::display::OpenGLRenderer renderer1 = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 120)				renderer1->setShader(displayObject->_hx___worldShader);
HXLINE( 121)				renderer1->_hx___context3D->_hx___flushGL();
HXLINE( 123)				displayObject->_hx___customRenderEvent->type = HX_("renderOpenGL",65,4c,ea,90);
HXLINE( 116)				goto _hx_goto_11;
            			}
            			/* default */{
HXLINE( 142)				return;
            			}
            			_hx_goto_11:;
HXLINE( 145)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE( 146)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE( 148)			displayObject->dispatchEvent(displayObject->_hx___customRenderEvent);
HXLINE( 150)			renderer->_hx___popMaskObject(displayObject,null());
HXLINE( 152)			if ((renderer->_hx___type == HX_("opengl",6f,64,94,21))) {
HXLINE( 154)				 ::openfl::display::OpenGLRenderer renderer1 = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 155)				renderer1->setViewport();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___renderEvent,(void))

void DisplayObjectRenderer_obj::_hx___resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_161___resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___resize,(void))

void DisplayObjectRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_163___setBlendMode)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___setBlendMode,(void))

 ::Dynamic DisplayObjectRenderer_obj::_hx___shouldCacheHardware( ::openfl::display::DisplayObject displayObject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_166___shouldCacheHardware)
HXLINE( 167)		if (::hx::IsNull( displayObject )) {
HXLINE( 167)			return null();
            		}
HXLINE( 169)		switch((int)(displayObject->_hx___drawableType)){
            			case (int)4: case (int)5: {
HXLINE( 172)				if (::hx::IsEq( value,true )) {
HXLINE( 172)					return true;
            				}
HXLINE( 173)				value = this->_hx___shouldCacheHardware_DisplayObject(displayObject,value);
HXLINE( 174)				if (::hx::IsEq( value,true )) {
HXLINE( 174)					return true;
            				}
HXLINE( 176)				if (::hx::IsNotNull( displayObject->_hx___children )) {
HXLINE( 178)					int _g = 0;
HXDLIN( 178)					::Array< ::Dynamic> _g1 = displayObject->_hx___children;
HXDLIN( 178)					while((_g < _g1->length)){
HXLINE( 178)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 178)						_g = (_g + 1);
HXLINE( 180)						value = this->_hx___shouldCacheHardware_DisplayObject(child,value);
HXLINE( 181)						if (::hx::IsEq( value,true )) {
HXLINE( 181)							return true;
            						}
            					}
            				}
HXLINE( 185)				return value;
            			}
            			break;
            			case (int)7: {
HXLINE( 188)				if (::hx::IsEq( value,true )) {
HXLINE( 188)					return true;
            				}
            				else {
HXLINE( 188)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 191)				return true;
            			}
            			break;
            			default:{
HXLINE( 194)				return this->_hx___shouldCacheHardware_DisplayObject(displayObject,value);
            			}
            		}
HXLINE( 169)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___shouldCacheHardware,return )

 ::Dynamic DisplayObjectRenderer_obj::_hx___shouldCacheHardware_DisplayObject( ::openfl::display::DisplayObject displayObject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_199___shouldCacheHardware_DisplayObject)
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		if (::hx::IsNotEq( value,true )) {
HXLINE( 200)			_hx_tmp = ::hx::IsNotNull( displayObject->_hx___filters );
            		}
            		else {
HXLINE( 200)			_hx_tmp = true;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 200)			return true;
            		}
HXLINE( 202)		bool _hx_tmp1;
HXDLIN( 202)		if (::hx::IsNotEq( value,false )) {
HXLINE( 202)			if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 202)				_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(displayObject->_hx___graphics));
            			}
            			else {
HXLINE( 202)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 202)			_hx_tmp1 = true;
            		}
HXDLIN( 202)		if (_hx_tmp1) {
HXLINE( 204)			return false;
            		}
HXLINE( 207)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___shouldCacheHardware_DisplayObject,return )

bool DisplayObjectRenderer_obj::_hx___updateCacheBitmap( ::openfl::display::DisplayObject displayObject,bool force){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_211___updateCacheBitmap)
HXLINE( 212)		if (::hx::IsNull( displayObject )) {
HXLINE( 212)			return false;
            		}
HXLINE( 213)		 ::openfl::display::DisplayObjectRenderer renderer = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 215)		switch((int)(displayObject->_hx___drawableType)){
            			case (int)2: {
HXLINE( 218)				 ::openfl::display::Bitmap bitmap = ( ( ::openfl::display::Bitmap)(displayObject) );
HXLINE( 220)				bool _hx_tmp;
HXDLIN( 220)				if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE( 221)					bool _hx_tmp1;
HXDLIN( 221)					if (::hx::IsNull( bitmap->_hx___filters )) {
HXLINE( 221)						_hx_tmp1 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            					}
            					else {
HXLINE( 221)						_hx_tmp1 = false;
            					}
HXDLIN( 221)					if (_hx_tmp1) {
HXLINE( 220)						_hx_tmp = ::hx::IsNull( bitmap->_hx___cacheBitmap );
            					}
            					else {
HXLINE( 220)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 220)					_hx_tmp = true;
            				}
HXDLIN( 220)				if (_hx_tmp) {
HXLINE( 221)					return false;
            				}
HXLINE( 222)				if (::hx::IsNotNull( bitmap->_hx___bitmapData->image )) {
HXLINE( 222)					force = (bitmap->_hx___bitmapData->image->version != bitmap->_hx___imageVersion);
            				}
            				else {
HXLINE( 222)					force = false;
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 225)				 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 226)				bool _hx_tmp;
HXDLIN( 226)				bool _hx_tmp1;
HXDLIN( 226)				bool _hx_tmp2;
HXDLIN( 226)				if (::hx::IsNull( textField->_hx___filters )) {
HXLINE( 226)					_hx_tmp2 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 226)					_hx_tmp2 = false;
            				}
HXDLIN( 226)				if (_hx_tmp2) {
HXLINE( 226)					_hx_tmp1 = ::hx::IsNull( textField->_hx___cacheBitmap );
            				}
            				else {
HXLINE( 226)					_hx_tmp1 = false;
            				}
HXDLIN( 226)				if (_hx_tmp1) {
HXLINE( 226)					_hx_tmp = !(textField->_hx___domRender);
            				}
            				else {
HXLINE( 226)					_hx_tmp = false;
            				}
HXDLIN( 226)				if (_hx_tmp) {
HXLINE( 227)					return false;
            				}
HXLINE( 228)				if (force) {
HXLINE( 228)					textField->_hx___renderDirty = true;
            				}
HXLINE( 229)				if (!(force)) {
HXLINE( 229)					force = textField->_hx___dirty;
            				}
            				else {
HXLINE( 229)					force = true;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 232)				 ::openfl::display::Tilemap tilemap = ( ( ::openfl::display::Tilemap)(displayObject) );
HXLINE( 233)				bool _hx_tmp;
HXDLIN( 233)				bool _hx_tmp1;
HXDLIN( 233)				if (::hx::IsNull( tilemap->_hx___filters )) {
HXLINE( 233)					_hx_tmp1 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 233)					_hx_tmp1 = false;
            				}
HXDLIN( 233)				if (_hx_tmp1) {
HXLINE( 233)					_hx_tmp = ::hx::IsNull( tilemap->_hx___cacheBitmap );
            				}
            				else {
HXLINE( 233)					_hx_tmp = false;
            				}
HXDLIN( 233)				if (_hx_tmp) {
HXLINE( 233)					return false;
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 239)		if (displayObject->_hx___isCacheBitmapRender) {
HXLINE( 239)			return false;
            		}
HXLINE( 244)		 ::openfl::geom::ColorTransform colorTransform = ::openfl::geom::ColorTransform_obj::_hx___pool->get().StaticCast<  ::openfl::geom::ColorTransform >();
HXLINE( 245)		colorTransform->_hx___copyFrom(displayObject->_hx___worldColorTransform);
HXLINE( 246)		if (::hx::IsNotNull( renderer->_hx___worldColorTransform )) {
HXLINE( 246)			colorTransform->_hx___combine(renderer->_hx___worldColorTransform);
            		}
HXLINE( 247)		bool updated = false;
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if (!(displayObject->get_cacheAsBitmap())) {
HXLINE( 249)			if ((renderer->_hx___type != HX_("opengl",6f,64,94,21))) {
HXLINE( 249)				_hx_tmp = !(colorTransform->_hx___isDefault(true));
            			}
            			else {
HXLINE( 249)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 249)			_hx_tmp = true;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 251)			 ::openfl::geom::Rectangle rect = null();
HXLINE( 253)			bool needRender;
HXDLIN( 253)			bool needRender1;
HXDLIN( 253)			if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 254)				if (displayObject->_hx___renderDirty) {
HXLINE( 254)					if (!(force)) {
HXLINE( 254)						if (::hx::IsNotNull( displayObject->_hx___children )) {
HXLINE( 253)							needRender1 = (displayObject->_hx___children->length > 0);
            						}
            						else {
HXLINE( 253)							needRender1 = false;
            						}
            					}
            					else {
HXLINE( 253)						needRender1 = true;
            					}
            				}
            				else {
HXLINE( 253)					needRender1 = false;
            				}
            			}
            			else {
HXLINE( 253)				needRender1 = true;
            			}
HXDLIN( 253)			if (!(needRender1)) {
HXLINE( 253)				needRender = ::hx::IsNotEq( displayObject->opaqueBackground,displayObject->_hx___cacheBitmapBackground );
            			}
            			else {
HXLINE( 253)				needRender = true;
            			}
HXLINE( 256)			bool softwareDirty;
HXDLIN( 256)			bool softwareDirty1;
HXDLIN( 256)			if (!(needRender)) {
HXLINE( 257)				if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 256)					softwareDirty1 = displayObject->_hx___graphics->_hx___softwareDirty;
            				}
            				else {
HXLINE( 256)					softwareDirty1 = false;
            				}
            			}
            			else {
HXLINE( 256)				softwareDirty1 = true;
            			}
HXDLIN( 256)			if (!(softwareDirty1)) {
HXLINE( 256)				softwareDirty = !(displayObject->_hx___cacheBitmapColorTransform->_hx___equals(colorTransform,true));
            			}
            			else {
HXLINE( 256)				softwareDirty = true;
            			}
HXLINE( 259)			bool hardwareDirty;
HXDLIN( 259)			if (!(needRender)) {
HXLINE( 259)				if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 259)					hardwareDirty = displayObject->_hx___graphics->_hx___hardwareDirty;
            				}
            				else {
HXLINE( 259)					hardwareDirty = false;
            				}
            			}
            			else {
HXLINE( 259)				hardwareDirty = true;
            			}
HXLINE( 261)			::String renderType = renderer->_hx___type;
HXLINE( 263)			bool _hx_tmp;
HXDLIN( 263)			if (!(softwareDirty)) {
HXLINE( 263)				_hx_tmp = hardwareDirty;
            			}
            			else {
HXLINE( 263)				_hx_tmp = true;
            			}
HXDLIN( 263)			if (_hx_tmp) {
HXLINE( 266)				if ((renderType == HX_("opengl",6f,64,94,21))) {
HXLINE( 268)					if (::hx::IsEq( this->_hx___shouldCacheHardware(displayObject,null()),false )) {
HXLINE( 273)						renderType = HX_("cairo",88,30,19,41);
            					}
            				}
HXLINE( 279)				bool _hx_tmp;
HXDLIN( 279)				if (softwareDirty) {
HXLINE( 279)					if ((renderType != HX_("canvas",d8,54,42,b8))) {
HXLINE( 279)						_hx_tmp = (renderType == HX_("cairo",88,30,19,41));
            					}
            					else {
HXLINE( 279)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 279)					_hx_tmp = false;
            				}
HXDLIN( 279)				if (_hx_tmp) {
HXLINE( 279)					needRender = true;
            				}
HXLINE( 280)				bool _hx_tmp1;
HXDLIN( 280)				if (hardwareDirty) {
HXLINE( 280)					_hx_tmp1 = (renderType == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 280)					_hx_tmp1 = false;
            				}
HXDLIN( 280)				if (_hx_tmp1) {
HXLINE( 280)					needRender = true;
            				}
            			}
HXLINE( 283)			bool updateTransform;
HXDLIN( 283)			if (!(needRender)) {
HXLINE( 283)				updateTransform = !(displayObject->_hx___cacheBitmap->_hx___worldTransform->equals(displayObject->_hx___worldTransform));
            			}
            			else {
HXLINE( 283)				updateTransform = true;
            			}
HXLINE( 284)			bool hasFilters = ::hx::IsNotNull( displayObject->_hx___filters );
HXLINE( 286)			bool _hx_tmp1;
HXDLIN( 286)			if (hasFilters) {
HXLINE( 286)				_hx_tmp1 = !(needRender);
            			}
            			else {
HXLINE( 286)				_hx_tmp1 = false;
            			}
HXDLIN( 286)			if (_hx_tmp1) {
HXLINE( 288)				int _g = 0;
HXDLIN( 288)				::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 288)				while((_g < _g1->length)){
HXLINE( 288)					 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 288)					_g = (_g + 1);
HXLINE( 290)					if (filter->_hx___renderDirty) {
HXLINE( 292)						needRender = true;
HXLINE( 293)						goto _hx_goto_18;
            					}
            				}
            				_hx_goto_18:;
            			}
HXLINE( 298)			if (::hx::IsNull( displayObject->_hx___cacheBitmapMatrix )) {
HXLINE( 300)				displayObject->_hx___cacheBitmapMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            			}
HXLINE( 303)			 ::openfl::geom::Matrix bitmapMatrix;
HXDLIN( 303)			if (::hx::IsNotNull( displayObject->_hx___cacheAsBitmapMatrix )) {
HXLINE( 303)				bitmapMatrix = displayObject->_hx___cacheAsBitmapMatrix;
            			}
            			else {
HXLINE( 303)				bitmapMatrix = displayObject->_hx___renderTransform;
            			}
HXLINE( 305)			bool _hx_tmp2;
HXDLIN( 305)			if (!(needRender)) {
HXLINE( 306)				bool _hx_tmp;
HXDLIN( 306)				bool _hx_tmp1;
HXDLIN( 306)				if ((bitmapMatrix->a == displayObject->_hx___cacheBitmapMatrix->a)) {
HXLINE( 306)					_hx_tmp1 = (bitmapMatrix->b != displayObject->_hx___cacheBitmapMatrix->b);
            				}
            				else {
HXLINE( 306)					_hx_tmp1 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp1)) {
HXLINE( 306)					_hx_tmp = (bitmapMatrix->c != displayObject->_hx___cacheBitmapMatrix->c);
            				}
            				else {
HXLINE( 306)					_hx_tmp = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp)) {
HXLINE( 305)					_hx_tmp2 = (bitmapMatrix->d != displayObject->_hx___cacheBitmapMatrix->d);
            				}
            				else {
HXLINE( 305)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE( 305)				_hx_tmp2 = false;
            			}
HXDLIN( 305)			if (_hx_tmp2) {
HXLINE( 311)				needRender = true;
            			}
HXLINE( 314)			bool _hx_tmp3;
HXDLIN( 314)			bool _hx_tmp4;
HXDLIN( 314)			bool _hx_tmp5;
HXDLIN( 314)			bool _hx_tmp6;
HXDLIN( 314)			if (!(needRender)) {
HXLINE( 314)				_hx_tmp6 = (renderer->_hx___type != HX_("opengl",6f,64,94,21));
            			}
            			else {
HXLINE( 314)				_hx_tmp6 = false;
            			}
HXDLIN( 314)			if (_hx_tmp6) {
HXLINE( 314)				_hx_tmp5 = ::hx::IsNotNull( displayObject->_hx___cacheBitmapData );
            			}
            			else {
HXLINE( 314)				_hx_tmp5 = false;
            			}
HXDLIN( 314)			if (_hx_tmp5) {
HXLINE( 314)				_hx_tmp4 = ::hx::IsNotNull( displayObject->_hx___cacheBitmapData->image );
            			}
            			else {
HXLINE( 314)				_hx_tmp4 = false;
            			}
HXDLIN( 314)			if (_hx_tmp4) {
HXLINE( 314)				_hx_tmp3 = (displayObject->_hx___cacheBitmapData->image->version < displayObject->_hx___cacheBitmapData->_hx___textureVersion);
            			}
            			else {
HXLINE( 314)				_hx_tmp3 = false;
            			}
HXDLIN( 314)			if (_hx_tmp3) {
HXLINE( 320)				needRender = true;
            			}
HXLINE( 323)			displayObject->_hx___cacheBitmapMatrix->copyFrom(bitmapMatrix);
HXLINE( 324)			displayObject->_hx___cacheBitmapMatrix->tx = ( (Float)(0) );
HXLINE( 325)			displayObject->_hx___cacheBitmapMatrix->ty = ( (Float)(0) );
HXLINE( 329)			int bitmapWidth = 0;
HXDLIN( 329)			int bitmapHeight = 0;
HXLINE( 330)			int filterWidth = 0;
HXDLIN( 330)			int filterHeight = 0;
HXLINE( 331)			Float offsetX = ((Float)0.);
HXDLIN( 331)			Float offsetY = ((Float)0.);
HXLINE( 333)			bool _hx_tmp7;
HXDLIN( 333)			if (!(updateTransform)) {
HXLINE( 333)				_hx_tmp7 = needRender;
            			}
            			else {
HXLINE( 333)				_hx_tmp7 = true;
            			}
HXDLIN( 333)			if (_hx_tmp7) {
HXLINE( 335)				rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 337)				displayObject->_hx___getFilterBounds(rect,displayObject->_hx___cacheBitmapMatrix);
HXLINE( 339)				filterWidth = ::Math_obj::ceil(rect->width);
HXLINE( 340)				filterHeight = ::Math_obj::ceil(rect->height);
HXLINE( 342)				if ((rect->x > 0)) {
HXLINE( 342)					offsetX = ( (Float)(::Math_obj::ceil(rect->x)) );
            				}
            				else {
HXLINE( 342)					offsetX = ( (Float)(::Math_obj::floor(rect->x)) );
            				}
HXLINE( 343)				if ((rect->y > 0)) {
HXLINE( 343)					offsetY = ( (Float)(::Math_obj::ceil(rect->y)) );
            				}
            				else {
HXLINE( 343)					offsetY = ( (Float)(::Math_obj::floor(rect->y)) );
            				}
HXLINE( 345)				if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData )) {
HXLINE( 347)					bool _hx_tmp;
HXDLIN( 347)					if ((filterWidth <= displayObject->_hx___cacheBitmapData->width)) {
HXLINE( 347)						_hx_tmp = (filterHeight > displayObject->_hx___cacheBitmapData->height);
            					}
            					else {
HXLINE( 347)						_hx_tmp = true;
            					}
HXDLIN( 347)					if (_hx_tmp) {
HXLINE( 349)						bitmapWidth = ::Math_obj::ceil(::Math_obj::max((( (Float)(filterWidth) ) * ((Float)1.25)),( (Float)(displayObject->_hx___cacheBitmapData->width) )));
HXLINE( 350)						bitmapHeight = ::Math_obj::ceil(::Math_obj::max((( (Float)(filterHeight) ) * ((Float)1.25)),( (Float)(displayObject->_hx___cacheBitmapData->height) )));
HXLINE( 351)						needRender = true;
            					}
            					else {
HXLINE( 355)						bitmapWidth = displayObject->_hx___cacheBitmapData->width;
HXLINE( 356)						bitmapHeight = displayObject->_hx___cacheBitmapData->height;
            					}
            				}
            				else {
HXLINE( 361)					bitmapWidth = filterWidth;
HXLINE( 362)					bitmapHeight = filterHeight;
            				}
            			}
HXLINE( 366)			if (needRender) {
HXLINE( 368)				updateTransform = true;
HXLINE( 369)				displayObject->_hx___cacheBitmapBackground = displayObject->opaqueBackground;
HXLINE( 371)				bool _hx_tmp;
HXDLIN( 371)				if ((filterWidth >= ((Float)0.5))) {
HXLINE( 371)					_hx_tmp = (filterHeight >= ((Float)0.5));
            				}
            				else {
HXLINE( 371)					_hx_tmp = false;
            				}
HXDLIN( 371)				if (_hx_tmp) {
HXLINE( 373)					bool needsFill;
HXDLIN( 373)					if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 374)						if ((bitmapWidth == filterWidth)) {
HXLINE( 373)							needsFill = (bitmapHeight != filterHeight);
            						}
            						else {
HXLINE( 373)							needsFill = true;
            						}
            					}
            					else {
HXLINE( 373)						needsFill = false;
            					}
HXLINE( 375)					int fillColor;
HXDLIN( 375)					if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 375)						fillColor = (-16777216 | ( (int)(displayObject->opaqueBackground) ));
            					}
            					else {
HXLINE( 375)						fillColor = 0;
            					}
HXLINE( 376)					int bitmapColor;
HXDLIN( 376)					if (needsFill) {
HXLINE( 376)						bitmapColor = 0;
            					}
            					else {
HXLINE( 376)						bitmapColor = fillColor;
            					}
HXLINE( 377)					bool allowFramebuffer = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
HXLINE( 379)					bool _hx_tmp;
HXDLIN( 379)					bool _hx_tmp1;
HXDLIN( 379)					if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData )) {
HXLINE( 379)						_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData->width);
            					}
            					else {
HXLINE( 379)						_hx_tmp1 = true;
            					}
HXDLIN( 379)					if (!(_hx_tmp1)) {
HXLINE( 379)						_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData->height);
            					}
            					else {
HXLINE( 379)						_hx_tmp = true;
            					}
HXDLIN( 379)					if (_hx_tmp) {
HXLINE( 383)						displayObject->_hx___cacheBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,bitmapColor);
HXLINE( 385)						if (::hx::IsNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 385)							displayObject->_hx___cacheBitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,null(),null(),null());
            						}
HXLINE( 386)						displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
HXLINE( 387)						displayObject->_hx___cacheBitmapRenderer = null();
            					}
            					else {
HXLINE( 391)						displayObject->_hx___cacheBitmapData->_hx___fillRect(displayObject->_hx___cacheBitmapData->rect,bitmapColor,allowFramebuffer);
            					}
HXLINE( 394)					if (needsFill) {
HXLINE( 396)						rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 397)						displayObject->_hx___cacheBitmapData->_hx___fillRect(rect,fillColor,allowFramebuffer);
            					}
            				}
            				else {
HXLINE( 402)					::openfl::geom::ColorTransform_obj::_hx___pool->release(colorTransform);
HXLINE( 404)					displayObject->_hx___cacheBitmap = null();
HXLINE( 405)					displayObject->_hx___cacheBitmapData = null();
HXLINE( 406)					displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 407)					displayObject->_hx___cacheBitmapData3 = null();
HXLINE( 408)					displayObject->_hx___cacheBitmapRenderer = null();
HXLINE( 410)					if ((displayObject->_hx___drawableType == 7)) {
HXLINE( 412)						 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 413)						if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 415)							 ::openfl::geom::Matrix fh = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 415)							fh->tx = (fh->tx - textField->_hx___offsetX);
HXLINE( 416)							 ::openfl::geom::Matrix fh1 = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 416)							fh1->ty = (fh1->ty - textField->_hx___offsetY);
            						}
            					}
HXLINE( 420)					return true;
            				}
            			}
            			else {
HXLINE( 427)				displayObject->_hx___cacheBitmapData = displayObject->_hx___cacheBitmap->get_bitmapData();
HXLINE( 428)				displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 429)				displayObject->_hx___cacheBitmapData3 = null();
            			}
HXLINE( 432)			bool _hx_tmp8;
HXDLIN( 432)			if (!(updateTransform)) {
HXLINE( 432)				_hx_tmp8 = needRender;
            			}
            			else {
HXLINE( 432)				_hx_tmp8 = true;
            			}
HXDLIN( 432)			if (_hx_tmp8) {
HXLINE( 434)				displayObject->_hx___cacheBitmap->_hx___worldTransform->copyFrom(displayObject->_hx___worldTransform);
HXLINE( 436)				if (::hx::IsInstanceEq( bitmapMatrix,displayObject->_hx___renderTransform )) {
HXLINE( 438)					displayObject->_hx___cacheBitmap->_hx___renderTransform->identity();
HXLINE( 439)					displayObject->_hx___cacheBitmap->_hx___renderTransform->tx = (displayObject->_hx___renderTransform->tx + offsetX);
HXLINE( 440)					displayObject->_hx___cacheBitmap->_hx___renderTransform->ty = (displayObject->_hx___renderTransform->ty + offsetY);
            				}
            				else {
HXLINE( 444)					displayObject->_hx___cacheBitmap->_hx___renderTransform->copyFrom(displayObject->_hx___cacheBitmapMatrix);
HXLINE( 445)					displayObject->_hx___cacheBitmap->_hx___renderTransform->invert();
HXLINE( 446)					displayObject->_hx___cacheBitmap->_hx___renderTransform->concat(displayObject->_hx___renderTransform);
HXLINE( 447)					 ::openfl::geom::Matrix fh = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 447)					fh->tx = (fh->tx + offsetX);
HXLINE( 448)					 ::openfl::geom::Matrix fh1 = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 448)					fh1->ty = (fh1->ty + offsetY);
            				}
            			}
HXLINE( 452)			displayObject->_hx___cacheBitmap->smoothing = renderer->_hx___allowSmoothing;
HXLINE( 453)			displayObject->_hx___cacheBitmap->_hx___renderable = displayObject->_hx___renderable;
HXLINE( 454)			displayObject->_hx___cacheBitmap->_hx___worldAlpha = displayObject->_hx___worldAlpha;
HXLINE( 455)			displayObject->_hx___cacheBitmap->_hx___worldBlendMode = displayObject->_hx___worldBlendMode;
HXLINE( 456)			displayObject->_hx___cacheBitmap->_hx___worldShader = displayObject->_hx___worldShader;
HXLINE( 459)			displayObject->_hx___cacheBitmap->set_mask(displayObject->_hx___mask);
HXLINE( 461)			if (needRender) {
HXLINE( 464)				bool _hx_tmp;
HXDLIN( 464)				if (::hx::IsNotNull( displayObject->_hx___cacheBitmapRenderer )) {
HXLINE( 464)					_hx_tmp = (renderType != displayObject->_hx___cacheBitmapRenderer->_hx___type);
            				}
            				else {
HXLINE( 464)					_hx_tmp = true;
            				}
HXDLIN( 464)				if (_hx_tmp) {
HXLINE( 466)					if ((renderType == HX_("opengl",6f,64,94,21))) {
HXLINE( 468)						displayObject->_hx___cacheBitmapRenderer =  ::openfl::display::OpenGLRenderer_obj::__alloc( HX_CTX ,::hx::TCast<  ::openfl::display::OpenGLRenderer >::cast(renderer)->_hx___context3D,displayObject->_hx___cacheBitmapData);
            					}
            					else {
HXLINE( 472)						if (::hx::IsNull( displayObject->_hx___cacheBitmapData->image )) {
HXLINE( 474)							int color;
HXDLIN( 474)							if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 474)								color = (-16777216 | ( (int)(displayObject->opaqueBackground) ));
            							}
            							else {
HXLINE( 474)								color = 0;
            							}
HXLINE( 475)							displayObject->_hx___cacheBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,color);
HXLINE( 476)							displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
            						}
HXLINE( 483)						displayObject->_hx___cacheBitmapRenderer =  ::openfl::display::CairoRenderer_obj::__alloc( HX_CTX , ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,displayObject->_hx___cacheBitmapData->getSurface()));
            					}
HXLINE( 487)					displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 488)					displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXLINE( 494)				if (::hx::IsNull( displayObject->_hx___cacheBitmapColorTransform )) {
HXLINE( 494)					displayObject->_hx___cacheBitmapColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXLINE( 496)				displayObject->_hx___cacheBitmapRenderer->_hx___stage = displayObject->stage;
HXLINE( 498)				displayObject->_hx___cacheBitmapRenderer->_hx___allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE( 499)				displayObject->_hx___cacheBitmapRenderer->_hx___setBlendMode(10);
HXLINE( 500)				displayObject->_hx___cacheBitmapRenderer->_hx___worldAlpha = (( (Float)(1) ) / displayObject->_hx___worldAlpha);
HXLINE( 502)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 503)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->invert();
HXLINE( 504)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->concat(displayObject->_hx___cacheBitmapMatrix);
HXLINE( 505)				 ::openfl::geom::Matrix fh = displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform;
HXDLIN( 505)				fh->tx = (fh->tx - offsetX);
HXLINE( 506)				 ::openfl::geom::Matrix fh1 = displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform;
HXDLIN( 506)				fh1->ty = (fh1->ty - offsetY);
HXLINE( 508)				displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform->_hx___copyFrom(colorTransform);
HXLINE( 509)				displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform->_hx___invert();
HXLINE( 511)				displayObject->_hx___isCacheBitmapRender = true;
HXLINE( 513)				if ((displayObject->_hx___cacheBitmapRenderer->_hx___type == HX_("opengl",6f,64,94,21))) {
HXLINE( 515)					 ::openfl::display::OpenGLRenderer parentRenderer = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 516)					 ::openfl::display::OpenGLRenderer childRenderer = ( ( ::openfl::display::OpenGLRenderer)(displayObject->_hx___cacheBitmapRenderer) );
HXLINE( 518)					 ::openfl::display3D::Context3D context = childRenderer->_hx___context3D;
HXLINE( 520)					 ::openfl::display3D::textures::TextureBase cacheRTT = context->_hx___state->renderToTexture;
HXLINE( 521)					bool cacheRTTDepthStencil = context->_hx___state->renderToTextureDepthStencil;
HXLINE( 522)					int cacheRTTAntiAlias = context->_hx___state->renderToTextureAntiAlias;
HXLINE( 523)					int cacheRTTSurfaceSelector = context->_hx___state->renderToTextureSurfaceSelector;
HXLINE( 527)					 ::Dynamic cacheBlendMode = parentRenderer->_hx___blendMode;
HXLINE( 528)					parentRenderer->_hx___suspendClipAndMask();
HXLINE( 529)					childRenderer->_hx___copyShader(parentRenderer);
HXLINE( 532)					displayObject->_hx___cacheBitmapData->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 533)					childRenderer->_hx___setRenderTarget(displayObject->_hx___cacheBitmapData);
HXLINE( 534)					if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData->image )) {
HXLINE( 535)						displayObject->_hx___cacheBitmapData->_hx___textureVersion = (displayObject->_hx___cacheBitmapData->image->version + 1);
            					}
HXLINE( 538)					displayObject->_hx___cacheBitmapData->_hx___drawGL(displayObject,childRenderer);
HXLINE( 540)					if (hasFilters) {
HXLINE( 542)						bool needSecondBitmapData = true;
HXLINE( 543)						bool needCopyOfOriginal = false;
HXLINE( 545)						{
HXLINE( 545)							int _g = 0;
HXDLIN( 545)							::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 545)							while((_g < _g1->length)){
HXLINE( 545)								 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 545)								_g = (_g + 1);
HXLINE( 550)								if (filter->_hx___preserveObject) {
HXLINE( 552)									needCopyOfOriginal = true;
            								}
            							}
            						}
HXLINE( 556)						 ::openfl::display::BitmapData bitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 557)						 ::openfl::display::BitmapData bitmap2 = null();
HXLINE( 558)						 ::openfl::display::BitmapData bitmap3 = null();
HXLINE( 561)						bool _hx_tmp;
HXDLIN( 561)						bool _hx_tmp1;
HXDLIN( 561)						if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2 )) {
HXLINE( 561)							_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData2->width);
            						}
            						else {
HXLINE( 561)							_hx_tmp1 = true;
            						}
HXDLIN( 561)						if (!(_hx_tmp1)) {
HXLINE( 561)							_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData2->height);
            						}
            						else {
HXLINE( 561)							_hx_tmp = true;
            						}
HXDLIN( 561)						if (_hx_tmp) {
HXLINE( 565)							displayObject->_hx___cacheBitmapData2 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            						}
            						else {
HXLINE( 569)							displayObject->_hx___cacheBitmapData2->fillRect(displayObject->_hx___cacheBitmapData2->rect,0);
HXLINE( 570)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2->image )) {
HXLINE( 572)								displayObject->_hx___cacheBitmapData2->_hx___textureVersion = (displayObject->_hx___cacheBitmapData2->image->version + 1);
            							}
            						}
HXLINE( 575)						displayObject->_hx___cacheBitmapData2->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 576)						bitmap2 = displayObject->_hx___cacheBitmapData2;
HXLINE( 581)						if (needCopyOfOriginal) {
HXLINE( 583)							bool _hx_tmp;
HXDLIN( 583)							bool _hx_tmp1;
HXDLIN( 583)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3 )) {
HXLINE( 583)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData3->width);
            							}
            							else {
HXLINE( 583)								_hx_tmp1 = true;
            							}
HXDLIN( 583)							if (!(_hx_tmp1)) {
HXLINE( 583)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData3->height);
            							}
            							else {
HXLINE( 583)								_hx_tmp = true;
            							}
HXDLIN( 583)							if (_hx_tmp) {
HXLINE( 587)								displayObject->_hx___cacheBitmapData3 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 591)								displayObject->_hx___cacheBitmapData3->fillRect(displayObject->_hx___cacheBitmapData3->rect,0);
HXLINE( 592)								if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3->image )) {
HXLINE( 594)									displayObject->_hx___cacheBitmapData3->_hx___textureVersion = (displayObject->_hx___cacheBitmapData3->image->version + 1);
            								}
            							}
HXLINE( 597)							displayObject->_hx___cacheBitmapData3->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 598)							bitmap3 = displayObject->_hx___cacheBitmapData3;
            						}
HXLINE( 601)						childRenderer->_hx___setBlendMode(10);
HXLINE( 602)						childRenderer->_hx___worldAlpha = ( (Float)(1) );
HXLINE( 603)						childRenderer->_hx___worldTransform->identity();
HXLINE( 604)						childRenderer->_hx___worldColorTransform->_hx___identity();
HXLINE( 609)						 ::openfl::display::Shader shader;
HXDLIN( 609)						 ::openfl::display::BitmapData cacheBitmap;
HXLINE( 611)						{
HXLINE( 611)							int _g2 = 0;
HXDLIN( 611)							::Array< ::Dynamic> _g3 = displayObject->_hx___filters;
HXDLIN( 611)							while((_g2 < _g3->length)){
HXLINE( 611)								 ::openfl::filters::BitmapFilter filter = _g3->__get(_g2).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 611)								_g2 = (_g2 + 1);
HXLINE( 613)								if (filter->_hx___preserveObject) {
HXLINE( 615)									childRenderer->_hx___setRenderTarget(bitmap3);
HXLINE( 616)									childRenderer->_hx___renderFilterPass(bitmap,childRenderer->_hx___defaultDisplayShader,filter->_hx___smooth,null());
            								}
HXLINE( 619)								{
HXLINE( 619)									int _g = 0;
HXDLIN( 619)									int _g1 = filter->_hx___numShaderPasses;
HXDLIN( 619)									while((_g < _g1)){
HXLINE( 619)										_g = (_g + 1);
HXDLIN( 619)										int i = (_g - 1);
HXLINE( 621)										 ::openfl::display::BitmapData shader1;
HXDLIN( 621)										if (filter->_hx___preserveObject) {
HXLINE( 621)											shader1 = bitmap3;
            										}
            										else {
HXLINE( 621)											shader1 = null();
            										}
HXDLIN( 621)										shader = filter->_hx___initShader(childRenderer,i,shader1);
HXLINE( 622)										childRenderer->_hx___setBlendMode(filter->_hx___shaderBlendMode);
HXLINE( 623)										childRenderer->_hx___setRenderTarget(bitmap2);
HXLINE( 624)										childRenderer->_hx___renderFilterPass(bitmap,shader,filter->_hx___smooth,null());
HXLINE( 626)										cacheBitmap = bitmap;
HXLINE( 627)										bitmap = bitmap2;
HXLINE( 628)										bitmap2 = cacheBitmap;
            									}
            								}
HXLINE( 631)								filter->_hx___renderDirty = false;
            							}
            						}
HXLINE( 634)						displayObject->_hx___cacheBitmap->_hx___bitmapData = bitmap;
            					}
HXLINE( 637)					parentRenderer->_hx___blendMode = 10;
HXLINE( 638)					parentRenderer->_hx___setBlendMode(cacheBlendMode);
HXLINE( 639)					parentRenderer->_hx___copyShader(childRenderer);
HXLINE( 641)					if (::hx::IsNotNull( cacheRTT )) {
HXLINE( 643)						context->setRenderToTexture(cacheRTT,cacheRTTDepthStencil,cacheRTTAntiAlias,cacheRTTSurfaceSelector);
            					}
            					else {
HXLINE( 647)						context->setRenderToBackBuffer();
            					}
HXLINE( 653)					parentRenderer->_hx___resumeClipAndMask(childRenderer);
HXLINE( 654)					parentRenderer->setViewport();
HXLINE( 656)					displayObject->_hx___cacheBitmapColorTransform->_hx___copyFrom(colorTransform);
            				}
            				else {
HXLINE( 663)					displayObject->_hx___cacheBitmapData->_hx___drawCairo(displayObject,( ( ::openfl::display::CairoRenderer)(displayObject->_hx___cacheBitmapRenderer) ));
HXLINE( 666)					if (hasFilters) {
HXLINE( 668)						bool needSecondBitmapData = false;
HXLINE( 669)						bool needCopyOfOriginal = false;
HXLINE( 671)						{
HXLINE( 671)							int _g = 0;
HXDLIN( 671)							::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 671)							while((_g < _g1->length)){
HXLINE( 671)								 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 671)								_g = (_g + 1);
HXLINE( 673)								if (filter->_hx___needSecondBitmapData) {
HXLINE( 675)									needSecondBitmapData = true;
            								}
HXLINE( 677)								if (filter->_hx___preserveObject) {
HXLINE( 679)									needCopyOfOriginal = true;
            								}
            							}
            						}
HXLINE( 683)						 ::openfl::display::BitmapData bitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 684)						 ::openfl::display::BitmapData bitmap2 = null();
HXLINE( 685)						 ::openfl::display::BitmapData bitmap3 = null();
HXLINE( 687)						if (needSecondBitmapData) {
HXLINE( 689)							bool _hx_tmp;
HXDLIN( 689)							bool _hx_tmp1;
HXDLIN( 689)							bool _hx_tmp2;
HXDLIN( 689)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2 )) {
HXLINE( 689)								_hx_tmp2 = ::hx::IsNull( displayObject->_hx___cacheBitmapData2->image );
            							}
            							else {
HXLINE( 689)								_hx_tmp2 = true;
            							}
HXDLIN( 689)							if (!(_hx_tmp2)) {
HXLINE( 689)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData2->width);
            							}
            							else {
HXLINE( 689)								_hx_tmp1 = true;
            							}
HXDLIN( 689)							if (!(_hx_tmp1)) {
HXLINE( 689)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData2->height);
            							}
            							else {
HXLINE( 689)								_hx_tmp = true;
            							}
HXDLIN( 689)							if (_hx_tmp) {
HXLINE( 694)								displayObject->_hx___cacheBitmapData2 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 698)								displayObject->_hx___cacheBitmapData2->fillRect(displayObject->_hx___cacheBitmapData2->rect,0);
            							}
HXLINE( 700)							bitmap2 = displayObject->_hx___cacheBitmapData2;
            						}
            						else {
HXLINE( 704)							bitmap2 = bitmap;
            						}
HXLINE( 707)						if (needCopyOfOriginal) {
HXLINE( 709)							bool _hx_tmp;
HXDLIN( 709)							bool _hx_tmp1;
HXDLIN( 709)							bool _hx_tmp2;
HXDLIN( 709)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3 )) {
HXLINE( 709)								_hx_tmp2 = ::hx::IsNull( displayObject->_hx___cacheBitmapData3->image );
            							}
            							else {
HXLINE( 709)								_hx_tmp2 = true;
            							}
HXDLIN( 709)							if (!(_hx_tmp2)) {
HXLINE( 709)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData3->width);
            							}
            							else {
HXLINE( 709)								_hx_tmp1 = true;
            							}
HXDLIN( 709)							if (!(_hx_tmp1)) {
HXLINE( 709)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData3->height);
            							}
            							else {
HXLINE( 709)								_hx_tmp = true;
            							}
HXDLIN( 709)							if (_hx_tmp) {
HXLINE( 714)								displayObject->_hx___cacheBitmapData3 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 718)								displayObject->_hx___cacheBitmapData3->fillRect(displayObject->_hx___cacheBitmapData3->rect,0);
            							}
HXLINE( 720)							bitmap3 = displayObject->_hx___cacheBitmapData3;
            						}
HXLINE( 723)						if (::hx::IsNull( displayObject->_hx___tempPoint )) {
HXLINE( 723)							displayObject->_hx___tempPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            						}
HXLINE( 724)						 ::openfl::geom::Point destPoint = displayObject->_hx___tempPoint;
HXLINE( 725)						 ::openfl::display::BitmapData cacheBitmap;
HXDLIN( 725)						 ::openfl::display::BitmapData lastBitmap;
HXLINE( 727)						{
HXLINE( 727)							int _g2 = 0;
HXDLIN( 727)							::Array< ::Dynamic> _g3 = displayObject->_hx___filters;
HXDLIN( 727)							while((_g2 < _g3->length)){
HXLINE( 727)								 ::openfl::filters::BitmapFilter filter = _g3->__get(_g2).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 727)								_g2 = (_g2 + 1);
HXLINE( 729)								if (filter->_hx___preserveObject) {
HXLINE( 731)									bitmap3->copyPixels(bitmap,bitmap->rect,destPoint,null(),null(),null());
            								}
HXLINE( 734)								lastBitmap = filter->_hx___applyFilter(bitmap2,bitmap,bitmap->rect,destPoint);
HXLINE( 736)								if (filter->_hx___preserveObject) {
HXLINE( 739)									 ::openfl::geom::ColorTransform _hx_tmp;
HXDLIN( 739)									if (::hx::IsNotNull( displayObject->_hx___objectTransform )) {
HXLINE( 739)										_hx_tmp = displayObject->_hx___objectTransform->_hx___colorTransform;
            									}
            									else {
HXLINE( 739)										_hx_tmp = null();
            									}
HXLINE( 738)									lastBitmap->draw(bitmap3,null(),_hx_tmp,null(),null(),null());
            								}
HXLINE( 741)								filter->_hx___renderDirty = false;
HXLINE( 743)								bool _hx_tmp;
HXDLIN( 743)								if (needSecondBitmapData) {
HXLINE( 743)									_hx_tmp = ::hx::IsInstanceEq( lastBitmap,bitmap2 );
            								}
            								else {
HXLINE( 743)									_hx_tmp = false;
            								}
HXDLIN( 743)								if (_hx_tmp) {
HXLINE( 745)									cacheBitmap = bitmap;
HXLINE( 746)									bitmap = bitmap2;
HXLINE( 747)									bitmap2 = cacheBitmap;
            								}
            							}
            						}
HXLINE( 751)						if (::hx::IsInstanceNotEq( displayObject->_hx___cacheBitmapData,bitmap )) {
HXLINE( 757)							cacheBitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 758)							displayObject->_hx___cacheBitmapData = bitmap;
HXLINE( 759)							displayObject->_hx___cacheBitmapData2 = cacheBitmap;
HXLINE( 760)							displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
HXLINE( 761)							displayObject->_hx___cacheBitmapRenderer = null();
            						}
HXLINE( 764)						displayObject->_hx___cacheBitmap->_hx___imageVersion = displayObject->_hx___cacheBitmapData->_hx___textureVersion;
            					}
HXLINE( 767)					displayObject->_hx___cacheBitmapColorTransform->_hx___copyFrom(colorTransform);
HXLINE( 769)					if (!(displayObject->_hx___cacheBitmapColorTransform->_hx___isDefault(true))) {
HXLINE( 771)						displayObject->_hx___cacheBitmapColorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 772)						displayObject->_hx___cacheBitmapData->colorTransform(displayObject->_hx___cacheBitmapData->rect,displayObject->_hx___cacheBitmapColorTransform);
            					}
            				}
HXLINE( 776)				displayObject->_hx___isCacheBitmapRender = false;
            			}
HXLINE( 779)			bool _hx_tmp9;
HXDLIN( 779)			if (!(updateTransform)) {
HXLINE( 779)				_hx_tmp9 = needRender;
            			}
            			else {
HXLINE( 779)				_hx_tmp9 = true;
            			}
HXDLIN( 779)			if (_hx_tmp9) {
HXLINE( 781)				::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            			}
HXLINE( 784)			updated = updateTransform;
            		}
            		else {
HXLINE( 786)			if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 788)				if ((renderer->_hx___type == HX_("dom",82,42,4c,00))) {
HXLINE( 790)					 ::openfl::display::DOMRenderer domRenderer = ( ( ::openfl::display::DOMRenderer)(renderer) );
HXLINE( 791)					domRenderer->_hx___renderDrawableClear(displayObject->_hx___cacheBitmap);
            				}
HXLINE( 794)				displayObject->_hx___cacheBitmap = null();
HXLINE( 795)				displayObject->_hx___cacheBitmapData = null();
HXLINE( 796)				displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 797)				displayObject->_hx___cacheBitmapData3 = null();
HXLINE( 798)				displayObject->_hx___cacheBitmapColorTransform = null();
HXLINE( 799)				displayObject->_hx___cacheBitmapRenderer = null();
HXLINE( 801)				updated = true;
            			}
            		}
HXLINE( 804)		::openfl::geom::ColorTransform_obj::_hx___pool->release(colorTransform);
HXLINE( 806)		bool _hx_tmp1;
HXDLIN( 806)		if (updated) {
HXLINE( 806)			_hx_tmp1 = (displayObject->_hx___drawableType == 7);
            		}
            		else {
HXLINE( 806)			_hx_tmp1 = false;
            		}
HXDLIN( 806)		if (_hx_tmp1) {
HXLINE( 808)			 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 809)			if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 811)				 ::openfl::geom::Matrix fh = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 811)				fh->tx = (fh->tx - textField->_hx___offsetX);
HXLINE( 812)				 ::openfl::geom::Matrix fh1 = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 812)				fh1->ty = (fh1->ty - textField->_hx___offsetY);
            			}
            		}
HXLINE( 816)		return updated;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___updateCacheBitmap,return )


::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectRenderer_obj > __this = new DisplayObjectRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectRenderer_obj *__this = (DisplayObjectRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectRenderer_obj), true, "openfl.display.DisplayObjectRenderer"));
	*(void **)__this = DisplayObjectRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectRenderer_obj::DisplayObjectRenderer_obj()
{
}

void DisplayObjectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectRenderer);
	HX_MARK_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_MARK_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_MARK_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_MARK_MEMBER_NAME(_hx___type,"__type");
	HX_MARK_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_VISIT_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(_hx___type,"__type");
	HX_VISIT_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { return ::hx::Val( _hx___type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { return ::hx::Val( _hx___stage ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return ::hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { return ::hx::Val( _hx___cleared ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getAlpha") ) { return ::hx::Val( _hx___getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return ::hx::Val( _hx___blendMode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return ::hx::Val( _hx___worldAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { return ::hx::Val( _hx___roundPixels ); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return ::hx::Val( _hx___transparent ); }
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderEvent") ) { return ::hx::Val( _hx___renderEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { return ::hx::Val( _hx___allowSmoothing ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { return ::hx::Val( _hx___overrideBlendMode ); }
		if (HX_FIELD_EQ(inName,"__getColorTransform") ) { return ::hx::Val( _hx___getColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateCacheBitmap") ) { return ::hx::Val( _hx___updateCacheBitmap_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { return ::hx::Val( _hx___tempColorTransform ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return ::hx::Val( _hx___worldColorTransform ); }
		if (HX_FIELD_EQ(inName,"__shouldCacheHardware") ) { return ::hx::Val( _hx___shouldCacheHardware_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"__shouldCacheHardware_DisplayObject") ) { return ::hx::Val( _hx___shouldCacheHardware_DisplayObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { _hx___type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { _hx___cleared=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { _hx___worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { _hx___roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { _hx___transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { _hx___allowSmoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { _hx___overrideBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { _hx___tempColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { _hx___worldColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__allowSmoothing",cb,42,a6,9c));
	outFields->push(HX_("__blendMode",34,2d,64,3a));
	outFields->push(HX_("__cleared",0c,58,93,2c));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__overrideBlendMode",48,21,da,ac));
	outFields->push(HX_("__roundPixels",fb,ca,70,07));
	outFields->push(HX_("__stage",9e,c3,69,ee));
	outFields->push(HX_("__tempColorTransform",dd,84,da,33));
	outFields->push(HX_("__transparent",32,6c,32,6b));
	outFields->push(HX_("__type",da,55,01,fc));
	outFields->push(HX_("__worldAlpha",cc,d2,d6,c5));
	outFields->push(HX_("__worldColorTransform",5b,ce,21,a3));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___allowSmoothing),HX_("__allowSmoothing",cb,42,a6,9c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___blendMode),HX_("__blendMode",34,2d,64,3a)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___cleared),HX_("__cleared",0c,58,93,2c)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___overrideBlendMode),HX_("__overrideBlendMode",48,21,da,ac)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___roundPixels),HX_("__roundPixels",fb,ca,70,07)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___stage),HX_("__stage",9e,c3,69,ee)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___tempColorTransform),HX_("__tempColorTransform",dd,84,da,33)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___transparent),HX_("__transparent",32,6c,32,6b)},
	{::hx::fsString,(int)offsetof(DisplayObjectRenderer_obj,_hx___type),HX_("__type",da,55,01,fc)},
	{::hx::fsFloat,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldAlpha),HX_("__worldAlpha",cc,d2,d6,c5)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldColorTransform),HX_("__worldColorTransform",5b,ce,21,a3)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectRenderer_obj_sMemberFields[] = {
	HX_("__allowSmoothing",cb,42,a6,9c),
	HX_("__blendMode",34,2d,64,3a),
	HX_("__cleared",0c,58,93,2c),
	HX_("__context",cf,e6,c5,9a),
	HX_("__overrideBlendMode",48,21,da,ac),
	HX_("__roundPixels",fb,ca,70,07),
	HX_("__stage",9e,c3,69,ee),
	HX_("__tempColorTransform",dd,84,da,33),
	HX_("__transparent",32,6c,32,6b),
	HX_("__type",da,55,01,fc),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__getAlpha",08,2a,a6,24),
	HX_("__getColorTransform",9f,af,a3,d2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__renderEvent",c4,35,ee,89),
	HX_("__resize",14,c5,aa,b0),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__shouldCacheHardware",b7,af,f5,89),
	HX_("__shouldCacheHardware_DisplayObject",b9,9c,ad,0b),
	HX_("__updateCacheBitmap",28,11,07,27),
	::String(null()) };

::hx::Class DisplayObjectRenderer_obj::__mClass;

void DisplayObjectRenderer_obj::__register()
{
	DisplayObjectRenderer_obj _hx_dummy;
	DisplayObjectRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectRenderer",5a,1c,ac,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisplayObjectRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_43_boot)
HXDLIN(  43)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__context",cf,e6,c5,9a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__type",da,55,01,fc), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
