//s1270052 Fubuki Sato
#ifndef Mat_H
#define Mat_H

#include <iostream>
#include <float.h> 
#include <math.h>
using namespace std;

template <typename T, int N>
class Mat{
    public:
    Mat& operator+ (const Mat& other){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            entries[i][j] += other.entries[i][j];
        }
    }
    return *this;
    }

    Mat& operator- (const Mat& other){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            entries[i][j] = entries[i][j] - other.entries[i][j];
        }
    }
    return *this; 
    }

    Mat& operator* (const Mat& other){
    Mat c = *this;
    Mat a = *this;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            a.entries[i][j] = 0.0;
            for(int k=0;k<N;++k){
                a.entries[i][j] += c.entries[i][k]*other.entries[k][j];
            }
        }
    }
    return a;
    }
    Mat& operator+= (const Mat& other){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            entries[i][j] += other.entries[i][j];
        }
    }
    return *this;
    }

    Mat& operator-= (const Mat& other){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            entries[i][j] = entries[i][j] - other.entries[i][j];
        }
    }
    return *this; 
    }

    Mat& operator*= (const Mat& other){
    Mat c = *this;
    Mat a = *this;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            a.entries[i][j] = 0.0;
            for(int k=0;k<N;++k){
                a.entries[i][j] += c.entries[i][k]*other.entries[k][j];
            }
        }
    }
    return a;
    }

    Mat& operator- (){
    Mat result;
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            result.entries[i][j] = -1 * entries[i][j];
        }
    }
    return result;
    }

    bool operator== (const Mat other){
    Mat m = *this;
    int flag = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(fabs(m.entries[i][j] - other.entries[i][j]) > DBL_EPSILON){
                flag = 1; 
                return false;
            }
        }
    }
    return true;
    }

    T& operator()(int i, int j){
    Mat m = *this;
    return m.entries[i][j];
    }

    friend ostream& operator<< (ostream& os, const Mat& other){
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            os << other.entries[i][j] << " ";
        }
        os << endl;
    }
    return os;
    }
    
    Mat(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i == j){
                entries[i][j] = 1.0;
            }else{
                entries[i][j] = 0.0;
            }
        }
    }
    }
    Mat(T mat[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            entries[i][j] = 0.0;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            entries[i][j] = mat[i][j];
        }
    }
    }

    private:
    T entries[N][N];
};

#endif