#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string str ;
    getline(cin , str);
    cout<<"Number in String "<<"'"<<str <<"'";
    int max ;
    stoi(str);
    max = INT_MIN;
    int result;
    for(int i = 0 ; i< str.length(); i++){
        if(max<str[i]){
            max=str[i];
        }
    }
    cout<<endl<<"maximum no in the string is "<< max;
     for(int i = 0 ; i< str.length(); i++){
        if(max<str[i]){
            max=str[i];
        }
    }
    


    }