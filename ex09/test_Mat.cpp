//s1270052 Fubuki Sato
#include <iostream>
#include <cassert>
#include "Mat.h"

using namespace std;

int main(void) {
 Mat<double,5> A; // A = I
 double coefficients[5][5] = {{1.0,2.0,3.0,4.0,5.0},{5.0,6.0,7.0,8.0,9.0},{9.0,10.0,11.0,12.0,13.0},{13.0,14.0,15.0,16.0,17.0},{5.0,6.0,7.0,8.0,9.0}};
 Mat<double,5> B(coefficients);
 
 Mat<double,5> C = A * B;

 assert(C == B);

 C += B;
 C -= A;

 assert(C(0,0) == 1.0);
 assert(C(1,0) == 10.0);
 assert(C(1,2) == 14.0);

 Mat<double,5> D = -A;
 assert(D(0,0) == -1.0);
 assert(D(1,1) == -1.0);
 assert(D(2,2) == -1.0);
 assert(D(3,3) == -1.0);

 cout << A << endl;
 cout << B << endl;
 cout << C << endl;
 cout << D << endl;

 cout << "Tests passed" << endl;

 return 0;
}