// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "nav_area.h"
#include "AI_Criteria.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iservervehicle.h"
#include "gib.h"
#include "filters.h"
#include "player_resource.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "CTriggerMultiple_pypp.hpp"

namespace bp = boost::python;

struct CTriggerMultiple_wrapper : CTriggerMultiple, bp::wrapper< CTriggerMultiple > {

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( CTriggerMultiple, Spawn )
        PY_OVERRIDE_LOG( _entities, CTriggerMultiple, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CTriggerMultiple::Spawn(  );
            }
        else
            this->CTriggerMultiple::Spawn(  );
    }
    
    void default_Spawn(  ) {
        CTriggerMultiple::Spawn( );
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, Activate )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseTrigger::Activate(  );
            }
        else
            this->CBaseTrigger::Activate(  );
    }
    
    void default_Activate(  ) {
        CBaseTrigger::Activate( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        PY_OVERRIDE_CHECK( CBaseEntity, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pWorldMins), boost::python::ptr(pWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
            }
        else
            this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::CreateVPhysics(  );
            }
        else
            return this->CBaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return CBaseEntity::CreateVPhysics( );
    }

    virtual void DeathNotice( ::CBaseEntity * pVictim ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DeathNotice )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DeathNotice )
        bp::override func_DeathNotice = this->get_override( "DeathNotice" );
        if( func_DeathNotice.ptr() != Py_None )
            try {
                func_DeathNotice( pVictim ? pVictim->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DeathNotice( pVictim );
            }
        else
            this->CBaseEntity::DeathNotice( pVictim );
    }
    
    void default_DeathNotice( ::CBaseEntity * pVictim ) {
        CBaseEntity::DeathNotice( pVictim );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->CBaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        CBaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void DrawDebugGeometryOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DrawDebugGeometryOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DrawDebugGeometryOverlays )
        bp::override func_DrawDebugGeometryOverlays = this->get_override( "DrawDebugGeometryOverlays" );
        if( func_DrawDebugGeometryOverlays.ptr() != Py_None )
            try {
                func_DrawDebugGeometryOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DrawDebugGeometryOverlays(  );
            }
        else
            this->CBaseEntity::DrawDebugGeometryOverlays(  );
    }
    
    void default_DrawDebugGeometryOverlays(  ) {
        CBaseEntity::DrawDebugGeometryOverlays( );
    }

    virtual int DrawDebugTextOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, DrawDebugTextOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, DrawDebugTextOverlays )
        bp::override func_DrawDebugTextOverlays = this->get_override( "DrawDebugTextOverlays" );
        if( func_DrawDebugTextOverlays.ptr() != Py_None )
            try {
                return func_DrawDebugTextOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseTrigger::DrawDebugTextOverlays(  );
            }
        else
            return this->CBaseTrigger::DrawDebugTextOverlays(  );
    }
    
    int default_DrawDebugTextOverlays(  ) {
        return CBaseTrigger::DrawDebugTextOverlays( );
    }

    virtual void EndTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, EndTouch )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseTrigger::EndTouch( pOther );
            }
        else
            this->CBaseTrigger::EndTouch( pOther );
    }
    
    void default_EndTouch( ::CBaseEntity * pOther ) {
        CBaseTrigger::EndTouch( pOther );
    }

    virtual void Event_Killed( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Event_Killed )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Event_Killed )
        bp::override func_Event_Killed = this->get_override( "Event_Killed" );
        if( func_Event_Killed.ptr() != Py_None )
            try {
                func_Event_Killed( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Event_Killed( info );
            }
        else
            this->CBaseEntity::Event_Killed( info );
    }
    
    void default_Event_Killed( ::CTakeDamageInfo const & info ) {
        CBaseEntity::Event_Killed( info );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::GetTracerType(  );
            }
        else
            return this->CBaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return CBaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return CBaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( CBaseToggle, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseToggle, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseToggle::KeyValue( szKeyName, szValue );
            }
        else
            return this->CBaseToggle::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return CBaseToggle::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector vec ) {
        PY_OVERRIDE_CHECK( CBaseToggle, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseToggle, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, vec );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseToggle::KeyValue( szKeyName, vec );
            }
        else
            return this->CBaseToggle::KeyValue( szKeyName, vec );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector vec ) {
        return CBaseToggle::KeyValue( szKeyName, vec );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( CBaseToggle, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseToggle, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseToggle::KeyValue( szKeyName, flValue );
            }
        else
            return this->CBaseToggle::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return CBaseToggle::KeyValue( szKeyName, flValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        PY_OVERRIDE_CHECK( CBaseEntity, ModifyOrAppendCriteria )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, ModifyOrAppendCriteria )
        bp::override func_ModifyOrAppendCriteria = this->get_override( "ModifyOrAppendCriteria" );
        if( func_ModifyOrAppendCriteria.ptr() != Py_None )
            try {
                func_ModifyOrAppendCriteria( boost::ref(set) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::ModifyOrAppendCriteria( set );
            }
        else
            this->CBaseEntity::ModifyOrAppendCriteria( set );
    }
    
    void default_ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        CBaseEntity::ModifyOrAppendCriteria( set );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, OnRestore )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::OnRestore(  );
            }
        else
            this->CBaseEntity::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        CBaseEntity::OnRestore( );
    }

    virtual int OnTakeDamage( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, OnTakeDamage )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, OnTakeDamage )
        bp::override func_OnTakeDamage = this->get_override( "OnTakeDamage" );
        if( func_OnTakeDamage.ptr() != Py_None )
            try {
                return func_OnTakeDamage( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::OnTakeDamage( info );
            }
        else
            return this->CBaseEntity::OnTakeDamage( info );
    }
    
    int default_OnTakeDamage( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::OnTakeDamage( info );
    }

    virtual bool PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PassesDamageFilter )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PassesDamageFilter )
        bp::override func_PassesDamageFilter = this->get_override( "PassesDamageFilter" );
        if( func_PassesDamageFilter.ptr() != Py_None )
            try {
                return func_PassesDamageFilter( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::PassesDamageFilter( info );
            }
        else
            return this->CBaseEntity::PassesDamageFilter( info );
    }
    
    bool default_PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::PassesDamageFilter( info );
    }

    virtual void PostClientActive(  ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, PostClientActive )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, PostClientActive )
        bp::override func_PostClientActive = this->get_override( "PostClientActive" );
        if( func_PostClientActive.ptr() != Py_None )
            try {
                func_PostClientActive(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseTrigger::PostClientActive(  );
            }
        else
            this->CBaseTrigger::PostClientActive(  );
    }
    
    void default_PostClientActive(  ) {
        CBaseTrigger::PostClientActive( );
    }

    virtual void PostConstructor( char const * szClassname ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PostConstructor )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PostConstructor )
        bp::override func_PostConstructor = this->get_override( "PostConstructor" );
        if( func_PostConstructor.ptr() != Py_None )
            try {
                func_PostConstructor( szClassname );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::PostConstructor( szClassname );
            }
        else
            this->CBaseEntity::PostConstructor( szClassname );
    }
    
    void default_PostConstructor( char const * szClassname ) {
        CBaseEntity::PostConstructor( szClassname );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Precache )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Precache(  );
            }
        else
            this->CBaseEntity::Precache(  );
    }
    
    void default_Precache(  ) {
        CBaseEntity::Precache( );
    }

    virtual void StartTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, StartTouch )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseTrigger::StartTouch( pOther );
            }
        else
            this->CBaseTrigger::StartTouch( pOther );
    }
    
    void default_StartTouch( ::CBaseEntity * pOther ) {
        CBaseTrigger::StartTouch( pOther );
    }

    virtual void StopLoopingSounds(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, StopLoopingSounds )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, StopLoopingSounds )
        bp::override func_StopLoopingSounds = this->get_override( "StopLoopingSounds" );
        if( func_StopLoopingSounds.ptr() != Py_None )
            try {
                func_StopLoopingSounds(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::StopLoopingSounds(  );
            }
        else
            this->CBaseEntity::StopLoopingSounds(  );
    }
    
    void default_StopLoopingSounds(  ) {
        CBaseEntity::StopLoopingSounds( );
    }

    void TraceAttack( ::CTakeDamageInfo const & info, ::Vector const & vecDir, ::trace_t * ptr, ::CDmgAccumulator * pAccumulator=0 ){
        CBaseEntity::TraceAttack( info, vecDir, ptr, pAccumulator );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( CBaseTrigger, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, CBaseTrigger, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseTrigger::UpdateOnRemove(  );
            }
        else
            this->CBaseTrigger::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        CBaseTrigger::UpdateOnRemove( );
    }

    virtual int UpdateTransmitState(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, UpdateTransmitState )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, UpdateTransmitState )
        bp::override func_UpdateTransmitState = this->get_override( "UpdateTransmitState" );
        if( func_UpdateTransmitState.ptr() != Py_None )
            try {
                return func_UpdateTransmitState(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::UpdateTransmitState(  );
            }
        else
            return this->CBaseEntity::UpdateTransmitState(  );
    }
    
    int default_UpdateTransmitState(  ) {
        return CBaseEntity::UpdateTransmitState( );
    }

    virtual void VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        PY_OVERRIDE_CHECK( CBaseEntity, VPhysicsCollision )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, VPhysicsCollision )
        bp::override func_VPhysicsCollision = this->get_override( "VPhysicsCollision" );
        if( func_VPhysicsCollision.ptr() != Py_None )
            try {
                func_VPhysicsCollision( index, boost::python::ptr(pEvent) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::VPhysicsCollision( index, pEvent );
            }
        else
            this->CBaseEntity::VPhysicsCollision( index, pEvent );
    }
    
    void default_VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        CBaseEntity::VPhysicsCollision( index, pEvent );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ServerClass* GetServerClass() {
#if defined(_WIN32)
#if defined(_DEBUG)
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
#elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "GetServerClass: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
#endif // _DEBUG/PY_CHECKTHREADID
#endif // _WIN32
#if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling GetServerClass(  ) of Class: CBaseEntity\n");
#endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        ServerClass *pServerClass = SrcPySystem()->Get<ServerClass *>( "pyServerClass", GetPyInstance(), NULL, true );
        if( pServerClass )
            return pServerClass;
        return CBaseEntity::GetServerClass();
    }

    static int m_lifeState_Get( CTriggerMultiple const & inst ) { return inst.m_lifeState.Get(); }

    static void m_lifeState_Set( CTriggerMultiple & inst, int val ) { inst.m_lifeState.Set( val ); }

    static int m_takedamage_Get( CTriggerMultiple const & inst ) { return inst.m_takedamage.Get(); }

    static void m_takedamage_Set( CTriggerMultiple & inst, int val ) { inst.m_takedamage.Set( val ); }

};

