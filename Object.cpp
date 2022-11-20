
#include "Callable.h"
#include "Object.h"

    Object::Object(const char* id) : id(id){}

    Callable* Object::getObject() {
        return this;
    }

    const char* Object::getId() const {
        return id;
    }