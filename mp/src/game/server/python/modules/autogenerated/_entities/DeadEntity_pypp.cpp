// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "DeadEntity_pypp.hpp"

namespace bp = boost::python;

void register_DeadEntity_class(){

    bp::class_< DeadEntity >( "DeadEntity" )    
        .def( 
            "__nonzero__"
            , (bool ( ::DeadEntity::* )(  ) )( &::DeadEntity::NonZero ) );

}

