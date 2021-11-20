//s1270052 Fubuki Sato
#include <iostream>
#include <sstream>
#include <ctype.h>
#include <stack>

using namespace std;

double evaluateFP(std::string);

//( ( ( 2.0 * ( 3.0 - 1.0 ) ) - 5.0 ) * 3.0 ) 

int main(void){
    string s;
    double ans;
    cout<< "Input: ";
    getline(cin,s);

    ans = evaluateFP(s);
    
    cout<< "Output: " << ans << endl;
}

double evaluateFP(string s){
    stringstream ss;
    stack<double> s1;
    stack<string> s2;
    string output;
    double num=0.0;
    ss << s;
    
    while(getline(ss, s, ' ')){
        if(s == "(" || s == " "){        
            continue;
        }
        else if(s == ")"){ 
        }
        else if(s == "+" || s == "-" || s == "*" || s == "/"){ 
            s2.push(s);
        }
        else{ 
            num = stod(s);
            s1.push(num);
        }
    }

    return 3.2;
}