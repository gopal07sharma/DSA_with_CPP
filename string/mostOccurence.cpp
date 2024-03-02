#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ;
    cin>>s;
    vector<int> v(26,0);
    for(int i = 0 ; i<s.length(); i++){
        char ch = s[i];
        v[ch-97]++;
    }
    for(int i = 0 ; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    int max = v[0];
    for(int i = 1 ; i< v.size(); i++){
        if(max<v[i]){
          max=v[i];
        }
    }
    for(int i = 0  ; i< v.size() ; i++){
        if(v[i]==max){
          int ascii = i + 97;
          char ch = (char)ascii;
          cout<< ch <<"  "<< max;
          cout<<endl;
        }
        
    }

    
}