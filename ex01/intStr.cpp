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

    

    while (num /= 10) {
        ++cnt;
    }

    std::cout << cnt << std::endl;

    for(i=cnt; 0<i ;i--){
        for(int j=0;j<i;j++){
            temp2 *= 10;
        }
        std::cout << temp2 << std::endl;
        temp3 = num / temp2;
        std::cout << temp3 << std::endl;
        temp2 = 1;
        
    }
    
    return temp;
}

int strToInt(char* str){
    std::cout << "test_strToInt" << std::endl;
    return 1;
}


#endif