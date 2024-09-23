#include<bits/stdc++.h>
using namespace std;
vector<int> Sorting(int arr1[], int arr2[] , vector<int> &nums, int n , int m){
     int j = 0 ; 
     int k = 0 ;
     for(int i = 0 ; i< n+ m; i++){
       if(arr1[j]<arr2[k]){
         nums[i]=arr1[j];
         j++;
       }
       else{
         nums[i]= arr2[k];
         k++;
       }

    }
    return nums;
}
int main(){
    vector<int> nums;
    vector<int> nums2;
    int arr1[] = {1,5,2,8};
    int arr2[]= {2,6,4,7,10,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    // for(int i = 0 ; i< n ; i++){
    //     nums.push_back(arr1[i]);
    // }
    // for(int i = 0 ; i< n ; i++){
    //     nums.push_back(arr2[i]);
    // }
    // sort(nums.begin() , nums.end());
    // for(auto i : nums){
    //     cout<<i<<endl;
    // }
    nums2 = Sorting(arr1, arr2 , nums, n , m);
    cout<<nums2;
    
}