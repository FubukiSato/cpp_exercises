#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>



bool isPalindrome(std::string s1){

    std::string cpy;

    transform (s1.begin(), s1.end(), s1.begin(), tolower);
    
    s1.erase(std::remove_if(s1.begin(), s1.end(), ispunct), s1.end());

    s1.erase(std::remove(s1.begin(), s1.end(), ' '), s1.end());

    cpy = s1;

    std::reverse(cpy.begin(),cpy.end());

    if(s1 == cpy){
        return true;
    }else{
        return false;
    }

    
    return true;
}


int main(){
    std::string s1("Don't nod");
    std::string s2("I am hero");

    if(isPalindrome(s1) == true){
        std::cout << "this is Palindrome" << std::endl;
    }else{
        std::cout << "this is not Palindrome" << std::endl;
    }

    if(isPalindrome(s2) == true){
        std::cout << "this is Palindrome" << std::endl;
    }else{
        std::cout << "this is not Palindrome" << std::endl;
    }
    return 0;
}