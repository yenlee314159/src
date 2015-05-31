#include "map.h"

Group::Group()
{

};

Window::Window()
{

};

Map::~Map()
{
   for (size_t i=0; i<groups.size(); ++i)
      delete groups[i];
}
