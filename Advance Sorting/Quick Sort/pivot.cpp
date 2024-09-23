#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
     int n = sizeof(arr)/sizeof(arr[0]);
      int count = 0;
      int si=0;
      int ei= n-1;
      for(int i = si+1; i<ei ; i++){
      if(arr[si]>arr[i]) count++;
      }
     int pivotIndex = si+count;
     swap(arr[si], arr[pivotIndex]);

     int i = 0 , j = n-1;
    int  k=0;
     while(k<=pivotIndex){
       if(arr[k]<arr[pivotIndex]) k++;
       else if(arr[k]>arr[pivotIndex]) {
        swap(arr[k], arr[j--]);
       }
       else if()
     }

}