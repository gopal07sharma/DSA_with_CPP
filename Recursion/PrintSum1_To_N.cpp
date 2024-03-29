#include<iostream>
using namespace std;
int print(int n){
    if(n == 0 ) return 0;
    int ans = print(n-1);
    ans+=n;
    return ans;
    
}
int main(){
    int n = 11;
     cout<<print(n);
    
}