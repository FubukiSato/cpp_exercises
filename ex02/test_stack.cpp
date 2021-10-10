// test_stack.cpp
// Insert the relevant headers here
#ifndef INCLUDED_TEST_STACK
#define INCLUDED_TEST_STACK

#include <iostream>
#include <string>
#include "stack.h"


int main(void) {
    string data;
  // COMPLETE
  // Write tests for testing your Stack implementation. 
  Stack s1;
  s1.push("hoge1");
  s1.push("hoge2");
  s1.push("hoge3");
  s1.pop();
  for(int i=0;i<4;i++){
  data = s1.top();
  cout << data << '\n';
  }
}

#endif