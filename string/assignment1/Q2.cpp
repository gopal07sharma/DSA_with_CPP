#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ; 
    getline(cin , str);
    int count = 0 ;
    int length = str.length();
    for(int i  = 0 ; i < length ; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'  ){
            count++;
        }
    }
    cout<<count;


}