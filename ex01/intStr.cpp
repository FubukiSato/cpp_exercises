//s1270052 佐藤風吹


#ifndef INCLUDED_INTSTR
#define INCLUDED_INTSTR

#include <iostream>
#include "intStr.h"

char* intToStr(int num){
    char *temp = "a";
    int i;
    int temp2=1;
    int temp3=0;
    int cnt=0;
    char array[100];
    int afnum = num;
    int temp4 = 0;

    

    while (num /= 10) {
        ++cnt;
    }

    for(i=0; i<=cnt ;i++){
        temp3 = afnum % 10;
        afnum /= 10;

        char c = '0' + temp3;

        array[i] = c;

        std::cout << array[i] << std::endl;
        
    }
    
    return array;
}

int strToInt(char* str){
    std::cout << "test_strToInt" << std::endl;
    return 1;
}


#endif