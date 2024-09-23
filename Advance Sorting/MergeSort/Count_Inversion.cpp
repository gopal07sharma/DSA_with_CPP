#include<iostream>
using namespace std;
int countInversion(int arr[], int brr[], int n){
    int i = 0 , j = 0;
    int count = 0;
    while(j<n){
        if(arr[i]>brr[j]){
            count += (n-i);
            j++;
        }
        else i++;
    }
    return count;
}
int main(){
    int arr[]={3,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[]={2,2,3,4};
    cout<<"Total Inversions are : "<< countInversion(arr, brr , n);
}