void register_CTriggerMultiple_class(){

    bp::class_< CTriggerMultiple_wrapper, bp::bases< CBaseTrigger >, boost::noncopyable >( "CTriggerMultiple", bp::no_init )    
        .def( 
            "ActivateMultiTrigger"
            , (void ( ::CTriggerMultiple::* )( ::CBaseEntity * ) )( &::CTriggerMultiple::ActivateMultiTrigger )
            , ( bp::arg("pActivator") ) )    
        .def( 
            "MultiTouch"
            , (void ( ::CTriggerMultiple::* )( ::CBaseEntity * ) )( &::CTriggerMultiple::MultiTouch )
            , ( bp::arg("pOther") ) )    
        .def( 
            "MultiWaitOver"
            , (void ( ::CTriggerMultiple::* )(  ) )( &::CTriggerMultiple::MultiWaitOver ) )    
        .def( 
            "Spawn"
            , (void ( ::CTriggerMultiple::* )(  ) )(&::CTriggerMultiple::Spawn)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_Spawn) )    
        .def( 
            "Activate"
            , (void ( ::CBaseTrigger::* )(  ) )(&::CBaseTrigger::Activate)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_Activate) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::CBaseEntity::* )( ::Vector *,::Vector * ) )(&::CBaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( CTriggerMultiple_wrapper::* )( ::Vector *,::Vector * ) )(&CTriggerMultiple_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pWorldMins"), bp::arg("pWorldMaxs") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::CreateVPhysics)
            , (bool ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_CreateVPhysics) )    
        .def( 
            "DeathNotice"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::DeathNotice)
            , (void ( CTriggerMultiple_wrapper::* )( ::CBaseEntity * ) )(&CTriggerMultiple_wrapper::default_DeathNotice)
            , ( bp::arg("pVictim") ) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::CBaseEntity::* )( ::trace_t &,int ) )(&::CBaseEntity::DoImpactEffect)
            , (void ( CTriggerMultiple_wrapper::* )( ::trace_t &,int ) )(&CTriggerMultiple_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "DrawDebugGeometryOverlays"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::DrawDebugGeometryOverlays)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_DrawDebugGeometryOverlays) )    
        .def( 
            "DrawDebugTextOverlays"
            , (int ( ::CBaseTrigger::* )(  ) )(&::CBaseTrigger::DrawDebugTextOverlays)
            , (int ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_DrawDebugTextOverlays) )    
        .def( 
            "EndTouch"
            , (void ( ::CBaseTrigger::* )( ::CBaseEntity * ) )(&::CBaseTrigger::EndTouch)
            , (void ( CTriggerMultiple_wrapper::* )( ::CBaseEntity * ) )(&CTriggerMultiple_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "Event_Killed"
            , (void ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_Killed)
            , (void ( CTriggerMultiple_wrapper::* )( ::CTakeDamageInfo const & ) )(&CTriggerMultiple_wrapper::default_Event_Killed)
            , ( bp::arg("info") ) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::GetTracerType)
            , (char const * ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,::Vector const & ) )(&::CBaseEntity::KeyValue)
            , (bool ( CTriggerMultiple_wrapper::* )( char const *,::Vector const & ) )(&CTriggerMultiple_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseToggle::* )( char const *,char const * ) )(&::CBaseToggle::KeyValue)
            , (bool ( CTriggerMultiple_wrapper::* )( char const *,char const * ) )(&CTriggerMultiple_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseToggle::* )( char const *,::Vector ) )(&::CBaseToggle::KeyValue)
            , (bool ( CTriggerMultiple_wrapper::* )( char const *,::Vector ) )(&CTriggerMultiple_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vec") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseToggle::* )( char const *,float ) )(&::CBaseToggle::KeyValue)
            , (bool ( CTriggerMultiple_wrapper::* )( char const *,float ) )(&CTriggerMultiple_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::CBaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::CBaseEntity::MakeTracer)
            , (void ( CTriggerMultiple_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&CTriggerMultiple_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "ModifyOrAppendCriteria"
            , (void ( ::CBaseEntity::* )( ::AI_CriteriaSet & ) )(&::CBaseEntity::ModifyOrAppendCriteria)
            , (void ( CTriggerMultiple_wrapper::* )( ::AI_CriteriaSet & ) )(&CTriggerMultiple_wrapper::default_ModifyOrAppendCriteria)
            , ( bp::arg("set") ) )    
        .def( 
            "OnRestore"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::OnRestore)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_OnRestore) )    
        .def( 
            "OnTakeDamage"
            , (int ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::OnTakeDamage)
            , (int ( CTriggerMultiple_wrapper::* )( ::CTakeDamageInfo const & ) )(&CTriggerMultiple_wrapper::default_OnTakeDamage)
            , ( bp::arg("info") ) )    
        .def( 
            "PassesDamageFilter"
            , (bool ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::PassesDamageFilter)
            , (bool ( CTriggerMultiple_wrapper::* )( ::CTakeDamageInfo const & ) )(&CTriggerMultiple_wrapper::default_PassesDamageFilter)
            , ( bp::arg("info") ) )    
        .def( 
            "PostClientActive"
            , (void ( ::CBaseTrigger::* )(  ) )(&::CBaseTrigger::PostClientActive)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_PostClientActive) )    
        .def( 
            "PostConstructor"
            , (void ( ::CBaseEntity::* )( char const * ) )(&::CBaseEntity::PostConstructor)
            , (void ( CTriggerMultiple_wrapper::* )( char const * ) )(&CTriggerMultiple_wrapper::default_PostConstructor)
            , ( bp::arg("szClassname") ) )    
        .def( 
            "Precache"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::Precache)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_Precache) )    
        .def( 
            "StartTouch"
            , (void ( ::CBaseTrigger::* )( ::CBaseEntity * ) )(&::CBaseTrigger::StartTouch)
            , (void ( CTriggerMultiple_wrapper::* )( ::CBaseEntity * ) )(&CTriggerMultiple_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "StopLoopingSounds"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::StopLoopingSounds)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_StopLoopingSounds) )    
        .def( 
            "TraceAttack"
            , (void ( CTriggerMultiple_wrapper::* )( ::CTakeDamageInfo const &,::Vector const &,::trace_t *,::CDmgAccumulator * ) )(&CTriggerMultiple_wrapper::TraceAttack)
            , ( bp::arg("info"), bp::arg("vecDir"), bp::arg("ptr"), bp::arg("pAccumulator")=bp::object() ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::CBaseTrigger::* )(  ) )(&::CBaseTrigger::UpdateOnRemove)
            , (void ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_UpdateOnRemove) )    
        .def( 
            "UpdateTransmitState"
            , (int ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateTransmitState)
            , (int ( CTriggerMultiple_wrapper::* )(  ) )(&CTriggerMultiple_wrapper::default_UpdateTransmitState) )    
        .def( 
            "VPhysicsCollision"
            , (void ( ::CBaseEntity::* )( int,::gamevcollisionevent_t * ) )(&::CBaseEntity::VPhysicsCollision)
            , (void ( CTriggerMultiple_wrapper::* )( int,::gamevcollisionevent_t * ) )(&CTriggerMultiple_wrapper::default_VPhysicsCollision)
            , ( bp::arg("index"), bp::arg("pEvent") ) )    
        .add_property( "lifestate", &CTriggerMultiple_wrapper::m_lifeState_Get, &CTriggerMultiple_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &CTriggerMultiple_wrapper::m_takedamage_Get, &CTriggerMultiple_wrapper::m_takedamage_Set );

}

