#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str ;
    getline(cin , str);
    int length = str.length();
    reverse(str.begin()+4 , str.end());
    cout<<str;
    }