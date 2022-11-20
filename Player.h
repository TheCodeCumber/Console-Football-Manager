#ifndef PLAYER_H
#define PLAYER_H

#include "Object.h"

class Player : public Object{
  private:
    const char* name;
    int age;

  public:
    Player(const char* id, const char* name, int age);
    char print(){return 's';}
};
#endif
