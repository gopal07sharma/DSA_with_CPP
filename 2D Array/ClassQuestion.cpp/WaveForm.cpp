#include<iostream>
#include<algorithm>
using namespace std;
const int m = 3; 
const int n = 3;
int main(){
    int arr[m][n]={1,2,3,4,5,6,7,8,9};
    //Given Matrix
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

      for(int i = m-1 ; i>=0 ; i--){
        if(i%2==0){
            for(int j = 0 ; j<n; j++){
            cout<<arr[i][j] <<" ";
        }}
        else {
            for(int j = n-1; j>=0 ; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }



}