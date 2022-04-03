#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_355a0122fee6f514_45_new,"flixel.addons.tile.FlxTileAnimation","new",0xe5f9218d,"flixel.addons.tile.FlxTileAnimation.new","flixel/addons/tile/FlxTileAnimation.hx",45,0xcddc8542)
HX_LOCAL_STACK_FRAME(_hx_pos_355a0122fee6f514_57_destroy,"flixel.addons.tile.FlxTileAnimation","destroy",0x9eb018a7,"flixel.addons.tile.FlxTileAnimation.destroy","flixel/addons/tile/FlxTileAnimation.hx",57,0xcddc8542)
HX_LOCAL_STACK_FRAME(_hx_pos_355a0122fee6f514_63_set_frameRate,"flixel.addons.tile.FlxTileAnimation","set_frameRate",0x8c7c32fd,"flixel.addons.tile.FlxTileAnimation.set_frameRate","flixel/addons/tile/FlxTileAnimation.hx",63,0xcddc8542)
namespace flixel{
namespace addons{
namespace tile{

void FlxTileAnimation_obj::__construct(::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData){
            		Float FrameRate = __o_FrameRate.Default(0);
            		bool Looped = __o_Looped.Default(true);
            	HX_STACKFRAME(&_hx_pos_355a0122fee6f514_45_new)
HXLINE(  46)		this->name = Name;
HXLINE(  47)		this->set_frameRate(FrameRate);
HXLINE(  48)		this->frames = Frames;
HXLINE(  49)		this->looped = Looped;
HXLINE(  50)		this->framesData = FramesData;
            	}

Dynamic FlxTileAnimation_obj::__CreateEmpty() { return new FlxTileAnimation_obj; }

void *FlxTileAnimation_obj::_hx_vtable = 0;

Dynamic FlxTileAnimation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTileAnimation_obj > _hx_result = new FlxTileAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxTileAnimation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28dc5aa5;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_tile_FlxTileAnimation__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::tile::FlxTileAnimation_obj::destroy,
};

void *FlxTileAnimation_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_tile_FlxTileAnimation__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTileAnimation_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_355a0122fee6f514_57_destroy)
HXLINE(  58)		this->frames = null();
HXLINE(  59)		this->framesData = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTileAnimation_obj,destroy,(void))

Float FlxTileAnimation_obj::set_frameRate(Float value){
            	HX_STACKFRAME(&_hx_pos_355a0122fee6f514_63_set_frameRate)
HXLINE(  64)		this->delay = ( (Float)(0) );
HXLINE(  65)		this->frameRate = value;
HXLINE(  66)		if ((value > 0)) {
HXLINE(  68)			this->delay = (((Float)1.0) / value);
            		}
HXLINE(  70)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTileAnimation_obj,set_frameRate,return )


::hx::ObjectPtr< FlxTileAnimation_obj > FlxTileAnimation_obj::__new(::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData) {
	::hx::ObjectPtr< FlxTileAnimation_obj > __this = new FlxTileAnimation_obj();
	__this->__construct(Name,Frames,__o_FrameRate,__o_Looped,FramesData);
	return __this;
}

::hx::ObjectPtr< FlxTileAnimation_obj > FlxTileAnimation_obj::__alloc(::hx::Ctx *_hx_ctx,::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData) {
	FlxTileAnimation_obj *__this = (FlxTileAnimation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTileAnimation_obj), true, "flixel.addons.tile.FlxTileAnimation"));
	*(void **)__this = FlxTileAnimation_obj::_hx_vtable;
	__this->__construct(Name,Frames,__o_FrameRate,__o_Looped,FramesData);
	return __this;
}

FlxTileAnimation_obj::FlxTileAnimation_obj()
{
}

void FlxTileAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileAnimation);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_END_CLASS();
}

void FlxTileAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
}

::hx::Val FlxTileAnimation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"looped") ) { return ::hx::Val( looped ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesData") ) { return ::hx::Val( framesData ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return ::hx::Val( set_frameRate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTileAnimation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameRate(inValue.Cast< Float >()) );frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("looped",c3,5f,b9,61));
	outFields->push(HX_("framesData",f0,fc,49,b4));
	outFields->push(HX_("frameRate",ad,11,25,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTileAnimation_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxTileAnimation_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(FlxTileAnimation_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTileAnimation_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsBool,(int)offsetof(FlxTileAnimation_obj,looped),HX_("looped",c3,5f,b9,61)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTileAnimation_obj,framesData),HX_("framesData",f0,fc,49,b4)},
	{::hx::fsFloat,(int)offsetof(FlxTileAnimation_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTileAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTileAnimation_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("delay",83,d7,26,d7),
	HX_("frames",a6,af,85,ac),
	HX_("looped",c3,5f,b9,61),
	HX_("framesData",f0,fc,49,b4),
	HX_("frameRate",ad,11,25,39),
	HX_("destroy",fa,2c,86,24),
	HX_("set_frameRate",90,c7,8e,3f),
	::String(null()) };

::hx::Class FlxTileAnimation_obj::__mClass;

void FlxTileAnimation_obj::__register()
{
	FlxTileAnimation_obj _hx_dummy;
	FlxTileAnimation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.tile.FlxTileAnimation",1b,57,f4,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTileAnimation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTileAnimation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTileAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTileAnimation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile
