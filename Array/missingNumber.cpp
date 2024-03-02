#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missingNumber(vector<int> &nums)
{
   sort(nums.begin(), nums.end());
   int i ;
   for( i = 0 ; i<nums.size();i++)
   {
    if(i==nums[i])
    {
        continue;
    }
    else break;
   }
   return i;

}
int main()
{
   vector<int> nums;
   nums.push_back(1); 
   nums.push_back(2); 
   nums.push_back(3); 
   nums.push_back(0); 
   nums.push_back(4); 
   nums.push_back(5); 
   nums.push_back(6); 
  cout<< missingNumber(nums);
}