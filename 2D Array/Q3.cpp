#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
     int arr[4][4]={1,2,-3,4,0,0,-4,2,1,-1,2,3,-4,-5,-7,0};
     int l1 = 1;
     int r1 = 2;
     int l2 = 3 ; 
     int r2 =3;
     int sum = 0;
     if(l1>l2){
        int temp ;
        temp = l1;
        l1=l2;
        l2=temp;
     }
          if(r1>r2){
        int temp ;
        temp = r1;
        r1=r2;
        r2=temp;
     }

     for(int i =l1 ; i<=l2 ; i++){
        for(int j = r1 ; j<=r2 ; j++){
            sum += arr[i][j];

        }
     }
     cout<<sum;


}