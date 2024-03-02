#include <iostream>
#include <climits>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int m = 3;
    int n = 3;
    int a = 0 ;
    int b = n-1;
    int arr[m][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
       //Transpose Matrix
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<",";
            }
            cout<<endl;
        }

        cout<<endl;
        
        //converting to wave form
        for(int i  = 0 ; i< m ; i++){
            if(i%2!=1){
                swap(arr[i][a] , arr[i][b]);
            }
        }

        // wave form
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<",";
            }
            cout<<endl;
        }




}