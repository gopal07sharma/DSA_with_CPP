#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "aagasadgdfgsdg";
    cout<<str <<endl;
    int length= str.length();
    for(int i = 0 ; i<length ; i++){
        if(i%2==1){
            str[i]='#';
        }
    }
    cout<<str;

}