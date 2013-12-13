// This file has been generated by Py++.

#include "cbase.h"
#include "cbase.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/AnimationController.h"
#include "vgui_controls/EditablePanel.h"
#include "vgui_controls/AnalogBar.h"
#include "vgui_controls/Image.h"
#include "vgui_controls/TextImage.h"
#include "vgui_controls/ScrollBar.h"
#include "vgui_controls/ScrollBarSlider.h"
#include "vgui_controls/Menu.h"
#include "vgui_controls/MenuButton.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/TextEntry.h"
#include "vgui_controls/RichText.h"
#include "vgui_controls/Tooltip.h"
#include "vgui/IBorder.h"
#include "vgui_bitmapimage.h"
#include "srcpy_vgui.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "DeadPanel_pypp.hpp"

namespace bp = boost::python;

void register_DeadPanel_class(){

    bp::class_< DeadPanel >( "DeadPanel" )    
        .def( 
            "__nonzero__"
            , (bool (*)(  ))( &::DeadPanel::NonZero ) )    
        .staticmethod( "__nonzero__" );

}
