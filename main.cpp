
#include "Player.h"

#include <iostream>

int main() {
  Player player("0001", "Hendrik_Robertson", 19);
  std::cout << "Created Player!" << "\n" << player.print();
  return 0;
}

