#include<iostream>
using namespace std;
const int m = 4;
const int n = 4;
int main(){
    int min_r= 0;
    int max_r= m-1 ;
    int min_c = 0;
    int max_c = n-1 ;
    int arr[m][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j]<<"\t";
        } 
        cout<<endl;
    }
    cout<<endl;

    while(min_c <= max_c && min_r <= max_r){
        if(min_c <= max_c && min_r <= max_r){
        for(int i = min_c ; i<=max_c ; i++){
            cout<<arr[min_r][i]<<"\t";
        }
        min_r++;}

        if(min_c <= max_c && min_r <= max_r){
        for(int i = min_r ; i<=max_r ; i++){
            cout<<arr[i][max_c] <<"\t";
        }
        max_c--;}

        if(min_c <= max_c && min_r <= max_r){
        for(int i = max_c ; i>=min_c ; i--){
            cout<<arr[max_r][i]<<"\t";
        }
        max_r --;}
        
        if(min_c <= max_c && min_r <= max_r){
        for(int i = max_r; i>=min_r ; i--){
            cout<<arr[i][min_c]<<"\t";
        }
        min_c++;}
    }



}