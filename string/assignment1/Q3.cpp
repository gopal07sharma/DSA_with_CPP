#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "12345432";
    bool flag = true;
    int length = str.length();
    int s  ,e ; 
    s = 0 ;
    e = str.length()-1;
    while(s<e){
      if(str[s]==str[e]){
        s++;
        e--;
      }
      else {
          flag = false ; 
          break;
      }}
      if(flag==true){
        cout<<"string is palindrome"<<endl;
      }
      else{
        cout<<"String is not Palindrome";
      }
    }