// num_string_main.cpp
// Include the appropriate libraries

#ifndef INCLUDED_INTSTR_MAIN
#define INCLUDED_INTSTR_MAIN

#include <iostream>
#include "intStr.h"


int main(void) {
  // COMPLETE
  // Write tests for the functions intToStr() and strToInt()

  int num = 12345;
  char *str = "12345";

  intToStr(num);
  strToInt(str);

}

#endif

