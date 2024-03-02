#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
  vector<int > v(10, 1000);
  v.push_back(10001);
  v[11]=10;

  v[12]=10001;
 for(int i = 0 ; i<v.size(); i++){
    cout<<v[i]<<endl;
 }
    
    
}