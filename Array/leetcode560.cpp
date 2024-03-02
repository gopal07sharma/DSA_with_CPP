   #include<iostream>
#include<vector>
   #include<algorithm>
   using namespace std;

   int subarraySum(vector<int>& nums, int k) {
        int low , high , sum , count;
        sum = count = low = high = 0;
        // sort(nums.begin(), nums.end());
        while(high<nums.size())
        {
            if(sum<=k)
            {
                sum = sum + nums[low];
                low++;
                if(sum==k)
                {
                    count++;
                }
            }
            if(low == nums.size())
            {
                high++;
                sum = 0;
                low= high;
            }
            else if(sum>k)
            {
                high++;
                low=high;
                sum = 0;
            }
        }
        return count;
        
    }
    int main()
    {
        vector<int >nums;
        nums.push_back(1);
        nums.push_back(-1);
        nums.push_back(0);
        int k = 0 ;
       cout<< subarraySum(nums , k);
    }