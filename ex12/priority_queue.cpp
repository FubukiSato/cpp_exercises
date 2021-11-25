#include <iostream>
#include <queue>
#include <list>
#include <math.h>

struct Point {
 Point() : x(0.0), y(0.0), z(0.0) {}
 Point(double x, double y, double z) : x(x), y(y), z(z) {}
 double x, y, z;
};

typedef std::priority_queue<int, std::list<Point> > doublepriority_queue;

namespace L12{
template <class List>
List find_k_closest(int k,List list){

    return list;
}
}


bool Compare(Point p1,Point p2){
    if(sqrt(pow(p1.x,2)+pow(p1.y,2)+pow(p1.z,2)) < sqrt(pow(p2.x,2)+pow(p2.y,2)+pow(p2.z,2))) return true;
    else return false;
}


int main(void) {
  // COMPLETE 
  // Add code to test your implementation of the function find_k_closest()
  Point p1 = Point(1.0,3.0,5.0);
  Point p2 = Point(3.0,4.0,3.0);
  Point p3 = Point(2.0,5.0,6.0);
  Point p4 = Point(4.0,1.0,3.0);
  Point p5 = Point(9.0,1.0,1.0);

  doublepriority_queue doublepriority_queue1;
  doublepriority_queue1.push(p1);
  doublepriority_queue1.push(p2);
  doublepriority_queue1.push(p3);
  doublepriority_queue1.push(p4);
  doublepriority_queue1.push(p5);

  L12::find_k_closest(3,doublepriority_queue1);

  while(!doublepriority_queue1.empty()){
      std::cout<<doublepriority_queue1.top()<<std::endl;
  }

  return 0;
}