//Karen Rocío Macías Ávila - A01657935
//Jorge Antonio Hoyo García - A01658142
//Adriana Inés López Sánchez - A01656937
//Mariana Muñoz Fernández - A01653166
//El siguiente codigo muestra el funcionamiento de un grafo

#include <iostream>
#include "Graph.hpp"

int main() {
  Graph nuevo;
  nuevo.readFile("bitacoraACT4_3_B.txt");
  nuevo.mayorFanOut(5);
  cout << "Este es el botMaster: ";
  nuevo.mayorFanOut(1);  
}