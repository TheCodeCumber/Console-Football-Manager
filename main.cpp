
#include "Object.h"
#include "Player.h"

#include <iostream>

int main() {
  Player player("0002", "Hendrik_Robertson", 19);
  std::cout << "Created Player!" << "\n" << player.getId();
  return 0;
}

