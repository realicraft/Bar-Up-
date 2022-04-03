#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_63_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",63,0xe7d70e87)
HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_11_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",11,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_68_upgrade1,"HUD","upgrade1",0xab257acc,"HUD.upgrade1","HUD.hx",68,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_74_upgrade2,"HUD","upgrade2",0xab257acd,"HUD.upgrade2","HUD.hx",74,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_80_upgrade3,"HUD","upgrade3",0xab257ace,"HUD.upgrade3","HUD.hx",80,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_86_upgrade4,"HUD","upgrade4",0xab257acf,"HUD.upgrade4","HUD.hx",86,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_91_upgradesBought,"HUD","upgradesBought",0xc5cce7d9,"HUD.upgradesBought","HUD.hx",91,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_98_updateHUD,"HUD","updateHUD",0xbe04cb97,"HUD.updateHUD","HUD.hx",98,0xe7d70e87)

void HUD_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite sprite){
            			HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_63_new)
HXLINE(  63)			sprite->scrollFactor->set(0,0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_11_new)
HXLINE(  30)		this->upg4_bought = 0;
HXLINE(  29)		this->upg3_bought = 0;
HXLINE(  28)		this->upg2_bought = 0;
HXLINE(  27)		this->upg1_bought = 0;
HXLINE(  34)		super::__construct(null());
HXLINE(  35)		this->border =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,HX_("assets/images/ldjam50_ui_border.png",21,ca,f6,19));
HXLINE(  36)		this->woodCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,76,8,0,HX_("0",30,00,00,00),8,null());
HXLINE(  37)		this->metalCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,108,8,0,HX_("0",30,00,00,00),8,null());
HXLINE(  38)		this->diamondCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,140,8,0,HX_("0",30,00,00,00),8,null());
HXLINE(  39)		this->timeCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,188,8,0,HX_("0:00.00",64,59,d2,bf),8,null());
HXLINE(  40)		this->add(this->border);
HXLINE(  41)		this->add(this->woodCounter);
HXLINE(  42)		this->add(this->metalCounter);
HXLINE(  43)		this->add(this->diamondCounter);
HXLINE(  44)		this->add(this->timeCounter);
HXLINE(  45)		this->bar_bar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,((Float)24.0),((Float)24.0),::flixel::ui::FlxBarFillDirection_obj::BOTTOM_TO_TOP_dyn(),16,192,HX_("",00,00,00,00),HX_("",00,00,00,00),((Float)0.0),((Float)10000.0),null());
HXLINE(  46)		this->bar_bar->createFilledBar(0,-16711936,null(),null());
HXLINE(  47)		this->bar_bar->set_numDivisions(1000);
HXLINE(  48)		this->add(this->bar_bar);
HXLINE(  50)		this->upgrade1_button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,62,212,HX_("Upgrade 1",8d,0f,50,7c),this->upgrade1_dyn());
HXLINE(  51)		this->upgrade2_button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,116,212,HX_("Upgrade 2",8e,0f,50,7c),this->upgrade2_dyn());
HXLINE(  52)		this->upgrade3_button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,170,212,HX_("Upgrade 3",8f,0f,50,7c),this->upgrade3_dyn());
HXLINE(  53)		this->upgrade4_button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,224,212,HX_("Upgrade 4",90,0f,50,7c),this->upgrade4_dyn());
HXLINE(  54)		this->upgrade1_button->loadGraphic(HX_("assets/images/ldjam50_ui_button.png",27,da,52,c9),true,52,24,null(),null());
HXLINE(  55)		this->upgrade2_button->loadGraphic(HX_("assets/images/ldjam50_ui_button.png",27,da,52,c9),true,52,24,null(),null());
HXLINE(  56)		this->upgrade3_button->loadGraphic(HX_("assets/images/ldjam50_ui_button.png",27,da,52,c9),true,52,24,null(),null());
HXLINE(  57)		this->upgrade4_button->loadGraphic(HX_("assets/images/ldjam50_ui_button.png",27,da,52,c9),true,52,24,null(),null());
HXLINE(  58)		this->add(this->upgrade1_button);
HXLINE(  59)		this->add(this->upgrade2_button);
HXLINE(  60)		this->add(this->upgrade3_button);
HXLINE(  61)		this->add(this->upgrade4_button);
HXLINE(  63)		this->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}

