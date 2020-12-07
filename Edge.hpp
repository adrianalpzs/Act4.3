#ifndef __EDGE
#define __EDGE

#include <iostream>

using namespace std;

class Edge{
  protected:
    string razon;
    int destination;

  public:
    Edge(int, string);
    ~Edge();
    
};

#endif // __EDGE