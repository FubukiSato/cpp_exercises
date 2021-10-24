//s1270052 佐藤風吹


#ifndef INCLUDED_INTSTR_H_
#define INCLUDED_INTSTR_H_

//関数を定義
char* intToStr(int);
int strToInt(char*);

#endif



//コンパイル方法
//g++ -c intStr_main.cpp
//g++ -c intStr.cpp
//g++ -o Temp intStr_main.o intStr.o