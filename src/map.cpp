#include "map.h"


int Map::width() {
  return size_x;
}

int Map::height() {
  return size_y;
}

Map::Map(std::string n, int x, int y)
{
  name = n;
  size_x = x;
  size_y = y;
}
 
