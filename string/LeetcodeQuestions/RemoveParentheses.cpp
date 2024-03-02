#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string removeOuterParentheses(string s ){
       sort(s.begin() , s.end());
       cout<< s;  
    }
int main(){
    string s = "(()())(())";
   removeOuterParentheses( s);

}