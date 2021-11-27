#include <iostream>
#include <cstdio>
#include <queue>
#include <list>
#include <math.h>



struct Point {
 Point() : x(0.0), y(0.0), z(0.0) {}
 Point(double x, double y, double z) : x(x), y(y), z(z) {}
 double x, y, z;
};


bool operator <(const Point p1, const Point p2){
    if(sqrt(pow(p1.x,2)+pow(p1.y,2)+pow(p1.z,2)) < sqrt(pow(p2.x,2)+pow(p2.y,2)+pow(p2.z,2))) return true;
    else return false;
};


bool operator >(const Point p1, const Point p2){
    if(sqrt(pow(p1.x,2)+pow(p1.y,2)+pow(p1.z,2)) > sqrt(pow(p2.x,2)+pow(p2.y,2)+pow(p2.z,2))) return true;
    else return false;
};


class Compare{
    public:
    bool operator()(Point p1,Point p2){
        if(sqrt(pow(p1.x,2)+pow(p1.y,2)+pow(p1.z,2)) < sqrt(pow(p2.x,2)+pow(p2.y,2)+pow(p2.z,2))){ 
            return true;
        }
        else{ 
            return false;
        }
    }
};


/*Point find_k_closest(int k,vector<Point> list){
    std::vector<Point> point;
    for(int i=0;i<k;i++){
        point.push_back(list);
    }
    return list;
}*/

using namespace std;

int main(void) {
    std::priority_queue<Point> doublepriority_queue;
  // COMPLETE 
  // Add code to test your implementation of the function find_k_closest()

  Compare cmp;
  bool ans;

  Point p1 = Point(1.0,3.0,5.0);
  Point p2 = Point(3.0,4.0,3.0);
  Point p3 = Point(2.0,5.0,6.0);
  Point p4 = Point(4.0,1.0,3.0);
  Point p5 = Point(9.0,1.0,1.0);

  //ans = cmp(p1,p2);

  //cout << ans << endl;

  doublepriority_queue.push(p1);
  doublepriority_queue.push(p2); 
  doublepriority_queue.push(p3);
  doublepriority_queue.push(p4);
  doublepriority_queue.push(p5);

  /*find_k_closest(3,doublepriority_queue);*/

  while(!doublepriority_queue.empty()){
      std::cout<<doublepriority_queue.top().x<< " " << doublepriority_queue.top().y << " " << doublepriority_queue.top().z <<std::endl;
      doublepriority_queue.pop();
  }

  return 0;
}