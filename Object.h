#ifndef OBJECT_H
#define OBJECT_H

#include "Callable.h"


class Object : public Callable{
public:
    Object(const char* id);

    Callable* getObject () override;

    const char* getId() const;

private:
    const char* id;
};

#endif