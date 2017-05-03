/* core.c
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#include <corto/c/c.h>
#include <corto/core/_load.h>

corto_application _corto_applicationCreate(void) {
    corto_application _this;
    _this = corto_application(corto_declare(corto_application_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_application _corto_applicationCreateChild(corto_object _parent, corto_string _id) {
    corto_application _this;
    _this = corto_application(corto_declareChild(_parent, _id, corto_application_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_applicationUpdate(corto_application _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_application _corto_applicationDeclare(void) {
    corto_application _this;
    _this = corto_application(corto_declare(corto_application_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_application _corto_applicationDeclareChild(corto_object _parent, corto_string _id) {
    corto_application _this;
    _this = corto_application(corto_declareChild(_parent, _id, corto_application_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_applicationDefine(corto_application _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_application _corto_applicationAssign(corto_application _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_dispatcher _corto_dispatcherCreate(void) {
    corto_dispatcher _this;
    _this = corto_dispatcher(corto_declare(corto_dispatcher_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_dispatcher _corto_dispatcherCreateChild(corto_object _parent, corto_string _id) {
    corto_dispatcher _this;
    _this = corto_dispatcher(corto_declareChild(_parent, _id, corto_dispatcher_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_dispatcherUpdate(corto_dispatcher _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_dispatcher _corto_dispatcherDeclare(void) {
    corto_dispatcher _this;
    _this = corto_dispatcher(corto_declare(corto_dispatcher_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_dispatcher _corto_dispatcherDeclareChild(corto_object _parent, corto_string _id) {
    corto_dispatcher _this;
    _this = corto_dispatcher(corto_declareChild(_parent, _id, corto_dispatcher_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_dispatcherDefine(corto_dispatcher _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_dispatcher _corto_dispatcherAssign(corto_dispatcher _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_event _corto_eventCreate(uint16_t kind) {
    corto_event _this;
    _this = corto_event(corto_declare(corto_event_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_event)_this)->kind = kind;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_event _corto_eventCreateChild(corto_object _parent, corto_string _id, uint16_t kind) {
    corto_event _this;
    _this = corto_event(corto_declareChild(_parent, _id, corto_event_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_event)_this)->kind = kind;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_eventUpdate(corto_event _this, uint16_t kind) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_event)((corto_event)CORTO_OFFSET(_this, ((corto_type)corto_event_o)->size)))->kind = kind;
        } else {
            ((corto_event)_this)->kind = kind;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_event _corto_eventDeclare(void) {
    corto_event _this;
    _this = corto_event(corto_declare(corto_event_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_event _corto_eventDeclareChild(corto_object _parent, corto_string _id) {
    corto_event _this;
    _this = corto_event(corto_declareChild(_parent, _id, corto_event_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_eventDefine(corto_event _this, uint16_t kind) {
    CORTO_UNUSED(_this);
    ((corto_event)_this)->kind = kind;
    return corto_define(_this);
}

corto_event _corto_eventAssign(corto_event _this, uint16_t kind) {
    CORTO_UNUSED(_this);
    ((corto_event)_this)->kind = kind;
    return _this;
}

corto_eventMask* _corto_eventMaskCreate(corto_eventMask value) {
    corto_eventMask* _this;
    _this = corto_eventMask(corto_declare(corto_eventMask_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_eventMask* _corto_eventMaskCreateChild(corto_object _parent, corto_string _id, corto_eventMask value) {
    corto_eventMask* _this;
    _this = corto_eventMask(corto_declareChild(_parent, _id, corto_eventMask_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_eventMaskUpdate(corto_eventMask* _this, corto_eventMask value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            *((corto_eventMask*)CORTO_OFFSET(_this, ((corto_type)corto_eventMask_o)->size)) = value;
        } else {
            *_this = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_eventMask* _corto_eventMaskDeclare(void) {
    corto_eventMask* _this;
    _this = corto_eventMask(corto_declare(corto_eventMask_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_eventMask* _corto_eventMaskDeclareChild(corto_object _parent, corto_string _id) {
    corto_eventMask* _this;
    _this = corto_eventMask(corto_declareChild(_parent, _id, corto_eventMask_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_eventMaskDefine(corto_eventMask* _this, corto_eventMask value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return corto_define(_this);
}

corto_eventMask* _corto_eventMaskAssign(corto_eventMask* _this, corto_eventMask value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return _this;
}

corto_frame* _corto_frameCreate(corto_frameKind kind, int64_t value) {
    corto_frame* _this;
    _this = corto_frame(corto_declare(corto_frame_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_frame*)_this)->kind = kind;
        ((corto_frame*)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_frame* _corto_frameCreateChild(corto_object _parent, corto_string _id, corto_frameKind kind, int64_t value) {
    corto_frame* _this;
    _this = corto_frame(corto_declareChild(_parent, _id, corto_frame_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_frame*)_this)->kind = kind;
        ((corto_frame*)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_frameUpdate(corto_frame* _this, corto_frameKind kind, int64_t value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_frame*)((corto_frame*)CORTO_OFFSET(_this, ((corto_type)corto_frame_o)->size)))->kind = kind;
            ((corto_frame*)((corto_frame*)CORTO_OFFSET(_this, ((corto_type)corto_frame_o)->size)))->value = value;
        } else {
            ((corto_frame*)_this)->kind = kind;
            ((corto_frame*)_this)->value = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_frame* _corto_frameDeclare(void) {
    corto_frame* _this;
    _this = corto_frame(corto_declare(corto_frame_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_frame* _corto_frameDeclareChild(corto_object _parent, corto_string _id) {
    corto_frame* _this;
    _this = corto_frame(corto_declareChild(_parent, _id, corto_frame_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_frameDefine(corto_frame* _this, corto_frameKind kind, int64_t value) {
    CORTO_UNUSED(_this);
    ((corto_frame*)_this)->kind = kind;
    ((corto_frame*)_this)->value = value;
    return corto_define(_this);
}

corto_frame* _corto_frameAssign(corto_frame* _this, corto_frameKind kind, int64_t value) {
    CORTO_UNUSED(_this);
    ((corto_frame*)_this)->kind = kind;
    ((corto_frame*)_this)->value = value;
    return _this;
}

corto_frameKind* _corto_frameKindCreate(corto_frameKind value) {
    corto_frameKind* _this;
    _this = corto_frameKind(corto_declare(corto_frameKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_frameKind* _corto_frameKindCreateChild(corto_object _parent, corto_string _id, corto_frameKind value) {
    corto_frameKind* _this;
    _this = corto_frameKind(corto_declareChild(_parent, _id, corto_frameKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_frameKindUpdate(corto_frameKind* _this, corto_frameKind value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            *((corto_frameKind*)CORTO_OFFSET(_this, ((corto_type)corto_frameKind_o)->size)) = value;
        } else {
            *_this = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_frameKind* _corto_frameKindDeclare(void) {
    corto_frameKind* _this;
    _this = corto_frameKind(corto_declare(corto_frameKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_frameKind* _corto_frameKindDeclareChild(corto_object _parent, corto_string _id) {
    corto_frameKind* _this;
    _this = corto_frameKind(corto_declareChild(_parent, _id, corto_frameKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_frameKindDefine(corto_frameKind* _this, corto_frameKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return corto_define(_this);
}

corto_frameKind* _corto_frameKindAssign(corto_frameKind* _this, corto_frameKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return _this;
}

corto_invokeEvent _corto_invokeEventCreate(corto_mount mount, corto_object instance, corto_function function, uintptr_t args) {
    corto_invokeEvent _this;
    _this = corto_invokeEvent(corto_declare(corto_invokeEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_invokeEvent)_this)->mount, mount);
        corto_setref(&((corto_invokeEvent)_this)->instance, instance);
        corto_setref(&((corto_invokeEvent)_this)->function, function);
        ((corto_invokeEvent)_this)->args = args;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_invokeEvent _corto_invokeEventCreateChild(corto_object _parent, corto_string _id, corto_mount mount, corto_object instance, corto_function function, uintptr_t args) {
    corto_invokeEvent _this;
    _this = corto_invokeEvent(corto_declareChild(_parent, _id, corto_invokeEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_invokeEvent)_this)->mount, mount);
        corto_setref(&((corto_invokeEvent)_this)->instance, instance);
        corto_setref(&((corto_invokeEvent)_this)->function, function);
        ((corto_invokeEvent)_this)->args = args;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_invokeEventUpdate(corto_invokeEvent _this, corto_mount mount, corto_object instance, corto_function function, uintptr_t args) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setref(&((corto_invokeEvent)((corto_invokeEvent)CORTO_OFFSET(_this, ((corto_type)corto_invokeEvent_o)->size)))->mount, mount);
            corto_setref(&((corto_invokeEvent)((corto_invokeEvent)CORTO_OFFSET(_this, ((corto_type)corto_invokeEvent_o)->size)))->instance, instance);
            corto_setref(&((corto_invokeEvent)((corto_invokeEvent)CORTO_OFFSET(_this, ((corto_type)corto_invokeEvent_o)->size)))->function, function);
            ((corto_invokeEvent)((corto_invokeEvent)CORTO_OFFSET(_this, ((corto_type)corto_invokeEvent_o)->size)))->args = args;
        } else {
            corto_setref(&((corto_invokeEvent)_this)->mount, mount);
            corto_setref(&((corto_invokeEvent)_this)->instance, instance);
            corto_setref(&((corto_invokeEvent)_this)->function, function);
            ((corto_invokeEvent)_this)->args = args;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_invokeEvent _corto_invokeEventDeclare(void) {
    corto_invokeEvent _this;
    _this = corto_invokeEvent(corto_declare(corto_invokeEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_invokeEvent _corto_invokeEventDeclareChild(corto_object _parent, corto_string _id) {
    corto_invokeEvent _this;
    _this = corto_invokeEvent(corto_declareChild(_parent, _id, corto_invokeEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_invokeEventDefine(corto_invokeEvent _this, corto_mount mount, corto_object instance, corto_function function, uintptr_t args) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_invokeEvent)_this)->mount, mount);
    corto_setref(&((corto_invokeEvent)_this)->instance, instance);
    corto_setref(&((corto_invokeEvent)_this)->function, function);
    ((corto_invokeEvent)_this)->args = args;
    return corto_define(_this);
}

corto_invokeEvent _corto_invokeEventAssign(corto_invokeEvent _this, corto_mount mount, corto_object instance, corto_function function, uintptr_t args) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_invokeEvent)_this)->mount, mount);
    corto_setref(&((corto_invokeEvent)_this)->instance, instance);
    corto_setref(&((corto_invokeEvent)_this)->function, function);
    ((corto_invokeEvent)_this)->args = args;
    return _this;
}

corto_loader _corto_loaderCreate(bool autoLoad) {
    corto_loader _this;
    _this = corto_loader(corto_declare(corto_loader_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_loader)_this)->autoLoad = autoLoad;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_loader _corto_loaderCreateChild(corto_object _parent, corto_string _id, bool autoLoad) {
    corto_loader _this;
    _this = corto_loader(corto_declareChild(_parent, _id, corto_loader_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_loader)_this)->autoLoad = autoLoad;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_loaderUpdate(corto_loader _this, bool autoLoad) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_loader)((corto_loader)CORTO_OFFSET(_this, ((corto_type)corto_loader_o)->size)))->autoLoad = autoLoad;
        } else {
            ((corto_loader)_this)->autoLoad = autoLoad;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_loader _corto_loaderDeclare(void) {
    corto_loader _this;
    _this = corto_loader(corto_declare(corto_loader_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_loader _corto_loaderDeclareChild(corto_object _parent, corto_string _id) {
    corto_loader _this;
    _this = corto_loader(corto_declareChild(_parent, _id, corto_loader_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_loaderDefine(corto_loader _this, bool autoLoad) {
    CORTO_UNUSED(_this);
    ((corto_loader)_this)->autoLoad = autoLoad;
    return corto_define(_this);
}

corto_loader _corto_loaderAssign(corto_loader _this, bool autoLoad) {
    CORTO_UNUSED(_this);
    ((corto_loader)_this)->autoLoad = autoLoad;
    return _this;
}

corto_mount _corto_mountCreate(corto_mountKind kind, corto_string parent, corto_string expr, corto_string type, corto_string contentType, corto_string policy) {
    corto_mount _this;
    _this = corto_mount(corto_declare(corto_mount_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mount)_this)->kind = kind;
        corto_setstr(&((corto_subscriber)_this)->parent, parent);
        corto_setstr(&((corto_subscriber)_this)->expr, expr);
        corto_setstr(&((corto_observer)_this)->type, type);
        corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
        corto_setstr(&((corto_mount)_this)->policy, policy);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mount _corto_mountCreateChild(corto_object _parent, corto_string _id, corto_mountKind kind, corto_string parent, corto_string expr, corto_string type, corto_string contentType, corto_string policy) {
    corto_mount _this;
    _this = corto_mount(corto_declareChild(_parent, _id, corto_mount_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mount)_this)->kind = kind;
        corto_setstr(&((corto_subscriber)_this)->parent, parent);
        corto_setstr(&((corto_subscriber)_this)->expr, expr);
        corto_setstr(&((corto_observer)_this)->type, type);
        corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
        corto_setstr(&((corto_mount)_this)->policy, policy);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountUpdate(corto_mount _this, corto_mountKind kind, corto_string parent, corto_string expr, corto_string type, corto_string contentType, corto_string policy) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_mount)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->kind = kind;
            corto_setstr(&((corto_subscriber)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->parent, parent);
            corto_setstr(&((corto_subscriber)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->expr, expr);
            corto_setstr(&((corto_observer)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->type, type);
            corto_setstr(&((corto_subscriber)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->contentType, contentType);
            corto_setstr(&((corto_mount)((corto_mount)CORTO_OFFSET(_this, ((corto_type)corto_mount_o)->size)))->policy, policy);
        } else {
            ((corto_mount)_this)->kind = kind;
            corto_setstr(&((corto_subscriber)_this)->parent, parent);
            corto_setstr(&((corto_subscriber)_this)->expr, expr);
            corto_setstr(&((corto_observer)_this)->type, type);
            corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
            corto_setstr(&((corto_mount)_this)->policy, policy);
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mount _corto_mountDeclare(void) {
    corto_mount _this;
    _this = corto_mount(corto_declare(corto_mount_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mount _corto_mountDeclareChild(corto_object _parent, corto_string _id) {
    corto_mount _this;
    _this = corto_mount(corto_declareChild(_parent, _id, corto_mount_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountDefine(corto_mount _this, corto_mountKind kind, corto_string parent, corto_string expr, corto_string type, corto_string contentType, corto_string policy) {
    CORTO_UNUSED(_this);
    ((corto_mount)_this)->kind = kind;
    corto_setstr(&((corto_subscriber)_this)->parent, parent);
    corto_setstr(&((corto_subscriber)_this)->expr, expr);
    corto_setstr(&((corto_observer)_this)->type, type);
    corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
    corto_setstr(&((corto_mount)_this)->policy, policy);
    return corto_define(_this);
}

corto_mount _corto_mountAssign(corto_mount _this, corto_mountKind kind, corto_string parent, corto_string expr, corto_string type, corto_string contentType, corto_string policy) {
    CORTO_UNUSED(_this);
    ((corto_mount)_this)->kind = kind;
    corto_setstr(&((corto_subscriber)_this)->parent, parent);
    corto_setstr(&((corto_subscriber)_this)->expr, expr);
    corto_setstr(&((corto_observer)_this)->type, type);
    corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
    corto_setstr(&((corto_mount)_this)->policy, policy);
    return _this;
}

corto_mountKind* _corto_mountKindCreate(corto_mountKind value) {
    corto_mountKind* _this;
    _this = corto_mountKind(corto_declare(corto_mountKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mountKind* _corto_mountKindCreateChild(corto_object _parent, corto_string _id, corto_mountKind value) {
    corto_mountKind* _this;
    _this = corto_mountKind(corto_declareChild(_parent, _id, corto_mountKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountKindUpdate(corto_mountKind* _this, corto_mountKind value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            *((corto_mountKind*)CORTO_OFFSET(_this, ((corto_type)corto_mountKind_o)->size)) = value;
        } else {
            *_this = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mountKind* _corto_mountKindDeclare(void) {
    corto_mountKind* _this;
    _this = corto_mountKind(corto_declare(corto_mountKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mountKind* _corto_mountKindDeclareChild(corto_object _parent, corto_string _id) {
    corto_mountKind* _this;
    _this = corto_mountKind(corto_declareChild(_parent, _id, corto_mountKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountKindDefine(corto_mountKind* _this, corto_mountKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return corto_define(_this);
}

corto_mountKind* _corto_mountKindAssign(corto_mountKind* _this, corto_mountKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return _this;
}

corto_mountPolicy* _corto_mountPolicyCreate(double sampleRate) {
    corto_mountPolicy* _this;
    _this = corto_mountPolicy(corto_declare(corto_mountPolicy_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mountPolicy*)_this)->sampleRate = sampleRate;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mountPolicy* _corto_mountPolicyCreateChild(corto_object _parent, corto_string _id, double sampleRate) {
    corto_mountPolicy* _this;
    _this = corto_mountPolicy(corto_declareChild(_parent, _id, corto_mountPolicy_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mountPolicy*)_this)->sampleRate = sampleRate;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountPolicyUpdate(corto_mountPolicy* _this, double sampleRate) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_mountPolicy*)((corto_mountPolicy*)CORTO_OFFSET(_this, ((corto_type)corto_mountPolicy_o)->size)))->sampleRate = sampleRate;
        } else {
            ((corto_mountPolicy*)_this)->sampleRate = sampleRate;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mountPolicy* _corto_mountPolicyDeclare(void) {
    corto_mountPolicy* _this;
    _this = corto_mountPolicy(corto_declare(corto_mountPolicy_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mountPolicy* _corto_mountPolicyDeclareChild(corto_object _parent, corto_string _id) {
    corto_mountPolicy* _this;
    _this = corto_mountPolicy(corto_declareChild(_parent, _id, corto_mountPolicy_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountPolicyDefine(corto_mountPolicy* _this, double sampleRate) {
    CORTO_UNUSED(_this);
    ((corto_mountPolicy*)_this)->sampleRate = sampleRate;
    return corto_define(_this);
}

corto_mountPolicy* _corto_mountPolicyAssign(corto_mountPolicy* _this, double sampleRate) {
    CORTO_UNUSED(_this);
    ((corto_mountPolicy*)_this)->sampleRate = sampleRate;
    return _this;
}

corto_mountStats* _corto_mountStatsCreate(uint64_t declares, uint64_t updates, uint64_t deletes) {
    corto_mountStats* _this;
    _this = corto_mountStats(corto_declare(corto_mountStats_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mountStats*)_this)->declares = declares;
        ((corto_mountStats*)_this)->updates = updates;
        ((corto_mountStats*)_this)->deletes = deletes;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mountStats* _corto_mountStatsCreateChild(corto_object _parent, corto_string _id, uint64_t declares, uint64_t updates, uint64_t deletes) {
    corto_mountStats* _this;
    _this = corto_mountStats(corto_declareChild(_parent, _id, corto_mountStats_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_mountStats*)_this)->declares = declares;
        ((corto_mountStats*)_this)->updates = updates;
        ((corto_mountStats*)_this)->deletes = deletes;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountStatsUpdate(corto_mountStats* _this, uint64_t declares, uint64_t updates, uint64_t deletes) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_mountStats*)((corto_mountStats*)CORTO_OFFSET(_this, ((corto_type)corto_mountStats_o)->size)))->declares = declares;
            ((corto_mountStats*)((corto_mountStats*)CORTO_OFFSET(_this, ((corto_type)corto_mountStats_o)->size)))->updates = updates;
            ((corto_mountStats*)((corto_mountStats*)CORTO_OFFSET(_this, ((corto_type)corto_mountStats_o)->size)))->deletes = deletes;
        } else {
            ((corto_mountStats*)_this)->declares = declares;
            ((corto_mountStats*)_this)->updates = updates;
            ((corto_mountStats*)_this)->deletes = deletes;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mountStats* _corto_mountStatsDeclare(void) {
    corto_mountStats* _this;
    _this = corto_mountStats(corto_declare(corto_mountStats_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mountStats* _corto_mountStatsDeclareChild(corto_object _parent, corto_string _id) {
    corto_mountStats* _this;
    _this = corto_mountStats(corto_declareChild(_parent, _id, corto_mountStats_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountStatsDefine(corto_mountStats* _this, uint64_t declares, uint64_t updates, uint64_t deletes) {
    CORTO_UNUSED(_this);
    ((corto_mountStats*)_this)->declares = declares;
    ((corto_mountStats*)_this)->updates = updates;
    ((corto_mountStats*)_this)->deletes = deletes;
    return corto_define(_this);
}

corto_mountStats* _corto_mountStatsAssign(corto_mountStats* _this, uint64_t declares, uint64_t updates, uint64_t deletes) {
    CORTO_UNUSED(_this);
    ((corto_mountStats*)_this)->declares = declares;
    ((corto_mountStats*)_this)->updates = updates;
    ((corto_mountStats*)_this)->deletes = deletes;
    return _this;
}

corto_mountSubscription* _corto_mountSubscriptionCreate(corto_string parent, corto_string expr, corto_eventMask mask, uint32_t count, uintptr_t userData) {
    corto_mountSubscription* _this;
    _this = corto_mountSubscription(corto_declare(corto_mountSubscription_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_mountSubscription*)_this)->parent, parent);
        corto_setstr(&((corto_mountSubscription*)_this)->expr, expr);
        ((corto_mountSubscription*)_this)->mask = mask;
        ((corto_mountSubscription*)_this)->count = count;
        ((corto_mountSubscription*)_this)->userData = userData;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mountSubscription* _corto_mountSubscriptionCreateChild(corto_object _parent, corto_string _id, corto_string parent, corto_string expr, corto_eventMask mask, uint32_t count, uintptr_t userData) {
    corto_mountSubscription* _this;
    _this = corto_mountSubscription(corto_declareChild(_parent, _id, corto_mountSubscription_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_mountSubscription*)_this)->parent, parent);
        corto_setstr(&((corto_mountSubscription*)_this)->expr, expr);
        ((corto_mountSubscription*)_this)->mask = mask;
        ((corto_mountSubscription*)_this)->count = count;
        ((corto_mountSubscription*)_this)->userData = userData;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountSubscriptionUpdate(corto_mountSubscription* _this, corto_string parent, corto_string expr, corto_eventMask mask, uint32_t count, uintptr_t userData) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setstr(&((corto_mountSubscription*)((corto_mountSubscription*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscription_o)->size)))->parent, parent);
            corto_setstr(&((corto_mountSubscription*)((corto_mountSubscription*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscription_o)->size)))->expr, expr);
            ((corto_mountSubscription*)((corto_mountSubscription*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscription_o)->size)))->mask = mask;
            ((corto_mountSubscription*)((corto_mountSubscription*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscription_o)->size)))->count = count;
            ((corto_mountSubscription*)((corto_mountSubscription*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscription_o)->size)))->userData = userData;
        } else {
            corto_setstr(&((corto_mountSubscription*)_this)->parent, parent);
            corto_setstr(&((corto_mountSubscription*)_this)->expr, expr);
            ((corto_mountSubscription*)_this)->mask = mask;
            ((corto_mountSubscription*)_this)->count = count;
            ((corto_mountSubscription*)_this)->userData = userData;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mountSubscription* _corto_mountSubscriptionDeclare(void) {
    corto_mountSubscription* _this;
    _this = corto_mountSubscription(corto_declare(corto_mountSubscription_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mountSubscription* _corto_mountSubscriptionDeclareChild(corto_object _parent, corto_string _id) {
    corto_mountSubscription* _this;
    _this = corto_mountSubscription(corto_declareChild(_parent, _id, corto_mountSubscription_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountSubscriptionDefine(corto_mountSubscription* _this, corto_string parent, corto_string expr, corto_eventMask mask, uint32_t count, uintptr_t userData) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_mountSubscription*)_this)->parent, parent);
    corto_setstr(&((corto_mountSubscription*)_this)->expr, expr);
    ((corto_mountSubscription*)_this)->mask = mask;
    ((corto_mountSubscription*)_this)->count = count;
    ((corto_mountSubscription*)_this)->userData = userData;
    return corto_define(_this);
}

corto_mountSubscription* _corto_mountSubscriptionAssign(corto_mountSubscription* _this, corto_string parent, corto_string expr, corto_eventMask mask, uint32_t count, uintptr_t userData) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_mountSubscription*)_this)->parent, parent);
    corto_setstr(&((corto_mountSubscription*)_this)->expr, expr);
    ((corto_mountSubscription*)_this)->mask = mask;
    ((corto_mountSubscription*)_this)->count = count;
    ((corto_mountSubscription*)_this)->userData = userData;
    return _this;
}

corto_mountSubscriptionList* _corto_mountSubscriptionListCreate(corto_uint32 length, corto_mountSubscription* elements) {
    corto_mountSubscriptionList* _this;
    _this = corto_mountSubscriptionList(corto_declare(corto_mountSubscriptionList_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_uint32 i = 0;
        corto_mountSubscriptionListClear(*_this);
        for (i = 0; i < length; i ++) {
            corto_mountSubscriptionListAppend(*_this, &elements[i]);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_mountSubscriptionList* _corto_mountSubscriptionListCreateChild(corto_object _parent, corto_string _id, corto_uint32 length, corto_mountSubscription* elements) {
    corto_mountSubscriptionList* _this;
    _this = corto_mountSubscriptionList(corto_declareChild(_parent, _id, corto_mountSubscriptionList_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_uint32 i = 0;
        corto_mountSubscriptionListClear(*_this);
        for (i = 0; i < length; i ++) {
            corto_mountSubscriptionListAppend(*_this, &elements[i]);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_mountSubscriptionListUpdate(corto_mountSubscriptionList* _this, corto_uint32 length, corto_mountSubscription* elements) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_uint32 i = 0;
            corto_mountSubscriptionListClear(*((corto_mountSubscriptionList*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscriptionList_o)->size)));
            for (i = 0; i < length; i ++) {
                corto_mountSubscriptionListAppend(*((corto_mountSubscriptionList*)CORTO_OFFSET(_this, ((corto_type)corto_mountSubscriptionList_o)->size)), &elements[i]);
            }
        } else {
            corto_uint32 i = 0;
            corto_mountSubscriptionListClear(*_this);
            for (i = 0; i < length; i ++) {
                corto_mountSubscriptionListAppend(*_this, &elements[i]);
            }
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_mountSubscriptionList* _corto_mountSubscriptionListDeclare(void) {
    corto_mountSubscriptionList* _this;
    _this = corto_mountSubscriptionList(corto_declare(corto_mountSubscriptionList_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_mountSubscriptionList* _corto_mountSubscriptionListDeclareChild(corto_object _parent, corto_string _id) {
    corto_mountSubscriptionList* _this;
    _this = corto_mountSubscriptionList(corto_declareChild(_parent, _id, corto_mountSubscriptionList_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_mountSubscriptionListDefine(corto_mountSubscriptionList* _this, corto_uint32 length, corto_mountSubscription* elements) {
    CORTO_UNUSED(_this);
    corto_uint32 i = 0;
    corto_mountSubscriptionListClear(*_this);
    for (i = 0; i < length; i ++) {
        corto_mountSubscriptionListAppend(*_this, &elements[i]);
    }
    return corto_define(_this);
}

corto_mountSubscriptionList* _corto_mountSubscriptionListAssign(corto_mountSubscriptionList* _this, corto_uint32 length, corto_mountSubscription* elements) {
    CORTO_UNUSED(_this);
    corto_uint32 i = 0;
    corto_mountSubscriptionListClear(*_this);
    for (i = 0; i < length; i ++) {
        corto_mountSubscriptionListAppend(*_this, &elements[i]);
    }
    return _this;
}

corto_objectIter* _corto_objectIterCreate(void) {
    corto_objectIter* _this;
    _this = corto_objectIter(corto_declare(corto_objectIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_objectIter* _corto_objectIterCreateChild(corto_object _parent, corto_string _id) {
    corto_objectIter* _this;
    _this = corto_objectIter(corto_declareChild(_parent, _id, corto_objectIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_objectIterUpdate(corto_objectIter* _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_objectIter* _corto_objectIterDeclare(void) {
    corto_objectIter* _this;
    _this = corto_objectIter(corto_declare(corto_objectIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_objectIter* _corto_objectIterDeclareChild(corto_object _parent, corto_string _id) {
    corto_objectIter* _this;
    _this = corto_objectIter(corto_declareChild(_parent, _id, corto_objectIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_objectIterDefine(corto_objectIter* _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_objectIter* _corto_objectIterAssign(corto_objectIter* _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_observableEvent _corto_observableEventCreate(corto_function observer, corto_object me, corto_object source, corto_object observable, corto_eventMask mask, uintptr_t thread) {
    corto_observableEvent _this;
    _this = corto_observableEvent(corto_declare(corto_observableEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_observableEvent)_this)->observer, observer);
        corto_setref(&((corto_observableEvent)_this)->me, me);
        corto_setref(&((corto_observableEvent)_this)->source, source);
        corto_setref(&((corto_observableEvent)_this)->observable, observable);
        ((corto_observableEvent)_this)->mask = mask;
        ((corto_observableEvent)_this)->thread = thread;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_observableEvent _corto_observableEventCreateChild(corto_object _parent, corto_string _id, corto_function observer, corto_object me, corto_object source, corto_object observable, corto_eventMask mask, uintptr_t thread) {
    corto_observableEvent _this;
    _this = corto_observableEvent(corto_declareChild(_parent, _id, corto_observableEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_observableEvent)_this)->observer, observer);
        corto_setref(&((corto_observableEvent)_this)->me, me);
        corto_setref(&((corto_observableEvent)_this)->source, source);
        corto_setref(&((corto_observableEvent)_this)->observable, observable);
        ((corto_observableEvent)_this)->mask = mask;
        ((corto_observableEvent)_this)->thread = thread;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_observableEventUpdate(corto_observableEvent _this, corto_function observer, corto_object me, corto_object source, corto_object observable, corto_eventMask mask, uintptr_t thread) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setref(&((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->observer, observer);
            corto_setref(&((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->me, me);
            corto_setref(&((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->source, source);
            corto_setref(&((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->observable, observable);
            ((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->mask = mask;
            ((corto_observableEvent)((corto_observableEvent)CORTO_OFFSET(_this, ((corto_type)corto_observableEvent_o)->size)))->thread = thread;
        } else {
            corto_setref(&((corto_observableEvent)_this)->observer, observer);
            corto_setref(&((corto_observableEvent)_this)->me, me);
            corto_setref(&((corto_observableEvent)_this)->source, source);
            corto_setref(&((corto_observableEvent)_this)->observable, observable);
            ((corto_observableEvent)_this)->mask = mask;
            ((corto_observableEvent)_this)->thread = thread;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_observableEvent _corto_observableEventDeclare(void) {
    corto_observableEvent _this;
    _this = corto_observableEvent(corto_declare(corto_observableEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_observableEvent _corto_observableEventDeclareChild(corto_object _parent, corto_string _id) {
    corto_observableEvent _this;
    _this = corto_observableEvent(corto_declareChild(_parent, _id, corto_observableEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_observableEventDefine(corto_observableEvent _this, corto_function observer, corto_object me, corto_object source, corto_object observable, corto_eventMask mask, uintptr_t thread) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_observableEvent)_this)->observer, observer);
    corto_setref(&((corto_observableEvent)_this)->me, me);
    corto_setref(&((corto_observableEvent)_this)->source, source);
    corto_setref(&((corto_observableEvent)_this)->observable, observable);
    ((corto_observableEvent)_this)->mask = mask;
    ((corto_observableEvent)_this)->thread = thread;
    return corto_define(_this);
}

corto_observableEvent _corto_observableEventAssign(corto_observableEvent _this, corto_function observer, corto_object me, corto_object source, corto_object observable, corto_eventMask mask, uintptr_t thread) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_observableEvent)_this)->observer, observer);
    corto_setref(&((corto_observableEvent)_this)->me, me);
    corto_setref(&((corto_observableEvent)_this)->source, source);
    corto_setref(&((corto_observableEvent)_this)->observable, observable);
    ((corto_observableEvent)_this)->mask = mask;
    ((corto_observableEvent)_this)->thread = thread;
    return _this;
}

corto_observer _corto_observerCreate(corto_eventMask mask, corto_object observable, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    corto_observer _this;
    _this = corto_observer(corto_declare(corto_observer_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_observer)_this)->mask = mask;
        corto_setref(&((corto_observer)_this)->observable, observable);
        corto_setref(&((corto_observer)_this)->instance, instance);
        corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
        corto_setstr(&((corto_observer)_this)->type, type);
        ((corto_observer)_this)->enabled = enabled;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_observer _corto_observerCreateChild(corto_object _parent, corto_string _id, corto_eventMask mask, corto_object observable, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    corto_observer _this;
    _this = corto_observer(corto_declareChild(_parent, _id, corto_observer_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_observer)_this)->mask = mask;
        corto_setref(&((corto_observer)_this)->observable, observable);
        corto_setref(&((corto_observer)_this)->instance, instance);
        corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
        corto_setstr(&((corto_observer)_this)->type, type);
        ((corto_observer)_this)->enabled = enabled;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_observerUpdate(corto_observer _this, corto_eventMask mask, corto_object observable, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->mask = mask;
            corto_setref(&((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->observable, observable);
            corto_setref(&((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->instance, instance);
            corto_setref(&((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->dispatcher, dispatcher);
            corto_setstr(&((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->type, type);
            ((corto_observer)((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->enabled = enabled;
            corto_function(((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->kind = CORTO_PROCEDURE_CDECL;
            corto_function(((corto_observer)CORTO_OFFSET(_this, ((corto_type)corto_observer_o)->size)))->fptr = (corto_word)_impl;
        } else {
            ((corto_observer)_this)->mask = mask;
            corto_setref(&((corto_observer)_this)->observable, observable);
            corto_setref(&((corto_observer)_this)->instance, instance);
            corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
            corto_setstr(&((corto_observer)_this)->type, type);
            ((corto_observer)_this)->enabled = enabled;
            corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
            corto_function(_this)->fptr = (corto_word)_impl;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_observer _corto_observerDeclare(void) {
    corto_observer _this;
    _this = corto_observer(corto_declare(corto_observer_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_observer _corto_observerDeclareChild(corto_object _parent, corto_string _id) {
    corto_observer _this;
    _this = corto_observer(corto_declareChild(_parent, _id, corto_observer_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_observerDefine(corto_observer _this, corto_eventMask mask, corto_object observable, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    ((corto_observer)_this)->mask = mask;
    corto_setref(&((corto_observer)_this)->observable, observable);
    corto_setref(&((corto_observer)_this)->instance, instance);
    corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
    corto_setstr(&((corto_observer)_this)->type, type);
    ((corto_observer)_this)->enabled = enabled;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return corto_define(_this);
}

corto_observer _corto_observerAssign(corto_observer _this, corto_eventMask mask, corto_object observable, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    ((corto_observer)_this)->mask = mask;
    corto_setref(&((corto_observer)_this)->observable, observable);
    corto_setref(&((corto_observer)_this)->instance, instance);
    corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
    corto_setstr(&((corto_observer)_this)->type, type);
    ((corto_observer)_this)->enabled = enabled;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return _this;
}

corto_operatorKind* _corto_operatorKindCreate(corto_operatorKind value) {
    corto_operatorKind* _this;
    _this = corto_operatorKind(corto_declare(corto_operatorKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_operatorKind* _corto_operatorKindCreateChild(corto_object _parent, corto_string _id, corto_operatorKind value) {
    corto_operatorKind* _this;
    _this = corto_operatorKind(corto_declareChild(_parent, _id, corto_operatorKind_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        *_this = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_operatorKindUpdate(corto_operatorKind* _this, corto_operatorKind value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            *((corto_operatorKind*)CORTO_OFFSET(_this, ((corto_type)corto_operatorKind_o)->size)) = value;
        } else {
            *_this = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_operatorKind* _corto_operatorKindDeclare(void) {
    corto_operatorKind* _this;
    _this = corto_operatorKind(corto_declare(corto_operatorKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_operatorKind* _corto_operatorKindDeclareChild(corto_object _parent, corto_string _id) {
    corto_operatorKind* _this;
    _this = corto_operatorKind(corto_declareChild(_parent, _id, corto_operatorKind_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_operatorKindDefine(corto_operatorKind* _this, corto_operatorKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return corto_define(_this);
}

corto_operatorKind* _corto_operatorKindAssign(corto_operatorKind* _this, corto_operatorKind value) {
    CORTO_UNUSED(_this);
    *_this = value;
    return _this;
}

corto_package _corto_packageCreate(void) {
    corto_package _this;
    _this = corto_package(corto_declare(corto_package_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_package _corto_packageCreateChild(corto_object _parent, corto_string _id) {
    corto_package _this;
    _this = corto_package(corto_declareChild(_parent, _id, corto_package_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_packageUpdate(corto_package _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_package _corto_packageDeclare(void) {
    corto_package _this;
    _this = corto_package(corto_declare(corto_package_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_package _corto_packageDeclareChild(corto_object _parent, corto_string _id) {
    corto_package _this;
    _this = corto_package(corto_declareChild(_parent, _id, corto_package_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_packageDefine(corto_package _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_package _corto_packageAssign(corto_package _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_position* _corto_positionCreate(double latitude, double longitude) {
    corto_position* _this;
    _this = corto_position(corto_declare(corto_position_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_position*)_this)->latitude = latitude;
        ((corto_position*)_this)->longitude = longitude;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_position* _corto_positionCreateChild(corto_object _parent, corto_string _id, double latitude, double longitude) {
    corto_position* _this;
    _this = corto_position(corto_declareChild(_parent, _id, corto_position_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_position*)_this)->latitude = latitude;
        ((corto_position*)_this)->longitude = longitude;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_positionUpdate(corto_position* _this, double latitude, double longitude) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_position*)((corto_position*)CORTO_OFFSET(_this, ((corto_type)corto_position_o)->size)))->latitude = latitude;
            ((corto_position*)((corto_position*)CORTO_OFFSET(_this, ((corto_type)corto_position_o)->size)))->longitude = longitude;
        } else {
            ((corto_position*)_this)->latitude = latitude;
            ((corto_position*)_this)->longitude = longitude;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_position* _corto_positionDeclare(void) {
    corto_position* _this;
    _this = corto_position(corto_declare(corto_position_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_position* _corto_positionDeclareChild(corto_object _parent, corto_string _id) {
    corto_position* _this;
    _this = corto_position(corto_declareChild(_parent, _id, corto_position_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_positionDefine(corto_position* _this, double latitude, double longitude) {
    CORTO_UNUSED(_this);
    ((corto_position*)_this)->latitude = latitude;
    ((corto_position*)_this)->longitude = longitude;
    return corto_define(_this);
}

corto_position* _corto_positionAssign(corto_position* _this, double latitude, double longitude) {
    CORTO_UNUSED(_this);
    ((corto_position*)_this)->latitude = latitude;
    ((corto_position*)_this)->longitude = longitude;
    return _this;
}

corto_remote _corto_remoteCreate(corto_type returnType, bool returnsReference, void(*_impl)(void)) {
    corto_remote _this;
    _this = corto_remote(corto_declare(corto_remote_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_function)_this)->returnType, returnType);
        ((corto_function)_this)->returnsReference = returnsReference;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_remote _corto_remoteCreateChild(corto_object _parent, corto_string _id, corto_type returnType, bool returnsReference, void(*_impl)(void)) {
    corto_remote _this;
    _this = corto_remote(corto_declareChild(_parent, _id, corto_remote_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_function)_this)->returnType, returnType);
        ((corto_function)_this)->returnsReference = returnsReference;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_remoteUpdate(corto_remote _this, corto_type returnType, bool returnsReference, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setref(&((corto_function)((corto_remote)CORTO_OFFSET(_this, ((corto_type)corto_remote_o)->size)))->returnType, returnType);
            ((corto_function)((corto_remote)CORTO_OFFSET(_this, ((corto_type)corto_remote_o)->size)))->returnsReference = returnsReference;
            corto_function(((corto_remote)CORTO_OFFSET(_this, ((corto_type)corto_remote_o)->size)))->kind = CORTO_PROCEDURE_CDECL;
            corto_function(((corto_remote)CORTO_OFFSET(_this, ((corto_type)corto_remote_o)->size)))->fptr = (corto_word)_impl;
        } else {
            corto_setref(&((corto_function)_this)->returnType, returnType);
            ((corto_function)_this)->returnsReference = returnsReference;
            corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
            corto_function(_this)->fptr = (corto_word)_impl;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_remote _corto_remoteDeclare(void) {
    corto_remote _this;
    _this = corto_remote(corto_declare(corto_remote_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_remote _corto_remoteDeclareChild(corto_object _parent, corto_string _id) {
    corto_remote _this;
    _this = corto_remote(corto_declareChild(_parent, _id, corto_remote_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_remoteDefine(corto_remote _this, corto_type returnType, bool returnsReference, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_function)_this)->returnType, returnType);
    ((corto_function)_this)->returnsReference = returnsReference;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return corto_define(_this);
}

corto_remote _corto_remoteAssign(corto_remote _this, corto_type returnType, bool returnsReference, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_function)_this)->returnType, returnType);
    ((corto_function)_this)->returnsReference = returnsReference;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return _this;
}

corto_request* _corto_requestCreate(corto_string parent, corto_string expr, corto_string type, uint64_t offset, uint64_t limit, bool content, corto_frame* from, corto_frame* to) {
    corto_request* _this;
    _this = corto_request(corto_declare(corto_request_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_request*)_this)->parent, parent);
        corto_setstr(&((corto_request*)_this)->expr, expr);
        corto_setstr(&((corto_request*)_this)->type, type);
        ((corto_request*)_this)->offset = offset;
        ((corto_request*)_this)->limit = limit;
        ((corto_request*)_this)->content = content;
        if (from) {
            corto_ptr_copy(&((corto_request*)_this)->from, corto_frame_o, from);
        }
        if (to) {
            corto_ptr_copy(&((corto_request*)_this)->to, corto_frame_o, to);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_request* _corto_requestCreateChild(corto_object _parent, corto_string _id, corto_string parent, corto_string expr, corto_string type, uint64_t offset, uint64_t limit, bool content, corto_frame* from, corto_frame* to) {
    corto_request* _this;
    _this = corto_request(corto_declareChild(_parent, _id, corto_request_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_request*)_this)->parent, parent);
        corto_setstr(&((corto_request*)_this)->expr, expr);
        corto_setstr(&((corto_request*)_this)->type, type);
        ((corto_request*)_this)->offset = offset;
        ((corto_request*)_this)->limit = limit;
        ((corto_request*)_this)->content = content;
        if (from) {
            corto_ptr_copy(&((corto_request*)_this)->from, corto_frame_o, from);
        }
        if (to) {
            corto_ptr_copy(&((corto_request*)_this)->to, corto_frame_o, to);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_requestUpdate(corto_request* _this, corto_string parent, corto_string expr, corto_string type, uint64_t offset, uint64_t limit, bool content, corto_frame* from, corto_frame* to) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setstr(&((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->parent, parent);
            corto_setstr(&((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->expr, expr);
            corto_setstr(&((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->type, type);
            ((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->offset = offset;
            ((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->limit = limit;
            ((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->content = content;
            if (from) {
                corto_ptr_copy(&((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->from, corto_frame_o, from);
            }
            if (to) {
                corto_ptr_copy(&((corto_request*)((corto_request*)CORTO_OFFSET(_this, ((corto_type)corto_request_o)->size)))->to, corto_frame_o, to);
            }
        } else {
            corto_setstr(&((corto_request*)_this)->parent, parent);
            corto_setstr(&((corto_request*)_this)->expr, expr);
            corto_setstr(&((corto_request*)_this)->type, type);
            ((corto_request*)_this)->offset = offset;
            ((corto_request*)_this)->limit = limit;
            ((corto_request*)_this)->content = content;
            if (from) {
                corto_ptr_copy(&((corto_request*)_this)->from, corto_frame_o, from);
            }
            if (to) {
                corto_ptr_copy(&((corto_request*)_this)->to, corto_frame_o, to);
            }
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_request* _corto_requestDeclare(void) {
    corto_request* _this;
    _this = corto_request(corto_declare(corto_request_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_request* _corto_requestDeclareChild(corto_object _parent, corto_string _id) {
    corto_request* _this;
    _this = corto_request(corto_declareChild(_parent, _id, corto_request_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_requestDefine(corto_request* _this, corto_string parent, corto_string expr, corto_string type, uint64_t offset, uint64_t limit, bool content, corto_frame* from, corto_frame* to) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_request*)_this)->parent, parent);
    corto_setstr(&((corto_request*)_this)->expr, expr);
    corto_setstr(&((corto_request*)_this)->type, type);
    ((corto_request*)_this)->offset = offset;
    ((corto_request*)_this)->limit = limit;
    ((corto_request*)_this)->content = content;
    if (from) {
        corto_ptr_copy(&((corto_request*)_this)->from, corto_frame_o, from);
    }
    if (to) {
        corto_ptr_copy(&((corto_request*)_this)->to, corto_frame_o, to);
    }
    return corto_define(_this);
}

corto_request* _corto_requestAssign(corto_request* _this, corto_string parent, corto_string expr, corto_string type, uint64_t offset, uint64_t limit, bool content, corto_frame* from, corto_frame* to) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_request*)_this)->parent, parent);
    corto_setstr(&((corto_request*)_this)->expr, expr);
    corto_setstr(&((corto_request*)_this)->type, type);
    ((corto_request*)_this)->offset = offset;
    ((corto_request*)_this)->limit = limit;
    ((corto_request*)_this)->content = content;
    if (from) {
        corto_ptr_copy(&((corto_request*)_this)->from, corto_frame_o, from);
    }
    if (to) {
        corto_ptr_copy(&((corto_request*)_this)->to, corto_frame_o, to);
    }
    return _this;
}

corto_result* _corto_resultCreate(corto_string id, corto_string name, corto_string parent, corto_string type, uintptr_t value, bool leaf) {
    corto_result* _this;
    _this = corto_result(corto_declare(corto_result_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_result*)_this)->id, id);
        corto_setstr(&((corto_result*)_this)->name, name);
        corto_setstr(&((corto_result*)_this)->parent, parent);
        corto_setstr(&((corto_result*)_this)->type, type);
        ((corto_result*)_this)->value = value;
        ((corto_result*)_this)->leaf = leaf;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_result* _corto_resultCreateChild(corto_object _parent, corto_string _id, corto_string id, corto_string name, corto_string parent, corto_string type, uintptr_t value, bool leaf) {
    corto_result* _this;
    _this = corto_result(corto_declareChild(_parent, _id, corto_result_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_result*)_this)->id, id);
        corto_setstr(&((corto_result*)_this)->name, name);
        corto_setstr(&((corto_result*)_this)->parent, parent);
        corto_setstr(&((corto_result*)_this)->type, type);
        ((corto_result*)_this)->value = value;
        ((corto_result*)_this)->leaf = leaf;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_resultUpdate(corto_result* _this, corto_string id, corto_string name, corto_string parent, corto_string type, uintptr_t value, bool leaf) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setstr(&((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->id, id);
            corto_setstr(&((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->name, name);
            corto_setstr(&((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->parent, parent);
            corto_setstr(&((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->type, type);
            ((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->value = value;
            ((corto_result*)((corto_result*)CORTO_OFFSET(_this, ((corto_type)corto_result_o)->size)))->leaf = leaf;
        } else {
            corto_setstr(&((corto_result*)_this)->id, id);
            corto_setstr(&((corto_result*)_this)->name, name);
            corto_setstr(&((corto_result*)_this)->parent, parent);
            corto_setstr(&((corto_result*)_this)->type, type);
            ((corto_result*)_this)->value = value;
            ((corto_result*)_this)->leaf = leaf;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_result* _corto_resultDeclare(void) {
    corto_result* _this;
    _this = corto_result(corto_declare(corto_result_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_result* _corto_resultDeclareChild(corto_object _parent, corto_string _id) {
    corto_result* _this;
    _this = corto_result(corto_declareChild(_parent, _id, corto_result_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_resultDefine(corto_result* _this, corto_string id, corto_string name, corto_string parent, corto_string type, uintptr_t value, bool leaf) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_result*)_this)->id, id);
    corto_setstr(&((corto_result*)_this)->name, name);
    corto_setstr(&((corto_result*)_this)->parent, parent);
    corto_setstr(&((corto_result*)_this)->type, type);
    ((corto_result*)_this)->value = value;
    ((corto_result*)_this)->leaf = leaf;
    return corto_define(_this);
}

corto_result* _corto_resultAssign(corto_result* _this, corto_string id, corto_string name, corto_string parent, corto_string type, uintptr_t value, bool leaf) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_result*)_this)->id, id);
    corto_setstr(&((corto_result*)_this)->name, name);
    corto_setstr(&((corto_result*)_this)->parent, parent);
    corto_setstr(&((corto_result*)_this)->type, type);
    ((corto_result*)_this)->value = value;
    ((corto_result*)_this)->leaf = leaf;
    return _this;
}

corto_resultIter* _corto_resultIterCreate(void) {
    corto_resultIter* _this;
    _this = corto_resultIter(corto_declare(corto_resultIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_resultIter* _corto_resultIterCreateChild(corto_object _parent, corto_string _id) {
    corto_resultIter* _this;
    _this = corto_resultIter(corto_declareChild(_parent, _id, corto_resultIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_resultIterUpdate(corto_resultIter* _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_resultIter* _corto_resultIterDeclare(void) {
    corto_resultIter* _this;
    _this = corto_resultIter(corto_declare(corto_resultIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_resultIter* _corto_resultIterDeclareChild(corto_object _parent, corto_string _id) {
    corto_resultIter* _this;
    _this = corto_resultIter(corto_declareChild(_parent, _id, corto_resultIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_resultIterDefine(corto_resultIter* _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_resultIter* _corto_resultIterAssign(corto_resultIter* _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_resultList* _corto_resultListCreate(corto_uint32 length, corto_result* elements) {
    corto_resultList* _this;
    _this = corto_resultList(corto_declare(corto_resultList_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_uint32 i = 0;
        corto_resultListClear(*_this);
        for (i = 0; i < length; i ++) {
            corto_resultListAppend(*_this, &elements[i]);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_resultList* _corto_resultListCreateChild(corto_object _parent, corto_string _id, corto_uint32 length, corto_result* elements) {
    corto_resultList* _this;
    _this = corto_resultList(corto_declareChild(_parent, _id, corto_resultList_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_uint32 i = 0;
        corto_resultListClear(*_this);
        for (i = 0; i < length; i ++) {
            corto_resultListAppend(*_this, &elements[i]);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_resultListUpdate(corto_resultList* _this, corto_uint32 length, corto_result* elements) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_uint32 i = 0;
            corto_resultListClear(*((corto_resultList*)CORTO_OFFSET(_this, ((corto_type)corto_resultList_o)->size)));
            for (i = 0; i < length; i ++) {
                corto_resultListAppend(*((corto_resultList*)CORTO_OFFSET(_this, ((corto_type)corto_resultList_o)->size)), &elements[i]);
            }
        } else {
            corto_uint32 i = 0;
            corto_resultListClear(*_this);
            for (i = 0; i < length; i ++) {
                corto_resultListAppend(*_this, &elements[i]);
            }
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_resultList* _corto_resultListDeclare(void) {
    corto_resultList* _this;
    _this = corto_resultList(corto_declare(corto_resultList_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_resultList* _corto_resultListDeclareChild(corto_object _parent, corto_string _id) {
    corto_resultList* _this;
    _this = corto_resultList(corto_declareChild(_parent, _id, corto_resultList_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_resultListDefine(corto_resultList* _this, corto_uint32 length, corto_result* elements) {
    CORTO_UNUSED(_this);
    corto_uint32 i = 0;
    corto_resultListClear(*_this);
    for (i = 0; i < length; i ++) {
        corto_resultListAppend(*_this, &elements[i]);
    }
    return corto_define(_this);
}

corto_resultList* _corto_resultListAssign(corto_resultList* _this, corto_uint32 length, corto_result* elements) {
    CORTO_UNUSED(_this);
    corto_uint32 i = 0;
    corto_resultListClear(*_this);
    for (i = 0; i < length; i ++) {
        corto_resultListAppend(*_this, &elements[i]);
    }
    return _this;
}

corto_route _corto_routeCreate(corto_string pattern, void(*_impl)(void)) {
    corto_route _this;
    _this = corto_route(corto_declare(corto_route_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_route)_this)->pattern, pattern);
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_route _corto_routeCreateChild(corto_object _parent, corto_string _id, corto_string pattern, void(*_impl)(void)) {
    corto_route _this;
    _this = corto_route(corto_declareChild(_parent, _id, corto_route_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setstr(&((corto_route)_this)->pattern, pattern);
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_routeUpdate(corto_route _this, corto_string pattern, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setstr(&((corto_route)((corto_route)CORTO_OFFSET(_this, ((corto_type)corto_route_o)->size)))->pattern, pattern);
            corto_function(((corto_route)CORTO_OFFSET(_this, ((corto_type)corto_route_o)->size)))->kind = CORTO_PROCEDURE_CDECL;
            corto_function(((corto_route)CORTO_OFFSET(_this, ((corto_type)corto_route_o)->size)))->fptr = (corto_word)_impl;
        } else {
            corto_setstr(&((corto_route)_this)->pattern, pattern);
            corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
            corto_function(_this)->fptr = (corto_word)_impl;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_route _corto_routeDeclare(void) {
    corto_route _this;
    _this = corto_route(corto_declare(corto_route_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_route _corto_routeDeclareChild(corto_object _parent, corto_string _id) {
    corto_route _this;
    _this = corto_route(corto_declareChild(_parent, _id, corto_route_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_routeDefine(corto_route _this, corto_string pattern, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_route)_this)->pattern, pattern);
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return corto_define(_this);
}

corto_route _corto_routeAssign(corto_route _this, corto_string pattern, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    corto_setstr(&((corto_route)_this)->pattern, pattern);
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return _this;
}

corto_router _corto_routerCreate(corto_type returnType, corto_type paramType, corto_string paramName, corto_type routerDataType, corto_string routerDataName, corto_string elementSeparator) {
    corto_router _this;
    _this = corto_router(corto_declare(corto_router_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_router)_this)->returnType, returnType);
        corto_setref(&((corto_router)_this)->paramType, paramType);
        corto_setstr(&((corto_router)_this)->paramName, paramName);
        corto_setref(&((corto_router)_this)->routerDataType, routerDataType);
        corto_setstr(&((corto_router)_this)->routerDataName, routerDataName);
        corto_setstr(&((corto_router)_this)->elementSeparator, elementSeparator);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_router _corto_routerCreateChild(corto_object _parent, corto_string _id, corto_type returnType, corto_type paramType, corto_string paramName, corto_type routerDataType, corto_string routerDataName, corto_string elementSeparator) {
    corto_router _this;
    _this = corto_router(corto_declareChild(_parent, _id, corto_router_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_router)_this)->returnType, returnType);
        corto_setref(&((corto_router)_this)->paramType, paramType);
        corto_setstr(&((corto_router)_this)->paramName, paramName);
        corto_setref(&((corto_router)_this)->routerDataType, routerDataType);
        corto_setstr(&((corto_router)_this)->routerDataName, routerDataName);
        corto_setstr(&((corto_router)_this)->elementSeparator, elementSeparator);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_routerUpdate(corto_router _this, corto_type returnType, corto_type paramType, corto_string paramName, corto_type routerDataType, corto_string routerDataName, corto_string elementSeparator) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setref(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->returnType, returnType);
            corto_setref(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->paramType, paramType);
            corto_setstr(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->paramName, paramName);
            corto_setref(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->routerDataType, routerDataType);
            corto_setstr(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->routerDataName, routerDataName);
            corto_setstr(&((corto_router)((corto_router)CORTO_OFFSET(_this, ((corto_type)corto_router_o)->size)))->elementSeparator, elementSeparator);
        } else {
            corto_setref(&((corto_router)_this)->returnType, returnType);
            corto_setref(&((corto_router)_this)->paramType, paramType);
            corto_setstr(&((corto_router)_this)->paramName, paramName);
            corto_setref(&((corto_router)_this)->routerDataType, routerDataType);
            corto_setstr(&((corto_router)_this)->routerDataName, routerDataName);
            corto_setstr(&((corto_router)_this)->elementSeparator, elementSeparator);
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_router _corto_routerDeclare(void) {
    corto_router _this;
    _this = corto_router(corto_declare(corto_router_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_router _corto_routerDeclareChild(corto_object _parent, corto_string _id) {
    corto_router _this;
    _this = corto_router(corto_declareChild(_parent, _id, corto_router_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_routerDefine(corto_router _this, corto_type returnType, corto_type paramType, corto_string paramName, corto_type routerDataType, corto_string routerDataName, corto_string elementSeparator) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_router)_this)->returnType, returnType);
    corto_setref(&((corto_router)_this)->paramType, paramType);
    corto_setstr(&((corto_router)_this)->paramName, paramName);
    corto_setref(&((corto_router)_this)->routerDataType, routerDataType);
    corto_setstr(&((corto_router)_this)->routerDataName, routerDataName);
    corto_setstr(&((corto_router)_this)->elementSeparator, elementSeparator);
    return corto_define(_this);
}

corto_router _corto_routerAssign(corto_router _this, corto_type returnType, corto_type paramType, corto_string paramName, corto_type routerDataType, corto_string routerDataName, corto_string elementSeparator) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_router)_this)->returnType, returnType);
    corto_setref(&((corto_router)_this)->paramType, paramType);
    corto_setstr(&((corto_router)_this)->paramName, paramName);
    corto_setref(&((corto_router)_this)->routerDataType, routerDataType);
    corto_setstr(&((corto_router)_this)->routerDataName, routerDataName);
    corto_setstr(&((corto_router)_this)->elementSeparator, elementSeparator);
    return _this;
}

corto_routerimpl _corto_routerimplCreate(corto_interface base, corto_modifier baseAccess, corto_interfaceseq implements) {
    corto_routerimpl _this;
    _this = corto_routerimpl(corto_declare(corto_routerimpl_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_interface)_this)->base, base);
        ((corto_struct)_this)->baseAccess = baseAccess;
        corto_ptr_copy(&((corto_class)_this)->implements, corto_interfaceseq_o, &implements);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_routerimpl _corto_routerimplCreateChild(corto_object _parent, corto_string _id, corto_interface base, corto_modifier baseAccess, corto_interfaceseq implements) {
    corto_routerimpl _this;
    _this = corto_routerimpl(corto_declareChild(_parent, _id, corto_routerimpl_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        corto_setref(&((corto_interface)_this)->base, base);
        ((corto_struct)_this)->baseAccess = baseAccess;
        corto_ptr_copy(&((corto_class)_this)->implements, corto_interfaceseq_o, &implements);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_routerimplUpdate(corto_routerimpl _this, corto_interface base, corto_modifier baseAccess, corto_interfaceseq implements) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_setref(&((corto_interface)((corto_routerimpl)CORTO_OFFSET(_this, ((corto_type)corto_routerimpl_o)->size)))->base, base);
            ((corto_struct)((corto_routerimpl)CORTO_OFFSET(_this, ((corto_type)corto_routerimpl_o)->size)))->baseAccess = baseAccess;
            corto_ptr_copy(&((corto_class)((corto_routerimpl)CORTO_OFFSET(_this, ((corto_type)corto_routerimpl_o)->size)))->implements, corto_interfaceseq_o, &implements);
        } else {
            corto_setref(&((corto_interface)_this)->base, base);
            ((corto_struct)_this)->baseAccess = baseAccess;
            corto_ptr_copy(&((corto_class)_this)->implements, corto_interfaceseq_o, &implements);
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_routerimpl _corto_routerimplDeclare(void) {
    corto_routerimpl _this;
    _this = corto_routerimpl(corto_declare(corto_routerimpl_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_routerimpl _corto_routerimplDeclareChild(corto_object _parent, corto_string _id) {
    corto_routerimpl _this;
    _this = corto_routerimpl(corto_declareChild(_parent, _id, corto_routerimpl_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_routerimplDefine(corto_routerimpl _this, corto_interface base, corto_modifier baseAccess, corto_interfaceseq implements) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_interface)_this)->base, base);
    ((corto_struct)_this)->baseAccess = baseAccess;
    corto_ptr_copy(&((corto_class)_this)->implements, corto_interfaceseq_o, &implements);
    return corto_define(_this);
}

corto_routerimpl _corto_routerimplAssign(corto_routerimpl _this, corto_interface base, corto_modifier baseAccess, corto_interfaceseq implements) {
    CORTO_UNUSED(_this);
    corto_setref(&((corto_interface)_this)->base, base);
    ((corto_struct)_this)->baseAccess = baseAccess;
    corto_ptr_copy(&((corto_class)_this)->implements, corto_interfaceseq_o, &implements);
    return _this;
}

corto_sample* _corto_sampleCreate(corto_time* timestamp, uintptr_t value) {
    corto_sample* _this;
    _this = corto_sample(corto_declare(corto_sample_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (timestamp) {
            corto_ptr_copy(&((corto_sample*)_this)->timestamp, corto_time_o, timestamp);
        }
        ((corto_sample*)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_sample* _corto_sampleCreateChild(corto_object _parent, corto_string _id, corto_time* timestamp, uintptr_t value) {
    corto_sample* _this;
    _this = corto_sample(corto_declareChild(_parent, _id, corto_sample_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (timestamp) {
            corto_ptr_copy(&((corto_sample*)_this)->timestamp, corto_time_o, timestamp);
        }
        ((corto_sample*)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_sampleUpdate(corto_sample* _this, corto_time* timestamp, uintptr_t value) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            if (timestamp) {
                corto_ptr_copy(&((corto_sample*)((corto_sample*)CORTO_OFFSET(_this, ((corto_type)corto_sample_o)->size)))->timestamp, corto_time_o, timestamp);
            }
            ((corto_sample*)((corto_sample*)CORTO_OFFSET(_this, ((corto_type)corto_sample_o)->size)))->value = value;
        } else {
            if (timestamp) {
                corto_ptr_copy(&((corto_sample*)_this)->timestamp, corto_time_o, timestamp);
            }
            ((corto_sample*)_this)->value = value;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_sample* _corto_sampleDeclare(void) {
    corto_sample* _this;
    _this = corto_sample(corto_declare(corto_sample_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_sample* _corto_sampleDeclareChild(corto_object _parent, corto_string _id) {
    corto_sample* _this;
    _this = corto_sample(corto_declareChild(_parent, _id, corto_sample_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_sampleDefine(corto_sample* _this, corto_time* timestamp, uintptr_t value) {
    CORTO_UNUSED(_this);
    if (timestamp) {
        corto_ptr_copy(&((corto_sample*)_this)->timestamp, corto_time_o, timestamp);
    }
    ((corto_sample*)_this)->value = value;
    return corto_define(_this);
}

corto_sample* _corto_sampleAssign(corto_sample* _this, corto_time* timestamp, uintptr_t value) {
    CORTO_UNUSED(_this);
    if (timestamp) {
        corto_ptr_copy(&((corto_sample*)_this)->timestamp, corto_time_o, timestamp);
    }
    ((corto_sample*)_this)->value = value;
    return _this;
}

corto_sampleIter* _corto_sampleIterCreate(void) {
    corto_sampleIter* _this;
    _this = corto_sampleIter(corto_declare(corto_sampleIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_sampleIter* _corto_sampleIterCreateChild(corto_object _parent, corto_string _id) {
    corto_sampleIter* _this;
    _this = corto_sampleIter(corto_declareChild(_parent, _id, corto_sampleIter_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_sampleIterUpdate(corto_sampleIter* _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_sampleIter* _corto_sampleIterDeclare(void) {
    corto_sampleIter* _this;
    _this = corto_sampleIter(corto_declare(corto_sampleIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_sampleIter* _corto_sampleIterDeclareChild(corto_object _parent, corto_string _id) {
    corto_sampleIter* _this;
    _this = corto_sampleIter(corto_declareChild(_parent, _id, corto_sampleIter_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_sampleIterDefine(corto_sampleIter* _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_sampleIter* _corto_sampleIterAssign(corto_sampleIter* _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_stager _corto_stagerCreate(void) {
    corto_stager _this;
    _this = corto_stager(corto_declare(corto_stager_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_stager _corto_stagerCreateChild(corto_object _parent, corto_string _id) {
    corto_stager _this;
    _this = corto_stager(corto_declareChild(_parent, _id, corto_stager_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_stagerUpdate(corto_stager _this) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_stager _corto_stagerDeclare(void) {
    corto_stager _this;
    _this = corto_stager(corto_declare(corto_stager_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_stager _corto_stagerDeclareChild(corto_object _parent, corto_string _id) {
    corto_stager _this;
    _this = corto_stager(corto_declareChild(_parent, _id, corto_stager_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_stagerDefine(corto_stager _this) {
    CORTO_UNUSED(_this);
    return corto_define(_this);
}

corto_stager _corto_stagerAssign(corto_stager _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_subscriber _corto_subscriberCreate(corto_eventMask mask, corto_string parent, corto_string expr, corto_string contentType, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    corto_subscriber _this;
    _this = corto_subscriber(corto_declare(corto_subscriber_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_observer)_this)->mask = mask;
        corto_setstr(&((corto_subscriber)_this)->parent, parent);
        corto_setstr(&((corto_subscriber)_this)->expr, expr);
        corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
        corto_setref(&((corto_observer)_this)->instance, instance);
        corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
        corto_setstr(&((corto_observer)_this)->type, type);
        ((corto_observer)_this)->enabled = enabled;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_subscriber _corto_subscriberCreateChild(corto_object _parent, corto_string _id, corto_eventMask mask, corto_string parent, corto_string expr, corto_string contentType, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    corto_subscriber _this;
    _this = corto_subscriber(corto_declareChild(_parent, _id, corto_subscriber_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_observer)_this)->mask = mask;
        corto_setstr(&((corto_subscriber)_this)->parent, parent);
        corto_setstr(&((corto_subscriber)_this)->expr, expr);
        corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
        corto_setref(&((corto_observer)_this)->instance, instance);
        corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
        corto_setstr(&((corto_observer)_this)->type, type);
        ((corto_observer)_this)->enabled = enabled;
        corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(_this)->fptr = (corto_word)_impl;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_subscriberUpdate(corto_subscriber _this, corto_eventMask mask, corto_string parent, corto_string expr, corto_string contentType, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_observer)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->mask = mask;
            corto_setstr(&((corto_subscriber)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->parent, parent);
            corto_setstr(&((corto_subscriber)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->expr, expr);
            corto_setstr(&((corto_subscriber)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->contentType, contentType);
            corto_setref(&((corto_observer)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->instance, instance);
            corto_setref(&((corto_observer)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->dispatcher, dispatcher);
            corto_setstr(&((corto_observer)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->type, type);
            ((corto_observer)((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->enabled = enabled;
            corto_function(((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->kind = CORTO_PROCEDURE_CDECL;
            corto_function(((corto_subscriber)CORTO_OFFSET(_this, ((corto_type)corto_subscriber_o)->size)))->fptr = (corto_word)_impl;
        } else {
            ((corto_observer)_this)->mask = mask;
            corto_setstr(&((corto_subscriber)_this)->parent, parent);
            corto_setstr(&((corto_subscriber)_this)->expr, expr);
            corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
            corto_setref(&((corto_observer)_this)->instance, instance);
            corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
            corto_setstr(&((corto_observer)_this)->type, type);
            ((corto_observer)_this)->enabled = enabled;
            corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
            corto_function(_this)->fptr = (corto_word)_impl;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_subscriber _corto_subscriberDeclare(void) {
    corto_subscriber _this;
    _this = corto_subscriber(corto_declare(corto_subscriber_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_subscriber _corto_subscriberDeclareChild(corto_object _parent, corto_string _id) {
    corto_subscriber _this;
    _this = corto_subscriber(corto_declareChild(_parent, _id, corto_subscriber_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_subscriberDefine(corto_subscriber _this, corto_eventMask mask, corto_string parent, corto_string expr, corto_string contentType, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    ((corto_observer)_this)->mask = mask;
    corto_setstr(&((corto_subscriber)_this)->parent, parent);
    corto_setstr(&((corto_subscriber)_this)->expr, expr);
    corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
    corto_setref(&((corto_observer)_this)->instance, instance);
    corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
    corto_setstr(&((corto_observer)_this)->type, type);
    ((corto_observer)_this)->enabled = enabled;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return corto_define(_this);
}

corto_subscriber _corto_subscriberAssign(corto_subscriber _this, corto_eventMask mask, corto_string parent, corto_string expr, corto_string contentType, corto_object instance, corto_dispatcher dispatcher, corto_string type, bool enabled, void(*_impl)(void)) {
    CORTO_UNUSED(_this);
    ((corto_observer)_this)->mask = mask;
    corto_setstr(&((corto_subscriber)_this)->parent, parent);
    corto_setstr(&((corto_subscriber)_this)->expr, expr);
    corto_setstr(&((corto_subscriber)_this)->contentType, contentType);
    corto_setref(&((corto_observer)_this)->instance, instance);
    corto_setref(&((corto_observer)_this)->dispatcher, dispatcher);
    corto_setstr(&((corto_observer)_this)->type, type);
    ((corto_observer)_this)->enabled = enabled;
    corto_function(_this)->kind = CORTO_PROCEDURE_CDECL;
    corto_function(_this)->fptr = (corto_word)_impl;
    return _this;
}

corto_subscriberEvent _corto_subscriberEventCreate(corto_result* result, uintptr_t contentTypeHandle) {
    corto_subscriberEvent _this;
    _this = corto_subscriberEvent(corto_declare(corto_subscriberEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (result) {
            corto_ptr_copy(&((corto_subscriberEvent)_this)->result, corto_result_o, result);
        }
        ((corto_subscriberEvent)_this)->contentTypeHandle = contentTypeHandle;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_subscriberEvent _corto_subscriberEventCreateChild(corto_object _parent, corto_string _id, corto_result* result, uintptr_t contentTypeHandle) {
    corto_subscriberEvent _this;
    _this = corto_subscriberEvent(corto_declareChild(_parent, _id, corto_subscriberEvent_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        if (result) {
            corto_ptr_copy(&((corto_subscriberEvent)_this)->result, corto_result_o, result);
        }
        ((corto_subscriberEvent)_this)->contentTypeHandle = contentTypeHandle;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_subscriberEventUpdate(corto_subscriberEvent _this, corto_result* result, uintptr_t contentTypeHandle) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            if (result) {
                corto_ptr_copy(&((corto_subscriberEvent)((corto_subscriberEvent)CORTO_OFFSET(_this, ((corto_type)corto_subscriberEvent_o)->size)))->result, corto_result_o, result);
            }
            ((corto_subscriberEvent)((corto_subscriberEvent)CORTO_OFFSET(_this, ((corto_type)corto_subscriberEvent_o)->size)))->contentTypeHandle = contentTypeHandle;
        } else {
            if (result) {
                corto_ptr_copy(&((corto_subscriberEvent)_this)->result, corto_result_o, result);
            }
            ((corto_subscriberEvent)_this)->contentTypeHandle = contentTypeHandle;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_subscriberEvent _corto_subscriberEventDeclare(void) {
    corto_subscriberEvent _this;
    _this = corto_subscriberEvent(corto_declare(corto_subscriberEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_subscriberEvent _corto_subscriberEventDeclareChild(corto_object _parent, corto_string _id) {
    corto_subscriberEvent _this;
    _this = corto_subscriberEvent(corto_declareChild(_parent, _id, corto_subscriberEvent_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_subscriberEventDefine(corto_subscriberEvent _this, corto_result* result, uintptr_t contentTypeHandle) {
    CORTO_UNUSED(_this);
    if (result) {
        corto_ptr_copy(&((corto_subscriberEvent)_this)->result, corto_result_o, result);
    }
    ((corto_subscriberEvent)_this)->contentTypeHandle = contentTypeHandle;
    return corto_define(_this);
}

corto_subscriberEvent _corto_subscriberEventAssign(corto_subscriberEvent _this, corto_result* result, uintptr_t contentTypeHandle) {
    CORTO_UNUSED(_this);
    if (result) {
        corto_ptr_copy(&((corto_subscriberEvent)_this)->result, corto_result_o, result);
    }
    ((corto_subscriberEvent)_this)->contentTypeHandle = contentTypeHandle;
    return _this;
}

corto_time* _corto_timeCreate(int32_t sec, uint32_t nanosec) {
    corto_time* _this;
    _this = corto_time(corto_declare(corto_time_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_time*)_this)->sec = sec;
        ((corto_time*)_this)->nanosec = nanosec;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_time* _corto_timeCreateChild(corto_object _parent, corto_string _id, int32_t sec, uint32_t nanosec) {
    corto_time* _this;
    _this = corto_time(corto_declareChild(_parent, _id, corto_time_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((corto_time*)_this)->sec = sec;
        ((corto_time*)_this)->nanosec = nanosec;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_timeUpdate(corto_time* _this, int32_t sec, uint32_t nanosec) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_time*)((corto_time*)CORTO_OFFSET(_this, ((corto_type)corto_time_o)->size)))->sec = sec;
            ((corto_time*)((corto_time*)CORTO_OFFSET(_this, ((corto_type)corto_time_o)->size)))->nanosec = nanosec;
        } else {
            ((corto_time*)_this)->sec = sec;
            ((corto_time*)_this)->nanosec = nanosec;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

corto_time* _corto_timeDeclare(void) {
    corto_time* _this;
    _this = corto_time(corto_declare(corto_time_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_time* _corto_timeDeclareChild(corto_object _parent, corto_string _id) {
    corto_time* _this;
    _this = corto_time(corto_declareChild(_parent, _id, corto_time_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _corto_timeDefine(corto_time* _this, int32_t sec, uint32_t nanosec) {
    CORTO_UNUSED(_this);
    ((corto_time*)_this)->sec = sec;
    ((corto_time*)_this)->nanosec = nanosec;
    return corto_define(_this);
}

corto_time* _corto_timeAssign(corto_time* _this, int32_t sec, uint32_t nanosec) {
    CORTO_UNUSED(_this);
    ((corto_time*)_this)->sec = sec;
    ((corto_time*)_this)->nanosec = nanosec;
    return _this;
}

