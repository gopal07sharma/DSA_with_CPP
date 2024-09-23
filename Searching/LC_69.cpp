#include<iostream>
using namespace std;
int sqrt(int x){
   int low =0;
   int high = x;
   int mid;
   int ans;
   while(low<=high){
     mid=(low+high)/2;
     if((mid*mid)==x){
        ans=mid;
        return ans;
     }
       else if((mid*mid)>x){
           high = mid-1;
        }
        else if((mid*mid)<x){
            low = mid+1;
        }
     }
     return high;
   }

int main(){
    int x = 20;
    int result;
    result = sqrt(x);
    cout<< result;
}