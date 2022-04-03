#ifndef INCLUDED_flixel_util_FlxAxes
#define INCLUDED_flixel_util_FlxAxes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxAxes)
namespace flixel{
namespace util{


class FlxAxes_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxAxes_obj OBJ_;

	public:
		FlxAxes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.util.FlxAxes",7d,ff,79,b0); }
		::String __ToString() const { return HX_("FlxAxes.",b7,f1,56,e6) + _hx_tag; }

		static ::flixel::util::FlxAxes X;
		static inline ::flixel::util::FlxAxes X_dyn() { return X; }
		static ::flixel::util::FlxAxes XY;
		static inline ::flixel::util::FlxAxes XY_dyn() { return XY; }
		static ::flixel::util::FlxAxes Y;
		static inline ::flixel::util::FlxAxes Y_dyn() { return Y; }
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxAxes */ 
