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

vector<int> vec{11,25,4,555,67,3,1};
vector<int>::iterator itr1 = vec.begin();
vector<int>::iterator itr2 = vec.end();

PL4::sort(itr1,itr2);

while(itr1 != itr2){
    cout<<*itr1 <<" "<<endl;
    *itr1++;
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
      if (*it1 > *it2) std::swap(*it1, *it2);
      ++it1;
      ++it2;
    }
    --end;
  }
 }
}