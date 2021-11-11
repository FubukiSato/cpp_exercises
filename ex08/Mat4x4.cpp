//s1270052 Fubuki Sato
#include <iostream>
#include <float.h> 
#include <math.h>
#include "Mat4x4.h"

Mat4x4& Mat4x4::operator+ (const Mat4x4& other){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            entries[i][j] += other.entries[i][j];
        }
    }
    return *this;
}

Mat4x4& Mat4x4::operator- (const Mat4x4& other){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            entries[i][j] = entries[i][j] - other.entries[i][j];
        }
    }
    return *this; 
}

Mat4x4& Mat4x4::operator* (const Mat4x4& other){
    Mat4x4 c = *this;
    Mat4x4 a = *this;
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            a.entries[i][j] = 0.0;
            for(int k=0;k<4;++k){
                a.entries[i][j] += c.entries[i][k]*other.entries[k][j];
            }
        }
    }
    return a;
}

Mat4x4& Mat4x4::operator+= (const Mat4x4& other){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            entries[i][j] += other.entries[i][j];
        }
    }
    return *this;
}

Mat4x4& Mat4x4::operator-= (const Mat4x4& other){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            entries[i][j] = entries[i][j] - other.entries[i][j];
        }
    }
    return *this; 
}

Mat4x4& Mat4x4::operator*= (const Mat4x4& other){
    Mat4x4 c = *this;
    Mat4x4 a = *this;
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            a.entries[i][j] = 0.0;
            for(int k=0;k<4;++k){
                a.entries[i][j] += c.entries[i][k]*other.entries[k][j];
            }
        }
    }
    return a;
}


//OK
Mat4x4& Mat4x4::operator- (){
    Mat4x4 result;
    for (int i=0; i<4; ++i){
        for (int j=0; j<4; ++j){
            result.entries[i][j] = -1 * entries[i][j];
        }
    }
    return result;
}


//OK
bool Mat4x4::operator== (const Mat4x4 other){
    Mat4x4 m = *this;
    int flag = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(fabs(m.entries[i][j] - other.entries[i][j]) > DBL_EPSILON){
                flag = 1; 
                return false;
            }
        }
    }
    return true;
}


//OK
double& Mat4x4::operator()(int i, int j){
    Mat4x4 m = *this;
    return m.entries[i][j];
}

//OK
ostream& operator<< (ostream& os, const Mat4x4& other){
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            os << other.entries[i][j] << " ";
        }
        os << endl;
    }
return os;
}

//OK
Mat4x4::Mat4x4(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i == j){
                entries[i][j] = 1.0;
            }else{
                entries[i][j] = 0.0;
            }
        }
    }
}

//OK
Mat4x4::Mat4x4(double mat[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            entries[i][j] = 0.0;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            entries[i][j] = mat[i][j];
        }
    }
}