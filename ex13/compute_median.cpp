#include <iostream>
#include <vector>

double compute_median(std::vector<double> &vec){
    size_t n = vec.size() / 2;
    nth_element(vec.begin(), vec.begin()+n, vec.end());
    return vec[n];
}

std::vector<double> compute_k_closest(int k,std::vector<double> &vec){
    std::vector<double> ansvec;
    std::vector<double> vec2;
    double center;

    center = compute_median(vec);

    std::cout << center << std::endl;

    return ansvec;
}

int main(){
    double ans;
    std::vector<double> vec{7.0,14.0,10.0,12.0,2.0,11.0,29.0,3.0,4.0};
    std::vector<double> ansvec;

    ansvec = compute_k_closest(3,vec);

    return 0;
}