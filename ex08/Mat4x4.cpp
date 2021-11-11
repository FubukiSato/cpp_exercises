#include <iostream>
#include "Mat4x4.h"

Mat4x4& Mat4x4::operator+ (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator- (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator* (const Mat4x4& other){
    
}

Mat4x4& Mat4x4::operator+= (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator-= (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator*= (const Mat4x4& other){

}

Mat4x4& Mat4x4::operator- (){

}

bool Mat4x4::operator== (const int a){

}

bool Mat4x4::operator== (const Mat4x4 a){

}

double& Mat4x4::operator()(int i, int j){

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