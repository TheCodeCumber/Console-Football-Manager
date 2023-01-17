
#include "Object.h"
#include "Player.h"
#include "Team.h"

#include <iostream>

int main(int argc, char* argv[]) {
  Player player = Player("Hendrik_Robertson", 19);
  Player player2("Ferdinand_Ruska", 17);
  Team t;
  t.addPlayer(0, &player);
}

