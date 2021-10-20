#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date() {}
  void set(int m, int d, int y);
  void print();
  int get_month();
  int get_day();
  int get_year();
  void inc_day(); 
  void inc_month();
  void inc_year();
private:
  int month, day, year;
};

#endif