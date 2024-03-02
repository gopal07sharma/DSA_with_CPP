#include<iostream>
#include<climits>
#include<vector>
using namespace std;
const int m = 7; const int n = 7;
void middleElements(int arr[m][n] , int m , int n){
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
          if(m/2==i){
            cout<<arr[i][j]<<"\t";
          }
          
          else{ if(n/2 == j){
                cout<<arr[i][j];
            }
            else cout<<"\t";
          }

        }
        cout<<endl;
    }


}

int main(){
  
    int arr[m][n]={1,2,3,4,5,6,7,8,9,1,23,4,5,2,3,5,7,8,5,3,5,4,6,7,8,9,0,7,5,4,3,21,2,1,3,45,2,3,5,7,9,0,1,2,3,4,56,5,6};
    int x = sizeof(arr)/sizeof(arr[0]);
    int y = sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<x*y<<endl;
    middleElements(arr , m , n);
}