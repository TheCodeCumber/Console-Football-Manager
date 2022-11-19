
#include "Object.h"

class Player : public Object{
  public:
    Player::Player(const char* id, const char* name, int age) : Object(id), name(name), age(age){}
  private:
    const char* name;
    int age;
};