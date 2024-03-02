#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
string longestCommonPrefix(vector<string> &strs){
   sort(strs.begin() , strs.end());
        if(strs.size()==1) return strs[0];
        string first = strs[0];
        string last = strs[strs.size()-1];
        string s = "";
        for(int i = 0 ; i<last.size() ; i++){
            if(first[i]==last[i]){
                s+= last[i];
            }
            else return s;
        }
        return s;  
    }
   


int main(){
    vector <string> v ;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    cout<<longestCommonPrefix(v);
   
}