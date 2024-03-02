#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = " the sky is blue";
    int a;
    a = 0 ;
    stringstream ss(str);
    string temp ;
    string temp1 ;
    while(ss>>temp){
      temp1 = temp +" "+ temp1;

    }
    // temp1.pop_back();
    // reverse(temp1.begin(), temp1.end());
    cout<<temp1;


    
    
}