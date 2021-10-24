//s1270052 佐藤風吹
#include <iostream>
#include "intStr.h"

char* intToStr(int num){
    int i;
    int temp3=0;
    int cnt=0;
    char *ans;
    int cnt2 = 0;
    int flag=0;

    if(num<0){
        num *= -1;
        flag++;
    }

    int afnum = num;

    while (num /= 10) {
        ++cnt;
    }

    if(flag == 1){
        cnt++;
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

    if(flag == 1){
        ans[cnt2+1] = '-';
    }

    return ans;
}

int strToInt(char* str){
    int sum = 0;
    int i = 0;
    int cnt = 0;
    int temp = 1;
    int temp2 = 0;
    

    while(str[i] != 0){
        cnt++;
        i++;
    }

    temp2 = cnt;

    for(i=0;i<temp2;i++){
        if(str[cnt-1] == '-') {
            sum *= -1;
            break;
        }
        int temp2 = str[cnt-1] - '0';
        sum += temp2*temp;
        temp *= 10;
        cnt--;
    }
    

    return sum;
}