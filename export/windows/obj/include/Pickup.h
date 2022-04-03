#ifndef INCLUDED_Pickup
#define INCLUDED_Pickup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Pickup)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Pickup_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Pickup_obj OBJ_;
		Pickup_obj();

	public:
		enum { _hx_ClassId = 0x14ac405c };

		void __construct(Float x,Float y,int t);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Pickup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Pickup"); }
		static ::hx::ObjectPtr< Pickup_obj > __new(Float x,Float y,int t);
		static ::hx::ObjectPtr< Pickup_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int t);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pickup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pickup",9c,7d,61,b3); }

		int pickup_type;
		void animate();
		::Dynamic animate_dyn();

		void update(Float elapsed);

		void kill();

		void finishKill( ::flixel::tweens::FlxTween _);
		::Dynamic finishKill_dyn();

};


#endif /* INCLUDED_Pickup */ 
