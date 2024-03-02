#include<iostream>
using namespace std;
int main()
{

    int max;
    int arr[3][3] = {1,2,3,4,5,6,78,8,9};
     max = arr[0][0];
      for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++){
            // cout<<arr[i][j]<<",";
            if(arr[i][j]>max) max = arr[i][j];

        }
        cout<<endl;
    }
    cout<<max;
}