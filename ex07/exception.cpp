// exception.cpp
#include <stdexcept>
#include <cstdio>
#include <iostream>

using namespace std;

void doSomeComputation() {   
 throw runtime_error("failure during doing some computation");
}

void example() {
 FILE* logfile = fopen("logfile.txt", "w+");
 if (!logfile) {
   throw runtime_error("failed to open file");
 }

 fputs("log - 1", logfile);

 // Call a function that performs some computation and may throw 
 // an exception
 doSomeComputation();

 fputs("log - 2", logfile);
    
 cout << "closing logfile" << endl;
 fclose(logfile);
}

int main(void) {
 cout << "Calling example()" << endl;
 example();
 cout << "After calling example()" << endl;
 return 0;
}