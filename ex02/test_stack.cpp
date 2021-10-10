// test_stack.cpp
// Insert the relevant headers here
#ifndef INCLUDED_TEST_STACK
#define INCLUDED_TEST_STACK

#include <iostream>
#include <string>
#include "stack.h"


int main(void) {
    string data;
    int number;
  // COMPLETE
  // Write tests for testing your Stack implementation. 
  Stack s1;
  while(1){
      cout << "Please enter the corresponding number.(Enter 0 to exit)\n";
      cout << "1: empty\n" "2: full\n" "3: size\n" "4: push\n" "5: pop\n" "6: top\n\n" "->";
      cin >> number;
      if(number == 0) break;
      switch(number){  
          case 1: 
            if(s1.empty()){
                cout << "stack is empty\n";
            }else{
                cout << "stack is not empty\n";
            }
            break;

            case 2:
            if(s1.full()){
                cout << "stack is full\n";
            }else{
                cout << "stack is not full\n";
            }
            break;

            case 3:
                cout << s1.size() << '\n';
                break;

            case 4:
                cout << "Please enter a string.\n" "->";
                cin >> data;
                s1.push(data);
                break;
            
            case 5:
                s1.pop();
                break;
            
            case 6:
                data = s1.top();
                cout << data << '\n';
                break;

            default:
                break;
      }
  }
}

#endif