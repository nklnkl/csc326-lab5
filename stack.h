#ifndef _STACK
#define _STACK

#include <iostream>
using namespace std;

Class Stack {
  public:
    Stack(int m = 0);
    ~Stack();
  private:
    /*
      Defaults to array based.
      0: Array based.
      1: Pointer based.
    */
    int memoryType;
};

#endif
