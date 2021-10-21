//s1270052 Fubuki Sato

#include <iostream>
#include "Date.h"

void Date::set(const int m, const int d,const int y) {
    month = m;
    day = d;
    year = y;
}

void Date::print()const{
    std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
}

int Date::get_month()const{
    return month;
}

int Date::get_year()const{
    return year;
}

int Date::get_day()const{
    return day;
}

void Date::inc_day() {
    if(day == 31){
        if(month == 12){
            year++;
            month = 1;
            day = 1;
        }
        else{
            month++;
            day = 1;
        }
    }else{
        day++;
    }
}

void Date::inc_month() {
    if(month == 12){
            year++;
            month = 1;
        }
        else{
            month++;
        }
}

void Date::inc_year() {
    year++;
}