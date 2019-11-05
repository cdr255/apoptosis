#ifndef _MAP_H_
#define _MAP_H_

class Map {
 private:
  int size_x, size_y; // size of the map
  std::string name;
  
 public:
  int width(); // getter for size_x;
  int height(); // getter for size_y;
  
};

#endif
