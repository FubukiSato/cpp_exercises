#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>



bool isPalindrome(){
    return true;
}


int main(){
    std::string s1("Don't nod");
    std::string s2("I am hero");

    transform (s1.begin(), s1.end(), s1.begin(), tolower);
    transform (s2.begin(), s2.end(), s2.begin(), tolower);

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    return 0;
}