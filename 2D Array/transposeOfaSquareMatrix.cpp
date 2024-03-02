#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

     cout<<"Given Matrix" <<endl;
       for(int i =0 ; i<3 ; i++)
     {
        for(int j = 0 ; j< 3 ; j++){
             cout<< arr[i][j]<<" ";
        }
        cout<<endl;
     }

     
     for(int i =0 ; i<3 ; i++)
     {
        for(int j =  i; j< 3 ; j++){
            cout<<"array elements we are swapping "<< arr[i][j] <<" , "<< arr[j][i]  <<endl;
            swap(arr[i][j] , arr[j][i]);
            cout<<endl;
            cout<<"After swapped values "<< arr[i][j] << " , " <<arr[j][i] <<endl;;
        }
     }
      cout<<"transposed Matrix "<<endl;
       for(int i =0 ; i<3 ; i++)
     {
        for(int j = 0 ; j< 3 ; j++){
             cout<< arr[i][j]<<" ";
        }
        cout<<endl;
     }




     int a , b ; 
     a=10 ; b = 20 ; 
     swap(a,b);
     cout<<"a is "<<a;
     cout<<"b is "<<b;



}