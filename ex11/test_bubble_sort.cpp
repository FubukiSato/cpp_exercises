//s1270052 Fubuki Sato
#include <iostream>
#include <vector>
#include <stdio.h>
 
int main(){
std::vector<int> vec{ 1, 2, 3, 4, 5 };
std::vector<int>::iterator itr = vec.begin();

//itrが指す要素を表示
//1
std::cout << *itr << std::endl;

//次の要素に移動
itr++;

//2
std::cout << *itr << std::endl;

//前の要素に移動
itr--;

//1
std::cout << *itr << std::endl;

//3つ後ろの要素に移動
itr += 3;

//4
std::cout << *itr << std::endl;
}
