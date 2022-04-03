#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasSimpleButton
#include <openfl/display/_internal/CanvasSimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f4efa2cf556ee2e7_7_renderDrawable,"openfl.display._internal.CanvasSimpleButton","renderDrawable",0xdde3fe0a,"openfl.display._internal.CanvasSimpleButton.renderDrawable","openfl/display/_internal/CanvasSimpleButton.hx",7,0xc72116a3)
HX_LOCAL_STACK_FRAME(_hx_pos_f4efa2cf556ee2e7_27_renderDrawableMask,"openfl.display._internal.CanvasSimpleButton","renderDrawableMask",0xc7ec3816,"openfl.display._internal.CanvasSimpleButton.renderDrawableMask","openfl/display/_internal/CanvasSimpleButton.hx",27,0xc72116a3)
namespace openfl{
namespace display{
namespace _internal{

void CanvasSimpleButton_obj::__construct() { }

Dynamic CanvasSimpleButton_obj::__CreateEmpty() { return new CanvasSimpleButton_obj; }

void *CanvasSimpleButton_obj::_hx_vtable = 0;

Dynamic CanvasSimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasSimpleButton_obj > _hx_result = new CanvasSimpleButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasSimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73110686;
}

void CanvasSimpleButton_obj::renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f4efa2cf556ee2e7_7_renderDrawable)
HXLINE(   8)		bool _hx_tmp;
HXDLIN(   8)		bool _hx_tmp1;
HXDLIN(   8)		if (simpleButton->_hx___renderable) {
HXLINE(   8)			_hx_tmp1 = (simpleButton->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(   8)			_hx_tmp1 = true;
            		}
HXDLIN(   8)		if (!(_hx_tmp1)) {
HXLINE(   8)			_hx_tmp = ::hx::IsNull( simpleButton->_hx___currentState );
            		}
            		else {
HXLINE(   8)			_hx_tmp = true;
            		}
HXDLIN(   8)		if (_hx_tmp) {
HXLINE(   8)			return;
            		}
HXLINE(  11)		renderer->_hx___pushMaskObject(simpleButton,null());
HXLINE(  12)		renderer->_hx___renderDrawable(simpleButton->_hx___currentState);
HXLINE(  13)		renderer->_hx___popMaskObject(simpleButton,null());
HXLINE(  15)		renderer->_hx___renderEvent(simpleButton);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasSimpleButton_obj,renderDrawable,(void))

void CanvasSimpleButton_obj::renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f4efa2cf556ee2e7_27_renderDrawableMask)
HXDLIN(  27)		renderer->_hx___renderDrawableMask(simpleButton->_hx___currentState);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasSimpleButton_obj,renderDrawableMask,(void))


CanvasSimpleButton_obj::CanvasSimpleButton_obj()
{
}

bool CanvasSimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasSimpleButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasSimpleButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasSimpleButton_obj::__mClass;

static ::String CanvasSimpleButton_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasSimpleButton_obj::__register()
{
	CanvasSimpleButton_obj _hx_dummy;
	CanvasSimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasSimpleButton",b8,5e,1a,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasSimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasSimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasSimpleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasSimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasSimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
