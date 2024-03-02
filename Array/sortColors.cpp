#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums) {

        int low , mid , high;
        low = 0 ; 
        mid = 0 ; 
        high = nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==2 && mid<high )
            {
                swap(nums[mid] , nums[high]);
                high--;
            }
            
            
            else if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
             else
                mid++;

           
       
        }
        }
        
    
     
     int main()
     {
        vector<int> nums;
        // nums.push_back(2);
        // // nums.push_back(0);
       
        // // nums.push_back(1);
        nums.push_back(1);
         nums.push_back(2);
        nums.push_back(0);

        sortColors( nums);
        for(auto i : nums)
        {
            cout<<i<<",";
        }
     }