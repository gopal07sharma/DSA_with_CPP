#include<iostream>
using namespace std;
int main(){
    int arr[]= {0,1,3};
    int n = 7;
    int low = 0 ;
    int high = 7;
    int mid ;
    bool flag = false;
    while(low<=high){
        mid= (low+high)/2;
        if(arr[mid]==mid && low!=high) low = mid+1;
        else if(arr[mid]==mid && low == high){
            flag  = true;
            cout<<mid+1;
            break;
        } 
        else if(arr[mid]>mid) high = mid-1;

    }
    if(flag==false){
        cout<<mid;

    }

}