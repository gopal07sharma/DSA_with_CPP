#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[4][4]={1,3,1,16,2,4,5,7,3,5,6,8,4,6,7,9};
    int max = 0;
    int sum = 0 ; 
    int k;
    for(int i = 0 ; i<4; i++){
        for(int j = 0 ; j<4; j++){
            sum = sum + arr[i][j];
        }
        if(sum>max){
            max=sum;
            k=i;
        }
        sum = 0;
    }
    cout<< k;
}