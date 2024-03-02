#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
    int m = 3;
    int n = 3;
    int b = n-1;
int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};
int a = 0 ;
        int size = n-1;
        for(int i =0 ; i<=size ; i++){
            for(int j = i; j<=size ; j++){
                swap(arr[i][j] , arr[j][i]);
            }
        }

        while(a<b){
            for(int i = 0 ; i<n; i++)
            {
                swap(arr[a][i], arr[b][i]);
                cout<<"Elements we are swapping are " <<arr[a][i] <<arr[size][i]; cout<<endl;
            }
            a++;
            b--;
        }

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<",";
            }
            cout<<endl;
        }
            
        
    }