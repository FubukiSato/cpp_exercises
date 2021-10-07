//s1270052 佐藤風吹


// num_string_main.cpp
// Include the appropriate libraries

#ifndef INCLUDED_INTSTR_MAIN
#define INCLUDED_INTSTR_MAIN

#include <iostream>
#include "intStr.h"


int main(void) {
  // COMPLETE
  // Write tests for the functions intToStr() and strToInt()

  int num = 1234456;
  char *str = "12345";
  char *ans;

  ans = intToStr(num);

  free(ans);

  strToInt(str);

}

#endif

