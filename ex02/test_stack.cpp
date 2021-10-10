// test_stack.cpp
// Insert the relevant headers here
#ifndef INCLUDED_TEST_STACK
#define INCLUDED_TEST_STACK

#include <iostream>
#include "stack.h"


int main(void) {
  // COMPLETE
  // Write tests for testing your Stack implementation. 
  Stack s1;
  s1.push("hoge1");
  s1.push("hoge2");
  s1.push("hoge3");
  cout << s1.size() << '\n';
}

#endif