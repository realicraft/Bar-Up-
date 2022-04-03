#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_system_FlxLinkedList
#include <flixel/system/FlxLinkedList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b10ff5d8533aa49f_67_new,"flixel.system.FlxLinkedList","new",0xf2c6bf4e,"flixel.system.FlxLinkedList.new","flixel/system/FlxLinkedList.hx",67,0xa1edd602)
HX_LOCAL_STACK_FRAME(_hx_pos_b10ff5d8533aa49f_78_destroy,"flixel.system.FlxLinkedList","destroy",0x9f662ae8,"flixel.system.FlxLinkedList.destroy","flixel/system/FlxLinkedList.hx",78,0xa1edd602)
HX_LOCAL_STACK_FRAME(_hx_pos_b10ff5d8533aa49f_26_recycle,"flixel.system.FlxLinkedList","recycle",0xb26c0e01,"flixel.system.FlxLinkedList.recycle","flixel/system/FlxLinkedList.hx",26,0xa1edd602)
HX_LOCAL_STACK_FRAME(_hx_pos_b10ff5d8533aa49f_45_clearCache,"flixel.system.FlxLinkedList","clearCache",0x48ebc447,"flixel.system.FlxLinkedList.clearCache","flixel/system/FlxLinkedList.hx",45,0xa1edd602)
HX_LOCAL_STACK_FRAME(_hx_pos_b10ff5d8533aa49f_17_boot,"flixel.system.FlxLinkedList","boot",0x7339a584,"flixel.system.FlxLinkedList.boot","flixel/system/FlxLinkedList.hx",17,0xa1edd602)
namespace flixel{
namespace _hx_system{

void FlxLinkedList_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b10ff5d8533aa49f_67_new)
HXDLIN(  67)		this->exists = true;
            	}

Dynamic FlxLinkedList_obj::__CreateEmpty() { return new FlxLinkedList_obj; }

void *FlxLinkedList_obj::_hx_vtable = 0;

Dynamic FlxLinkedList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxLinkedList_obj > _hx_result = new FlxLinkedList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxLinkedList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f1bcf5a;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_system_FlxLinkedList__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::_hx_system::FlxLinkedList_obj::destroy,
};

void *FlxLinkedList_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_system_FlxLinkedList__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxLinkedList_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b10ff5d8533aa49f_78_destroy)
HXLINE(  80)		if (!(this->exists)) {
HXLINE(  81)			return;
            		}
HXLINE(  83)		this->object = null();
HXLINE(  84)		if (::hx::IsNotNull( this->next )) {
HXLINE(  86)			this->next->destroy();
            		}
HXLINE(  88)		this->exists = false;
HXLINE(  91)		this->next = ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead;
HXLINE(  92)		::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  93)		::flixel::_hx_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,destroy,(void))

int FlxLinkedList_obj::_NUM_CACHED_FLX_LIST;

 ::flixel::_hx_system::FlxLinkedList FlxLinkedList_obj::_cachedListsHead;

 ::flixel::_hx_system::FlxLinkedList FlxLinkedList_obj::recycle(){
            	HX_GC_STACKFRAME(&_hx_pos_b10ff5d8533aa49f_26_recycle)
HXDLIN(  26)		if (::hx::IsNotNull( ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead )) {
HXLINE(  28)			 ::flixel::_hx_system::FlxLinkedList cachedList = ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead;
HXLINE(  29)			::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead = ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead->next;
HXLINE(  30)			::flixel::_hx_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST--;
HXLINE(  32)			cachedList->exists = true;
HXLINE(  33)			cachedList->next = null();
HXLINE(  34)			return cachedList;
            		}
            		else {
HXLINE(  37)			return  ::flixel::_hx_system::FlxLinkedList_obj::__alloc( HX_CTX );
            		}
HXLINE(  26)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,recycle,return )

void FlxLinkedList_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_b10ff5d8533aa49f_45_clearCache)
HXLINE(  47)		while(::hx::IsNotNull( ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead )){
HXLINE(  49)			 ::flixel::_hx_system::FlxLinkedList node = ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead;
HXLINE(  50)			::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead = ::flixel::_hx_system::FlxLinkedList_obj::_cachedListsHead->next;
HXLINE(  51)			node->object = null();
HXLINE(  52)			node->next = null();
            		}
HXLINE(  54)		::flixel::_hx_system::FlxLinkedList_obj::_NUM_CACHED_FLX_LIST = 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLinkedList_obj,clearCache,(void))


::hx::ObjectPtr< FlxLinkedList_obj > FlxLinkedList_obj::__new() {
	::hx::ObjectPtr< FlxLinkedList_obj > __this = new FlxLinkedList_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxLinkedList_obj > FlxLinkedList_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxLinkedList_obj *__this = (FlxLinkedList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxLinkedList_obj), true, "flixel.system.FlxLinkedList"));
	*(void **)__this = FlxLinkedList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxLinkedList_obj::FlxLinkedList_obj()
{
}

void FlxLinkedList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxLinkedList);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void FlxLinkedList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

::hx::Val FlxLinkedList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( object ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxLinkedList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { outValue = ( _cachedListsHead ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { outValue = ( _NUM_CACHED_FLX_LIST ); return true; }
	}
	return false;
}

::hx::Val FlxLinkedList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxLinkedList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=ioValue.Cast<  ::flixel::_hx_system::FlxLinkedList >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxLinkedList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("object",bf,7e,3f,15));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("exists",dc,1d,e0,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxLinkedList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(FlxLinkedList_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(int)offsetof(FlxLinkedList_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsBool,(int)offsetof(FlxLinkedList_obj,exists),HX_("exists",dc,1d,e0,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxLinkedList_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,HX_("_NUM_CACHED_FLX_LIST",90,95,35,46)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxLinkedList */ ,(void *) &FlxLinkedList_obj::_cachedListsHead,HX_("_cachedListsHead",54,10,c6,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxLinkedList_obj_sMemberFields[] = {
	HX_("object",bf,7e,3f,15),
	HX_("next",f3,84,02,49),
	HX_("exists",dc,1d,e0,bf),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void FlxLinkedList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxLinkedList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxLinkedList_obj::_cachedListsHead,"_cachedListsHead");
};

#endif

::hx::Class FlxLinkedList_obj::__mClass;

static ::String FlxLinkedList_obj_sStaticFields[] = {
	HX_("_NUM_CACHED_FLX_LIST",90,95,35,46),
	HX_("_cachedListsHead",54,10,c6,7b),
	HX_("recycle",13,10,8c,37),
	HX_("clearCache",75,d9,1e,16),
	::String(null())
};

void FlxLinkedList_obj::__register()
{
	FlxLinkedList_obj _hx_dummy;
	FlxLinkedList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxLinkedList",5c,c0,4d,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxLinkedList_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxLinkedList_obj::__SetStatic;
	__mClass->mMarkFunc = FlxLinkedList_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxLinkedList_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxLinkedList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxLinkedList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxLinkedList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxLinkedList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxLinkedList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxLinkedList_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b10ff5d8533aa49f_17_boot)
HXDLIN(  17)		_NUM_CACHED_FLX_LIST = 0;
            	}
}

} // end namespace flixel
} // end namespace system
