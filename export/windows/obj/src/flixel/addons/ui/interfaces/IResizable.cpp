#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IResizable_obj_sMemberFields[] = {
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class IResizable_obj::__mClass;

void IResizable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IResizable",65,c4,ba,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IResizable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x194a3c9f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
