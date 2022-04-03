#include <hxcpp.h>

#ifndef INCLUDED_Pickup
#include <Pickup.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_825415b08abec13a_8_new,"Pickup","new",0x7fa21c8e,"Pickup.new","Pickup.hx",8,0xe62b2ea2)
static const int _hx_array_data_b3617d9c_1[] = {
	(int)12,(int)12,
};
static const int _hx_array_data_b3617d9c_2[] = {
	(int)13,(int)13,
};
static const int _hx_array_data_b3617d9c_3[] = {
	(int)14,(int)14,
};
static const int _hx_array_data_b3617d9c_4[] = {
	(int)15,(int)15,
};
HX_LOCAL_STACK_FRAME(_hx_pos_825415b08abec13a_25_animate,"Pickup","animate",0xa91fd5cf,"Pickup.animate","Pickup.hx",25,0xe62b2ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_825415b08abec13a_40_update,"Pickup","update",0x67168a9b,"Pickup.update","Pickup.hx",40,0xe62b2ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_825415b08abec13a_46_kill,"Pickup","kill",0x2c3e3bb0,"Pickup.kill","Pickup.hx",46,0xe62b2ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_825415b08abec13a_60_finishKill,"Pickup","finishKill",0x3aa82723,"Pickup.finishKill","Pickup.hx",60,0xe62b2ea2)

void Pickup_obj::__construct(Float x,Float y,int t){
            	HX_STACKFRAME(&_hx_pos_825415b08abec13a_8_new)
HXLINE(  10)		this->pickup_type = 0;
HXLINE(  14)		this->pickup_type = t;
HXLINE(  15)		super::__construct(x,y,null());
HXLINE(  16)		this->loadGraphic(HX_("assets/images/ldjam50_sheet.png",89,d2,78,f4),true,16,16,null(),null());
HXLINE(  17)		this->animation->add(HX_("w",77,00,00,00),::Array_obj< int >::fromData( _hx_array_data_b3617d9c_1,2),30,false,null(),null());
HXLINE(  18)		this->animation->add(HX_("m",6d,00,00,00),::Array_obj< int >::fromData( _hx_array_data_b3617d9c_2,2),30,false,null(),null());
HXLINE(  19)		this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_b3617d9c_3,2),30,false,null(),null());
HXLINE(  20)		this->animation->add(HX_("s",73,00,00,00),::Array_obj< int >::fromData( _hx_array_data_b3617d9c_4,2),30,false,null(),null());
            	}

Dynamic Pickup_obj::__CreateEmpty() { return new Pickup_obj; }

void *Pickup_obj::_hx_vtable = 0;

Dynamic Pickup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pickup_obj > _hx_result = new Pickup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Pickup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x14ac405c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x14ac405c;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Pickup_obj::animate(){
            	HX_STACKFRAME(&_hx_pos_825415b08abec13a_25_animate)
HXDLIN(  25)		switch((int)(this->pickup_type)){
            			case (int)0: {
HXLINE(  28)				this->animation->play(HX_("w",77,00,00,00),null(),null(),null());
            			}
            			break;
            			case (int)1: {
HXLINE(  30)				this->animation->play(HX_("m",6d,00,00,00),null(),null(),null());
            			}
            			break;
            			case (int)2: {
HXLINE(  32)				this->animation->play(HX_("d",64,00,00,00),null(),null(),null());
            			}
            			break;
            			case (int)3: {
HXLINE(  34)				this->animation->play(HX_("s",73,00,00,00),null(),null(),null());
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pickup_obj,animate,(void))

void Pickup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_825415b08abec13a_40_update)
HXLINE(  41)		this->animate();
HXLINE(  42)		this->super::update(elapsed);
            	}


void Pickup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_825415b08abec13a_46_kill)
HXLINE(  47)		this->set_alive(false);
HXLINE(  48)		if ((this->pickup_type != 3)) {
HXLINE(  50)			::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("y",79,00,00,00),(this->y - ( (Float)(16) )))
            				->setFixed(1,HX_("alpha",5e,a7,96,21),0)),((Float)0.33), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->finishKill_dyn())));
            		}
            		else {
HXLINE(  54)			::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("y",79,00,00,00),(this->y + 16))
            				->setFixed(1,HX_("alpha",5e,a7,96,21),0)),((Float)0.33), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->finishKill_dyn())));
            		}
            	}


void Pickup_obj::finishKill( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_825415b08abec13a_60_finishKill)
HXDLIN(  60)		this->set_exists(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pickup_obj,finishKill,(void))


::hx::ObjectPtr< Pickup_obj > Pickup_obj::__new(Float x,Float y,int t) {
	::hx::ObjectPtr< Pickup_obj > __this = new Pickup_obj();
	__this->__construct(x,y,t);
	return __this;
}

::hx::ObjectPtr< Pickup_obj > Pickup_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int t) {
	Pickup_obj *__this = (Pickup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pickup_obj), true, "Pickup"));
	*(void **)__this = Pickup_obj::_hx_vtable;
	__this->__construct(x,y,t);
	return __this;
}

Pickup_obj::Pickup_obj()
{
}

::hx::Val Pickup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"animate") ) { return ::hx::Val( animate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"finishKill") ) { return ::hx::Val( finishKill_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickup_type") ) { return ::hx::Val( pickup_type ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Pickup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"pickup_type") ) { pickup_type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pickup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pickup_type",9d,23,ad,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pickup_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Pickup_obj,pickup_type),HX_("pickup_type",9d,23,ad,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pickup_obj_sStaticStorageInfo = 0;
#endif

static ::String Pickup_obj_sMemberFields[] = {
	HX_("pickup_type",9d,23,ad,84),
	HX_("animate",a1,da,4c,7a),
	HX_("update",09,86,05,87),
	HX_("kill",9e,df,09,47),
	HX_("finishKill",91,71,44,d3),
	::String(null()) };

::hx::Class Pickup_obj::__mClass;

void Pickup_obj::__register()
{
	Pickup_obj _hx_dummy;
	Pickup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Pickup",9c,7d,61,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pickup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pickup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pickup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pickup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

