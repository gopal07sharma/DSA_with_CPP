#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
   int removeDuplicates(vector<int>& nums) {
       set<int> s;
       int k = 0 ;
       int count=0;
       
       copy(nums.begin() , nums.end() , inserter( s , s.begin()));
       int n = s.size();
    //    for(auto i : s)
    //    {
    //     cout<<i <<",";
    //    }
       for(int i = 1;  i<nums.size() ; i++)
       {
           if(nums[i-1]==nums[i])
           k++;
       }
       nums.clear();
       for(auto i : s)
       {
           nums.push_back(i);
       }
       for(auto i : nums){
        cout<<i<<",";
       }
       return k;
        }
int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
   cout<< removeDuplicates(nums);

}