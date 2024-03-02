#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
  int longestConsecutive(vector<int>& nums) {
        set<int> v;
        copy(nums.begin(), nums.end() , inserter(v , v.begin()));
        nums.clear();
        int a = 0 ;
        for(auto i : v)
        {
          nums.push_back(i); 
          cout<<i<<endl;
        }
        for(auto i : nums)
        {
            cout<<i<<endl;
        }
       
        int count = 1 ;
        int temp = 0;
         for(int i = 1; i<nums.size() ; i++)
         {
            
            if(nums[i-1]==nums[i]-1)
            {
                count++;
            }
             if(temp<count)
            {
                temp = count;
            }
           
            else{
                
                count=1;
            }   
         }
          return temp;
           }
          
   
  int main()
  {
    vector<int> nums;
    nums.push_back(0);              //[0,3,7,2,5,8,4,6,0,1]
    nums.push_back(0);
    // nums.push_back(3);
    // nums.push_back(7);
    // nums.push_back(2);
    // nums.push_back(5);
    // nums.push_back(8);
    // nums.push_back(4);
    // nums.push_back(6);
    // nums.push_back(1);
   cout<< longestConsecutive( nums);
  }