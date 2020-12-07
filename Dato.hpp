#include <iostream>

#ifndef __DATO
#define __DATO

using namespace std;

class Dato{
  public:
    Dato(int , string);
    ~Dato();
    int getSize();
    string getIpOrigen();
    friend bool operator<(const Dato &a1, const Dato &a2);
    friend bool operator>(const Dato &a1, const Dato &a2);
    friend bool operator==(const Dato &a1, const Dato &a2);

  private:
    int size;
    string ip_origen;
    
};


#endif // __DATO