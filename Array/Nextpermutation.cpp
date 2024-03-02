#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
         int high = nums.size()-1;
        int low = nums.size()-2;
        int count = 0;
        while(high>0)
        {

            if(nums[high]>nums[low])
            {
                swap(nums[high], nums[low]);
                sort(nums.begin()+low+1, nums.end());
                count++;
                break;
            }
             if(low==0)
            {
                high--;
                low = high-1;
                continue;
            }
            low--;
           
        }
        if(count==0)
        {
            sort(nums.begin(), nums.end());
        }
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);

    nextPermutation(nums);
    for(auto i: nums)
    {
        cout<<i <<",";
    }
}




//  int high = nums.size()-1;
//         int count = 0;
//         while(high>0)
//         {
//             if(nums[high]>nums[high-1])
//             {
//                 swap(nums[high], nums[high-1]);
//                 sort(nums.begin()+high, nums.end());
//                 count++;
//                 break;
//             }
//             else
//             high--;
//         }
//         if(count==0)
//         {
//             sort(nums.begin(), nums.end());
//         }