#include <iostream>
#include <vector>
#include <cmath>

double center=0.0;

double compute_median(std::vector<double> &vec){
    size_t n = vec.size() / 2;
    nth_element(vec.begin(), vec.begin()+n, vec.end());

    return vec[n];
}

bool Compare(const double num1,const double num2){
    if((abs(num1-center)) < abs((num2-center))){
        return true;
    }else{
        return false;
    }
}

std::vector<double> compute_k_closest(int k,std::vector<double> &vec){
    std::vector<double> ansvec;

    center = compute_median(vec);

    size_t n = vec.size() / 2;
    nth_element(vec.begin(), vec.begin()+n, vec.end(),Compare);

    ansvec.assign(&vec[0], &vec[k]);

    return ansvec;
}

int main(){
    double ans;
    std::vector<double> vec{7.0,14.0,10.0,12.0,2.0,11.0,29.0,3.0,4.0};
    std::vector<double> ansvec;

    int k=3;

    ansvec = compute_k_closest(k,vec);

    for(int i=0;i<k;i++){
        std::cout << ansvec[i] << std::endl;
    }

    return 0;
}