#ifndef __GRAPH
#define __GRAPH

#include <vector>
#include <list>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "Edge.hpp"
#include "Dato.hpp"
#include <map>

using namespace std;

class Graph{
  public:
    Graph();
    ~Graph();
    void readFile(string);
    void llenaIps(string archivo);
    void mayorFanOut(int);
    void loadGraph(int,int,string);

  private:
    vector<list<Edge>> resultado;
    vector<string> ips;
    map<string,int> datos;
};

#endif
