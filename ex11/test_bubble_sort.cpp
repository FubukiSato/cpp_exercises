//s1270052 Fubuki Sato
#include <iostream>
#include <vector>

using namespace std;

namespace PL4 {  
 template <class FwdIt>
 void
 sort(FwdIt begin, FwdIt end);
}

int main(){

vector<int> vecint{11,25,4,555,67,3,1};
vector<int>::iterator itr1 = vecint.begin();
vector<int>::iterator itr2 = vecint.end();

vector<double> vecdouble{1.3,25.4,4.44,555.21,67.1,3.22,1.1};
vector<double>::iterator itr3 = vecdouble.begin();
vector<double>::iterator itr4 = vecdouble.end();

PL4::sort(itr1,itr2);

while(itr1 != itr2){
    cout<<*itr1 <<" "<<endl;
    *itr1++;
}

cout<<""<<endl;

PL4::sort(itr3,itr4);

while(itr3 != itr4){
    cout<<*itr3 <<" "<<endl;
    *itr3++;
}

}

namespace PL4 {  
 template <class FwdIt>
 void
 sort(FwdIt begin, FwdIt end){
    while (begin < end) {
    auto it1 = begin;
    auto it2 = begin + 1;
    while (it2 < end) {
      if (*it1 < *it2){
        
      }
      else{
        std::swap(*it2, *it1);
      } 
      ++it1;
      ++it2;
    }
    --end;
  }
 }
}