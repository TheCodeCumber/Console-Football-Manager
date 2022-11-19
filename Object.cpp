
#include "Callable.h"

class Object : public Callable{
public:
    Object::Object(const char* id) : id(id){}

    Callable* getObject () {
        return this;
    }

    const char* getId() const {
        return id;
    }

private:
    const char* id;
};