Dynamic HUD_obj::__CreateEmpty() { return new HUD_obj; }

void *HUD_obj::_hx_vtable = 0;

Dynamic HUD_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HUD_obj > _hx_result = new HUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HUD_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7edb312b;
	}
}

void HUD_obj::upgrade1(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_68_upgrade1)
HXDLIN(  68)		this->upg1_bought++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,upgrade1,(void))

void HUD_obj::upgrade2(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_74_upgrade2)
HXDLIN(  74)		this->upg2_bought++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,upgrade2,(void))

void HUD_obj::upgrade3(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_80_upgrade3)
HXDLIN(  80)		this->upg3_bought++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,upgrade3,(void))

void HUD_obj::upgrade4(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_86_upgrade4)
HXDLIN(  86)		this->upg4_bought++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,upgrade4,(void))

::Array< int > HUD_obj::upgradesBought(){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_91_upgradesBought)
HXLINE(  92)		::Array< int > upg_assembled = ::Array_obj< int >::__new(4)->init(0,this->upg1_bought)->init(1,this->upg2_bought)->init(2,this->upg3_bought)->init(3,this->upg4_bought);
HXLINE(  93)		this->upg1_bought = (this->upg2_bought = (this->upg3_bought = (this->upg4_bought = 0)));
HXLINE(  94)		return upg_assembled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HUD_obj,upgradesBought,return )

void HUD_obj::updateHUD(int wood,int metal,int diamond,int time,Float bar_val){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_98_updateHUD)
HXLINE(  99)		 ::flixel::text::FlxText _hx_tmp = this->woodCounter;
HXDLIN(  99)		_hx_tmp->set_text(::Std_obj::string(wood));
HXLINE( 100)		 ::flixel::text::FlxText _hx_tmp1 = this->metalCounter;
HXDLIN( 100)		_hx_tmp1->set_text(::Std_obj::string(metal));
HXLINE( 101)		 ::flixel::text::FlxText _hx_tmp2 = this->diamondCounter;
HXDLIN( 101)		_hx_tmp2->set_text(::Std_obj::string(diamond));
HXLINE( 102)		 ::flixel::text::FlxText _hx_tmp3 = this->timeCounter;
HXDLIN( 102)		::String _hx_tmp4 = (::Math_obj::floor((( (Float)(time) ) / ( (Float)(3600) ))) + HX_(":",3a,00,00,00));
HXDLIN( 102)		::String _hx_tmp5 = ((_hx_tmp4 + ::StringTools_obj::lpad(::Std_obj::string(::Math_obj::floor((( (Float)(::hx::Mod(time,3600)) ) / ( (Float)(60) )))),HX_("0",30,00,00,00),2)) + HX_(".",2e,00,00,00));
HXDLIN( 102)		_hx_tmp3->set_text((_hx_tmp5 + ::StringTools_obj::lpad(::Std_obj::string(::Math_obj::floor(( (Float)(::hx::Mod(time,60)) ))),HX_("0",30,00,00,00),2)));
HXLINE( 107)		this->bar_bar->set_value(bar_val);
            	}


HX_DEFINE_DYNAMIC_FUNC5(HUD_obj,updateHUD,(void))


::hx::ObjectPtr< HUD_obj > HUD_obj::__new() {
	::hx::ObjectPtr< HUD_obj > __this = new HUD_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HUD_obj > HUD_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HUD_obj *__this = (HUD_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HUD_obj), true, "HUD"));
	*(void **)__this = HUD_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HUD_obj::HUD_obj()
{
}

void HUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HUD);
	HX_MARK_MEMBER_NAME(playState,"playState");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(woodCounter,"woodCounter");
	HX_MARK_MEMBER_NAME(metalCounter,"metalCounter");
	HX_MARK_MEMBER_NAME(diamondCounter,"diamondCounter");
	HX_MARK_MEMBER_NAME(timeCounter,"timeCounter");
	HX_MARK_MEMBER_NAME(bar_bar,"bar_bar");
	HX_MARK_MEMBER_NAME(upgrade1_button,"upgrade1_button");
	HX_MARK_MEMBER_NAME(upgrade2_button,"upgrade2_button");
	HX_MARK_MEMBER_NAME(upgrade3_button,"upgrade3_button");
	HX_MARK_MEMBER_NAME(upgrade4_button,"upgrade4_button");
	HX_MARK_MEMBER_NAME(upg1_bought,"upg1_bought");
	HX_MARK_MEMBER_NAME(upg2_bought,"upg2_bought");
	HX_MARK_MEMBER_NAME(upg3_bought,"upg3_bought");
	HX_MARK_MEMBER_NAME(upg4_bought,"upg4_bought");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playState,"playState");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(woodCounter,"woodCounter");
	HX_VISIT_MEMBER_NAME(metalCounter,"metalCounter");
	HX_VISIT_MEMBER_NAME(diamondCounter,"diamondCounter");
	HX_VISIT_MEMBER_NAME(timeCounter,"timeCounter");
	HX_VISIT_MEMBER_NAME(bar_bar,"bar_bar");
	HX_VISIT_MEMBER_NAME(upgrade1_button,"upgrade1_button");
	HX_VISIT_MEMBER_NAME(upgrade2_button,"upgrade2_button");
	HX_VISIT_MEMBER_NAME(upgrade3_button,"upgrade3_button");
	HX_VISIT_MEMBER_NAME(upgrade4_button,"upgrade4_button");
	HX_VISIT_MEMBER_NAME(upg1_bought,"upg1_bought");
	HX_VISIT_MEMBER_NAME(upg2_bought,"upg2_bought");
	HX_VISIT_MEMBER_NAME(upg3_bought,"upg3_bought");
	HX_VISIT_MEMBER_NAME(upg4_bought,"upg4_bought");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HUD_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bar_bar") ) { return ::hx::Val( bar_bar ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"upgrade1") ) { return ::hx::Val( upgrade1_dyn() ); }
		if (HX_FIELD_EQ(inName,"upgrade2") ) { return ::hx::Val( upgrade2_dyn() ); }
		if (HX_FIELD_EQ(inName,"upgrade3") ) { return ::hx::Val( upgrade3_dyn() ); }
		if (HX_FIELD_EQ(inName,"upgrade4") ) { return ::hx::Val( upgrade4_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { return ::hx::Val( playState ); }
		if (HX_FIELD_EQ(inName,"updateHUD") ) { return ::hx::Val( updateHUD_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"woodCounter") ) { return ::hx::Val( woodCounter ); }
		if (HX_FIELD_EQ(inName,"timeCounter") ) { return ::hx::Val( timeCounter ); }
		if (HX_FIELD_EQ(inName,"upg1_bought") ) { return ::hx::Val( upg1_bought ); }
		if (HX_FIELD_EQ(inName,"upg2_bought") ) { return ::hx::Val( upg2_bought ); }
		if (HX_FIELD_EQ(inName,"upg3_bought") ) { return ::hx::Val( upg3_bought ); }
		if (HX_FIELD_EQ(inName,"upg4_bought") ) { return ::hx::Val( upg4_bought ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"metalCounter") ) { return ::hx::Val( metalCounter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diamondCounter") ) { return ::hx::Val( diamondCounter ); }
		if (HX_FIELD_EQ(inName,"upgradesBought") ) { return ::hx::Val( upgradesBought_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"upgrade1_button") ) { return ::hx::Val( upgrade1_button ); }
		if (HX_FIELD_EQ(inName,"upgrade2_button") ) { return ::hx::Val( upgrade2_button ); }
		if (HX_FIELD_EQ(inName,"upgrade3_button") ) { return ::hx::Val( upgrade3_button ); }
		if (HX_FIELD_EQ(inName,"upgrade4_button") ) { return ::hx::Val( upgrade4_button ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HUD_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bar_bar") ) { bar_bar=inValue.Cast<  ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playState") ) { playState=inValue.Cast<  ::PlayState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"woodCounter") ) { woodCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeCounter") ) { timeCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upg1_bought") ) { upg1_bought=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upg2_bought") ) { upg2_bought=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upg3_bought") ) { upg3_bought=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upg4_bought") ) { upg4_bought=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"metalCounter") ) { metalCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"diamondCounter") ) { diamondCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"upgrade1_button") ) { upgrade1_button=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upgrade2_button") ) { upgrade2_button=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upgrade3_button") ) { upgrade3_button=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upgrade4_button") ) { upgrade4_button=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("playState",7d,a3,ef,a4));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("woodCounter",4f,c7,b9,00));
	outFields->push(HX_("metalCounter",b5,13,6c,f1));
	outFields->push(HX_("diamondCounter",08,c2,48,b6));
	outFields->push(HX_("timeCounter",6f,56,af,8f));
	outFields->push(HX_("bar_bar",27,8e,99,96));
	outFields->push(HX_("upgrade1_button",1c,fc,20,00));
	outFields->push(HX_("upgrade2_button",3b,6e,53,39));
	outFields->push(HX_("upgrade3_button",5a,e0,85,72));
	outFields->push(HX_("upgrade4_button",79,52,b8,ab));
	outFields->push(HX_("upg1_bought",65,d9,93,ac));
	outFields->push(HX_("upg2_bought",84,4b,c6,e5));
	outFields->push(HX_("upg3_bought",a3,bd,f8,1e));
	outFields->push(HX_("upg4_bought",c2,2f,2b,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HUD_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::PlayState */ ,(int)offsetof(HUD_obj,playState),HX_("playState",7d,a3,ef,a4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HUD_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,woodCounter),HX_("woodCounter",4f,c7,b9,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,metalCounter),HX_("metalCounter",b5,13,6c,f1)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,diamondCounter),HX_("diamondCounter",08,c2,48,b6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,timeCounter),HX_("timeCounter",6f,56,af,8f)},
	{::hx::fsObject /*  ::flixel::ui::FlxBar */ ,(int)offsetof(HUD_obj,bar_bar),HX_("bar_bar",27,8e,99,96)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(HUD_obj,upgrade1_button),HX_("upgrade1_button",1c,fc,20,00)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(HUD_obj,upgrade2_button),HX_("upgrade2_button",3b,6e,53,39)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(HUD_obj,upgrade3_button),HX_("upgrade3_button",5a,e0,85,72)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(HUD_obj,upgrade4_button),HX_("upgrade4_button",79,52,b8,ab)},
	{::hx::fsInt,(int)offsetof(HUD_obj,upg1_bought),HX_("upg1_bought",65,d9,93,ac)},
	{::hx::fsInt,(int)offsetof(HUD_obj,upg2_bought),HX_("upg2_bought",84,4b,c6,e5)},
	{::hx::fsInt,(int)offsetof(HUD_obj,upg3_bought),HX_("upg3_bought",a3,bd,f8,1e)},
	{::hx::fsInt,(int)offsetof(HUD_obj,upg4_bought),HX_("upg4_bought",c2,2f,2b,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HUD_obj_sStaticStorageInfo = 0;
#endif

static ::String HUD_obj_sMemberFields[] = {
	HX_("playState",7d,a3,ef,a4),
	HX_("border",ec,4c,1a,64),
	HX_("woodCounter",4f,c7,b9,00),
	HX_("metalCounter",b5,13,6c,f1),
	HX_("diamondCounter",08,c2,48,b6),
	HX_("timeCounter",6f,56,af,8f),
	HX_("bar_bar",27,8e,99,96),
	HX_("upgrade1_button",1c,fc,20,00),
	HX_("upgrade2_button",3b,6e,53,39),
	HX_("upgrade3_button",5a,e0,85,72),
	HX_("upgrade4_button",79,52,b8,ab),
	HX_("upg1_bought",65,d9,93,ac),
	HX_("upg2_bought",84,4b,c6,e5),
	HX_("upg3_bought",a3,bd,f8,1e),
	HX_("upg4_bought",c2,2f,2b,58),
	HX_("upgrade1",15,54,4c,68),
	HX_("upgrade2",16,54,4c,68),
	HX_("upgrade3",17,54,4c,68),
	HX_("upgrade4",18,54,4c,68),
	HX_("upgradesBought",e2,5d,bb,70),
	HX_("updateHUD",2e,12,dc,82),
	::String(null()) };

::hx::Class HUD_obj::__mClass;

void HUD_obj::__register()
{
	HUD_obj _hx_dummy;
	HUD_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HUD",97,ec,36,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HUD_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HUD_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HUD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HUD_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

