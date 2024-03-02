#include<iostream>
#include<string>
using namespace std;
int main(){
    int count = 0 ; 
    string str;
    getline(cin , str);
     if(str.length()==1){
            cout<<count;
            return count;
        }
    if(str[0]!=str[1]){
        count++;
    }
    for(int i = 1 ; i<str.length()-1 ; i++){
       
        if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
        }
    }
    cout<<count;
}