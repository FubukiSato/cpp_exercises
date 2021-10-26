// test_ArrayStack.cpp
#include "ArrayStack.h"

int main(void) {

//############# Question1 ######################################################

// Create an instance of ArrayStack named stack1 
//   using the default constructor
ArrayStack stack1;
// Push 1.0, 2.0, 3.0, 4.0, 5.0 in this stack
stack1.push(1.0);
stack1.push(2.0);
stack1.push(3.0);
stack1.push(4.0);
stack1.push(5.0);

// Create another instance of ArrayStack named stack2
// using the other constructor, specify an original size of 5
ArrayStack stack2(5);
// Push 1.0, 2.0, ..., 10.0 in this stack
stack2.push(1.0);
stack2.push(2.0);
stack2.push(3.0);
stack2.push(4.0);
stack2.push(5.0);
stack2.push(6.0);
stack2.push(7.0);
stack2.push(8.0);
stack2.push(9.0);
stack2.push(10.0);

//############# Question2 ######################################################

ArrayStack stack3(stack1);
ArrayStack stack4 = stack2; //宣言の段階で初期化しているためコピーコンストラクタが呼ばれる

// Assignment
ArrayStack stack5;
stack5 = stack1;            //これはただの代入なので割り当て演算子のやつが呼ばれる
ArrayStack stack6(10);
stack6 = stack6;

// COMPLETE 
// Show the content of the stacks 'stack1', 'stack3' and 'stack4' by calls to pop() and top() 
// (use a loop and the method ArrayStack::empty() for the termination condition)

while(1){
    if(stack1.empty() == true) break;
    std::cout<< stack1.top() << " ";
    stack1.pop();
}

std::cout << "" << std::endl;

while(1){
    if(stack3.empty() == true) break;
    std::cout<< stack3.top() << " ";
    stack3.pop();
}

std::cout << "" << std::endl;

while(1){
    if(stack4.empty() == true) break;
    std::cout<< stack4.top() << " ";
    stack4.pop();
}

std::cout << "" << std::endl;

return 0;
}