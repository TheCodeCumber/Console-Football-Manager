
#include "Object.h"
#include "Player.h"

#include <iostream>

int main() {
  Object obj("0001");
  Player player("0002", "Hendrik_Robertson", 19);
  std::cout << "Created Player!" << "\n" << player.print();
  return 0;
}

