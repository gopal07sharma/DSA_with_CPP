#include<iostream>
#include<algorithm>
using namespace std;
const int m = 3; 
const int n = 3;
int main(){
    int a = 0 ;
    int arr[m][n]={1,2,3,4,5,6,7,8,9};          
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
        while(a<n){
        if(a%2==0) {   
        for(int i = 0 ; i<m ; i++){
            cout<<arr[i][a]<<" ";
        }}
        else {
            for(int i = m-1; i>=0; i--){
                cout<<arr[i][a]<<" ";
            }
        }
        a++;
    }

     



}