#include "Dato.hpp"

Dato::Dato(int s, string ip){
  size = s;
  ip_origen = ip;
}

Dato::~Dato(){
  
}

int Dato::getSize(){
  return size;
}

string Dato::getIpOrigen(){
  return ip_origen;
}

bool operator<(const Dato &a1, const Dato &a2) {
  return a1.size < a2.size;
} 

bool operator>(const Dato &a1, const Dato &a2) {
  return a1.size > a2.size;
} 

bool operator==(const Dato &a1, const Dato &a2) {
  return a1.size == a2.size;
} 
