//s1270052 Fubuki Sato

#include "stack.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main(int argc, char *argv[]){
    Stack s2;
    FILE *file;
    char *data;
    string line,temp;
    int j=0,count=0,max=0;

    ifstream input(argv[1]);
      if (!input.is_open()) {
        cerr << "can not open file" << endl;
        exit(1);
      }

    getline(input,line);

    count = stoi(line);

    while (getline(input,line)){
        s2.push(line);
        if(max < line.size()){
          max = line.size();
        }
    }

    s2.separator(count);
    cout << '\n'; 

    while(j < count){
        temp = s2.top();
        cout << temp << endl;
        j++;
    }

    s2.separator(count);
    cout << '\n'; 

  input.close();

return 0;

}

