#ifndef INCLUDED_STACK
#define INCLUDED_STACK

#include <iostream>
#include <string>
#include "stack.h"


using namespace std;

    bool  Stack::empty(){
        if (_top == -1) {
            cout << "emptyです\n";
            return true;
        } else {
            cout << "emptyではありません\n";
            return false;
        }
    }

    bool Stack::full(){
        if (_top == 99 ) {
            cout << "fullです\n";
            return true;
        } else {
            cout << "fullではありません\n";
            return false;
        }
    }

    int Stack::size(){
        return _top+1;
    }

    void Stack::push(string sente){
        if (_top == 99) {
            cerr << "overflow" << endl;
        }else{
        _data[++_top] = sente;
        }
    }

    void Stack::pop(){
        if (_top == -1) {  
            cerr << "underflow" << endl;  
        } else {
            _top--;
        }
    }

    string Stack::top(){
        return _data[_top];
    }


#endif