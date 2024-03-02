#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("0234");
    v.push_back("0023");
    v.push_back("4560");
    v.push_back("890");
    v.push_back("2340");

    int max = stoi(v[0]);


    for(int i = 1 ; i<v.size() ; i++){
        int temp = stoi(v[i]);
        if(max<temp){
            max=temp;
        }

    }
    cout << max;
  

}