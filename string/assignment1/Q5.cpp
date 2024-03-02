#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str ;
    getline(cin , str);
    cout<<"Number in String "<<"'"<<str <<"'";
    stringstream obj;
    int intdata;
    obj << str;
    obj >> intdata;
    cout<<endl<< "representation of string in number "<< intdata;


    }