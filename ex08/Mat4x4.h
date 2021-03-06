//s1270052 Fubuki Sato
#ifndef Mat4x4_H
#define Mat4x4_H

#include <iostream>
using namespace std;

class Mat4x4{
    public:
    Mat4x4& operator+ (const Mat4x4& other);
    Mat4x4& operator- (const Mat4x4& other);
    Mat4x4& operator* (const Mat4x4& other);
    Mat4x4& operator+= (const Mat4x4& other);
    Mat4x4& operator-= (const Mat4x4& other);
    Mat4x4& operator*= (const Mat4x4& other);
    Mat4x4& operator- ();
    bool operator== (const Mat4x4 other);
    double& operator()(int i, int j);
    friend ostream& operator<< (ostream& os, const Mat4x4& other);
    

    Mat4x4();
    Mat4x4(double mat[4][4]);

    private:
    double entries[4][4];
};

#endif