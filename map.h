#ifndef MAP_H
#define MAP_H

#include <vector>

using namespace std;

class Window;
class Graph;

class Group {
   public:
      Group();
      
   private:
      vector<Window*> windows;
      double effect;
      // pos
      int x1;
      int y1;
      int x2;
      int y2;
};

class Window {
   public:
      Window();

   private:
      vector<Group*> groups;

};

class Map {
   public:
      Map() {}
      ~Map();
      
   private:
      Graph* graph;
      vector<Group*> groups;
      Window** windows;
};

#endif
