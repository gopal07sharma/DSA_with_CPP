#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int singleNumber(vector<int> &nums  , set<int> &s)    //All the testcases passed but time limit exceeds.
{
    copy(nums.begin() , nums.end() , inserter( s , s.begin()));
}


int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(2);
    set<int > s;
   singleNumber(nums , s);
   for(auto i : s)
   {
    cout<<i<<",";
   }
}