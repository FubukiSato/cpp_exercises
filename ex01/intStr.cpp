//s1270052 佐藤風吹


#ifndef INCLUDED_INTSTR
#define INCLUDED_INTSTR

#include <iostream>
#include "intStr.h"

char* intToStr(int num){
    int i;
    int temp3=0;
    int cnt=0;
    char *ans;
    int afnum = num;
    int cnt2 = 0;
    

    while (num /= 10) {
        ++cnt;
    }

    cnt2 = cnt;
    ans = (char*)malloc(cnt);

    for(i=0; i<=cnt ;i++){
        temp3 = afnum % 10;
        afnum /= 10;

        char c = '0' + temp3;

        ans[cnt2] = c;
        
        cnt2 -= 1;
    }

    printf("%s\n",ans);
    
    return ans;
}

int strToInt(char* str){
    std::cout << "test_strToInt" << std::endl;
    return 1;
}


#endif