
#include "Player.h"
#include "Team.h"

#include <iostream>

int main(int argc, char* argv[]) {
  Player player("Hendrik_Robertson", 19);
  Player player2("Ferdinand_Ruska", 17);
  Team t;
  t.addPlayer(0, std::make_shared<Player>(player));
  t.addPlayer(0, std::make_shared<Player>(player2));
  //std::cout << t.getPlayer(1).get()->print();

}

//to do: cmake config; create renderer module; create match module

