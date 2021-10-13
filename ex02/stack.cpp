//s1270052 Fubuki Sato

#ifndef INCLUDED_STACK
#define INCLUDED_STACK

#include <iostream>
#include <string>
#include "stack.h"


using namespace std;

    bool  Stack::empty(){
        if (_top == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool Stack::full(){
        if (_top == 99 ) {
            return true;
        } else {
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
        string data = _data[_top];
        _top--;
        return data;
    }


#endif