#include<iostream>
#include<vector>
using namespace std;
int rearrange(vector<int> &nums){
    vector<int> v;
    int count=0;
    for(int i = 0 ; i<nums.size(); i++)
    {
        if(nums[i]>0)
        {
            v.push_back(nums[i]);
        }
        for(int j = 0 ; j<nums.size() ; i++)
        {
            if(nums[j]<0)
            {
                v.push_back(nums[j]);
                nums[j]=0;
                break;
            }
        }
    }
    for(auto i : v)
    {
        cout<<i <<endl;
    }

}


int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(-2);
    nums.push_back(-5);
    nums.push_back(2);
    nums.push_back(-4);

    rearrange(nums);

}