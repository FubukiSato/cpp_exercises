// stringToInt.cpp
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

using namespace std;

int stringToInt(const string& input) {
  stringstream instream;
  instream << input;
  int number;
  instream >> number;

  if (instream.fail()) {
    throw invalid_argument("Error: the input can not be converted");
  }

  char left;
  instream >> left;
  if (!instream.fail()) {
    throw invalid_argument("Error: there are some characters left after the int");
  }

  // everything went fine: returns the int
  return number;
 }

int main(void) {
 try{
    string test1 = "11";
    cout << stringToInt(test1) << endl;
}catch(const invalid_argument& e){
    cout << e.what() << endl;
};

try{
    string test2 = "cc11";
    cout << stringToInt(test2) << endl;
}catch(const invalid_argument& e){
    cout << e.what() << endl;
};

try{
    string test3 = "11cc";
    cout << stringToInt(test3) << endl;
}catch(const invalid_argument& e){
    cout << e.what() << endl;
};

  return 0;
}