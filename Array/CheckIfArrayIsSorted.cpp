#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> &nums)
{
    int i = 0 ; 
    int j = i+1;
    int count = 0;
    // if(nums[i]>nums[nums.size()-1])
    // {
    //     count++;
    // }
    while(j<=nums.size())                // 2,1,3,4
    {
        if(nums[i]>nums[j])
        {
            count++;
        }
        i++;
        j++;
    }
    i=0;
    if(count==1)
    {
        if(nums[i]>nums[nums.size()-1])
        return true;
    }
    else
    return false;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    // nums.push_back(2);

    cout<<check(nums);
    
}