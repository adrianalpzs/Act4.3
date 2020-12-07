#include "Graph.hpp"

Graph::Graph(){
}


Graph::~Graph(){
}


//Complejidad lineal O(n)
void Graph::readFile(string archivo){
  ifstream f;
  f.open(archivo);
  //Guardamos en un vector las n ips que vienen al principio del archivo
  string numIps, incidencias;
  getline(f, numIps, ' ');
  getline(f, incidencias);
  string ip;
  for(int i = 0; i < stoi(numIps); i ++){
    //Llenamos el vector de todas las ips
    getline(f, ip);
    datos[ip] = i;
    ips.push_back(ip);
    list<Edge> entry;
    resultado.push_back(entry);
  }
  string mes, dia, hora, ip_origen, puerto, ip_destino, puertod, razon;
  int nodoOrigen, nodoDestino;
  //Para que termine de leer el archivo 
  while(!f.eof()){
    //Leemos el archivo
    getline(f, mes, ' ');
    getline(f, dia, ' ');
    getline(f, hora, ' ');
    getline(f, ip_origen, ':');
    getline(f, puerto, ' ');
    getline(f, ip_destino, ' ');
    getline(f, puertod, ' ');
    getline(f, razon);
    nodoOrigen = datos.find(ip_origen)->second;
    nodoDestino = datos.find(ip_destino)->second;
    loadGraph(nodoOrigen,nodoDestino,razon);
  }
}

//Complejidad lineal O(n)
void Graph::loadGraph(int s, int d, string r){
  Edge arista(d,r);
  resultado.at(s).push_back(arista);
}

//Complejidad lineal O(n)
void Graph::mayorFanOut(int n){
  vector<Dato> mayor;
  mayor.push_back(Dato(0,"no es una ip"));
  for(int i = 0; i < resultado.size(); i++){
    //Vamos a poner la variable
    Dato fanOut(resultado.at(i).size(),ips.at(i));
    mayor.push_back(fanOut);
  }
  sort(mayor.begin(),mayor.end(),[](const Dato& d1, const Dato& d2){
    return d1 < d2;
  });
  for(int i=mayor.size()-1; i>=mayor.size()-n; i--){
    cout << mayor.at(i).getIpOrigen()<< ' ' << mayor.at(i).getSize()<< endl;
  }
}
