#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#define INCLUDED_flixel_addons_tile_FlxTileAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,tile,FlxTileAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxTileAnimation_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTileAnimation_obj OBJ_;
		FlxTileAnimation_obj();

	public:
		enum { _hx_ClassId = 0x28dc5aa5 };

		void __construct(::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.tile.FlxTileAnimation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.tile.FlxTileAnimation"); }
		static ::hx::ObjectPtr< FlxTileAnimation_obj > __new(::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData);
		static ::hx::ObjectPtr< FlxTileAnimation_obj > __alloc(::hx::Ctx *_hx_ctx,::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::cpp::VirtualArray FramesData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTileAnimation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTileAnimation",44,36,7d,95); }

		::String name;
		Float delay;
		::Array< int > frames;
		bool looped;
		::cpp::VirtualArray framesData;
		Float frameRate;
		void destroy();
		::Dynamic destroy_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace tile

#endif /* INCLUDED_flixel_addons_tile_FlxTileAnimation */ 
