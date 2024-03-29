#include<bits/stdc++.h>
using namespace std;
  int product(int i  , vector<int> &ans , vector<int> &nums){
    // cout<<"i is "<<i<<endl;
        int ele=1;
        int n = nums.size();
        for(int j = 0 ; j<n ; j++){
            if(j==i) continue;
            else {
                cout<<"nums[j ] is "<<nums[j]<<endl;
             ele = ele*nums[j];
            }
            cout<<"element is "<<ele<<endl;
        }
        return ele;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int a = 0;
        int element;
        for(int i = 0 ; i<n ; i++){
           element= product(i,ans, nums);
           ans[a++]=element;
        }
        for(auto i : ans){
            cout<<i<<" ";
        }
    }
int main(){
   vector<int> nums{1,2,3,4};
   productExceptSelf(nums);
}