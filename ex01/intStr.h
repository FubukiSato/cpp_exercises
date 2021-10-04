#ifndef INCLUDED_INTSTR
#define INCLUDED_INTSTR

//関数を定義　
char* intToStr(int);
int strToInt(char*);

#endif



//コンパイル方法
//g++ -c intStr_main.cpp 
//g++ -c intStr.cpp
//g++ -o Temp intStr_main.o intStr.o