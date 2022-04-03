#ifndef INCLUDED_openfl_display_FrameScript
#define INCLUDED_openfl_display_FrameScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameScript)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FrameScript_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FrameScript_obj OBJ_;
		FrameScript_obj();

	public:
		enum { _hx_ClassId = 0x120580c6 };

		void __construct( ::Dynamic script,int frame);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.FrameScript")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.FrameScript"); }
		static ::hx::ObjectPtr< FrameScript_obj > __new( ::Dynamic script,int frame);
		static ::hx::ObjectPtr< FrameScript_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic script,int frame);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FrameScript_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FrameScript",f8,b1,da,09); }

		int frame;
		 ::Dynamic script;
		Dynamic script_dyn() { return script;}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_FrameScript */ 
