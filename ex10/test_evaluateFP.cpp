//s1270052 Fubuki Sato
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

double evaluateFP(std::string);

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
    double num;
    ss << s;
    
    while(getline(ss, s, ' ')){
        if(s == "("){        
            continue;
        }
        else if(s == ")"){
            double num1 = s1.top();
            s1.pop();
            double num2 = s1.top();
            s1.pop();
            if(s2.top() == "+"){
                s1.push(num2 + num1);
                //cout << num2 << "+" << num1 << endl;
                s2.pop();
            }
            else if(s2.top() == "-"){
                s1.push(num2 - num1);
                //cout << num2 << "-" << num1 << endl;
                s2.pop();
            }
            else if(s2.top() == "*"){
                s1.push(num2 * num1);
                //cout << num2 << "*" << num1 << endl;
                s2.pop();
            }
            else if(s2.top() == "/"){
                s1.push(num2 / num1);
                //cout << num2 << "/" << num1 << endl;
                s2.pop();
            }
        }
        else if(s == "+" || s == "-" || s == "*" || s == "/"){ 
            s2.push(s);
        }
        else{ 
            num = stod(s);
            s1.push(num);
        }
    }  
    return s1.top();
}