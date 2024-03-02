#include<iostream>
using namespace std;
int main()
{

    int sum = 0 ;
    int arr[3][3] = {1,2,3,4,5,6,7,9,9};
    int brr[3][3] ; 
    //   for(int i = 0 ; i<3 ; i++)
    // {
    //     for(int j = 0 ; j<3 ; j++){
    //         sum += arr[i][j] + brr[i][j];
    //     }
    // }
    // cout<<sum;

          for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j<3; j++)
        { 
            cout<<  arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j<3; j++)
        { 
            brr[i][j]= arr[j][i];
        }
        cout<<endl;
    }

       for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j<3; j++)
        { 
            cout<<  brr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Element of brr matrix  "<<brr[1][2]<<" ";
    cout<<endl;
    cout<<"Element of arr matrix  "<<arr[1][2];
}