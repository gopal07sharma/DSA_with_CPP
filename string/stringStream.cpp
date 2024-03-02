#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str = "My name is Gopal Sharma";
    stringstream ss (str);
    string temp;
    while(ss>> temp){
        cout<< temp<<endl;
    }

}