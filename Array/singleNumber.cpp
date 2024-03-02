#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int singleNumber(vector<int> &nums)    //All the testcases passed but time limit exceeds.
{
    int i;
    int count= 0;
   for( i = 0 ; i<nums.size(); i++)
   {
    for(int j = 0 ; j<nums.size(); j++)
    {
        if(nums[i]==nums[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        break;
    }
    count=0;
   }
   return nums[i];
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
   cout<< singleNumber(nums);
}