#include <iostream>
#include <float.h> 
#include <math.h>
#include "Mat4x4.h"

Mat4x4& Mat4x4::operator+ (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator- (const Mat4x4& other){
    Mat4x4 result;
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result.entries[i][j] = 0.0;
        }
    }
    for(int i=0,j=0;i<4 || j<4;i++,j++){
        result.entries[i][j] = m.entries[i][j] - other.entries[i][j];
    }
    return result;
}

Mat4x4& Mat4x4::operator* (const Mat4x4& other){
    Mat4x4 result;
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result.entries[i][j] = 0.0;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                result.entries[i][j]+= m.entries[i][k]*other.entries[k][j];
            }
        }
    }
    return result;
}

Mat4x4& Mat4x4::operator+= (const Mat4x4& other){
    Mat4x4 result;
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result.entries[i][j] = 0.0;
        }
    }
    for(int i=0,j=0;i<4 || j<4;i++,j++){
        result.entries[i][j] = m.entries[i][j] + other.entries[i][j];
    }
    return result;
}

Mat4x4& Mat4x4::operator-= (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator*= (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator- (){
    Mat4x4 result;
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result.entries[i][j] = 0.0;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            result.entries[i][j] = -1 * m.entries[i][j];
        }
    }
    return result;
}

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

double& Mat4x4::operator()(int i, int j){
    Mat4x4 m = *this;
    return m.entries[i][j];
}

ostream& operator<< (ostream& os, const Mat4x4& other){
    
}

Mat4x4::Mat4x4(){
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i == j){
                m.entries[i][j] = 1.0;
            }else{
                m.entries[i][j] = 0.0;
            }
        }
    }
}

Mat4x4::Mat4x4(double mat[4][4]){
    Mat4x4 m = *this;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            m.entries[i][j] = mat[i][j];
        }
    }
}