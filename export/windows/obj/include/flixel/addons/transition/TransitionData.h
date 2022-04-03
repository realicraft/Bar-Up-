#ifndef INCLUDED_flixel_addons_transition_TransitionData
#define INCLUDED_flixel_addons_transition_TransitionData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES TransitionData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TransitionData_obj OBJ_;
		TransitionData_obj();

	public:
		enum { _hx_ClassId = 0x5a19fee3 };

		void __construct(::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.TransitionData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.TransitionData"); }
		static ::hx::ObjectPtr< TransitionData_obj > __new(::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region);
		static ::hx::ObjectPtr< TransitionData_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_TransType,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Duration, ::flixel::math::FlxPoint Direction, ::Dynamic TileData, ::flixel::math::FlxRect Region);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransitionData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TransitionData",7f,92,40,fe); }

		::String type;
		 ::Dynamic tileData;
		int color;
		Float duration;
		 ::flixel::math::FlxPoint direction;
		 ::Dynamic tweenOptions;
		 ::flixel::math::FlxRect region;
		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_TransitionData */ 