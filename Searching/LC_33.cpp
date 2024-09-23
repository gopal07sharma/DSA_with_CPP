#include<bits/stdc++.h>
using namespace std;
   int search(vector<int>& nums, int target) {
     int n = nums.size();
     int low = 0; 
     int high = n-1;
     int pivot;
     int pivotIndex = -1;
     int mid;
     if(n<3){
        for(int i = 0 ; i<n;i++){
            if(nums[i]==target) return i;
        }
     }
     else{
     // to find pivot element
     while(low<=high){
         mid = low+(high-low)/2;
         if(mid==0)low=mid+1;
         else if(mid==n-1) high = mid-1;
         else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) {
             pivotIndex = mid; break;
         }
           else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
             pivotIndex = mid+1;
             break;
         }
         else if(nums[mid]>nums[high] ) low = mid+1;
         else high = mid-1;
     }
     cout<<"pivotIndex  is "<<pivotIndex<<endl;;
     low =0;
     high = n-1;
     }
     if(pivotIndex==-1){
         while(low<=high){
             mid=low+(high-low)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]>target) high= mid-1;
             else low = mid+1;
         }
        return -1; 
     }
    
     else {
          low= 0;
          high = pivotIndex-1;
         if(target>=nums[0] && target<=nums[pivotIndex-1]){
               while(low<=high){
             mid=low+(high-low)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]>target) high= mid-1;
             else low = mid+1;
         }
         }
         else{
             low=pivotIndex;
             high = n-1;
              while(low<=high){
             mid=low+(high-low)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]>target) high= mid-1;
             else low = mid+1;
         }
     }
    
     }
       return -1;
    }
int main(){
  vector<int> nums{1,3,5};
  int target = 1;
  int result ;
   result = search(nums, target);
   cout<<"result is "<<result;
}