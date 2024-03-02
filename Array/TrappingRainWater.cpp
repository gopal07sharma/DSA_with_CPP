#include<iostream>
#include<vector>
using namespace std ;
int trap(vector<int> &nums)
{
   vector<int> previous(nums.size());
   vector<int> next(nums.size());
   vector<int> final;
   int max ; 
   int count = 0;
   previous[0]=-1;
   max= nums[0];

   
   for(int i = 1 ; i<previous.size(); i++)  //0,1,0,2,1,0,1,3,2,1,2,1
   {
    previous[i]=max;
    if(max<=nums[i])max=nums[i];
    
   }




  next[nums.size()-1]=-1;
  max=nums[nums.size()-1];
  for(int i = nums.size()-2 ; i>= 0 ; i--) 
  {
    next[i]=max;
    if(max<=nums[i])  max=nums[i];
   
  }



   for(int i  = 0 ; i<nums.size() ; i++)
   {
    if(previous[i]==-1 || next[i]==-1)next[i]=-1;
   
    if(previous[i]<next[i])final.push_back(previous[i]);
    
    else final.push_back(next[i]);
   }




  for(int i = 1 ; i<final.size()-1; i++)
  {
    if(final[i]>nums[i]) count = count + (final[i]-nums[i]);
  }
  return count;
  


}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

   cout<< trap(v);
}