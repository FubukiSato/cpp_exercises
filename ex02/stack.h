//s1270052 Fubuki Sato

#ifndef INCLUDED_STACK_H
#define INCLUDED_STACK_H

// Insert the relevant headers here 
#include <string>

using namespace std; 

class Stack {
public:
 Stack(int max_size=100) : _max_size(max_size), 
   _top(-1), _data(new string[max_size]) {}

 ~Stack() { delete[] _data; }

 // interface
 
 // check whether the stack is empty
 bool empty();

 // check whether the stack is full
 bool full();

 // return the number of elements
 int size();

 // insert element on top
 // print an error message on std::cerr when overflow
 void push(string);

 // remove element on top
 // print an error message on std::cerr when underflow
 void pop();

 // acces the topmost element
 string top();

private:
  int _max_size; // capacity of the fixed-size stack 
  int _top; // index to the top of the stack 
  string *_data; // data container 

};
#endif 