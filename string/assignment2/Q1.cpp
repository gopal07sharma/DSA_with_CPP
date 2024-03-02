#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str ;
    getline(cin , str);
    
    string rev ;
    rev = str;
    reverse(rev.begin(), rev.end());

    cout<<str+rev;


    }