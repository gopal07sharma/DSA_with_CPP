#include<iostream>
#include<vector>
using namespace std;
int longestSubarray(vector<int> &v, vector<int> &nums , int k)
{
    int  j , sum , temp;
    j = 0 ;
    sum = 0 ;
    temp = 0;
    for(int i = 0 ; j<v.size(); i++ )             // 1,2,3,1,1,1,1
    {
        nums.push_back(v[i]);
        for(auto i : nums)
        {
            cout<<"Elemnt in nums array "<<i <<endl; ;
        }
        cout<<endl;
        sum = sum + nums[i];
        cout<<"sum is "<<sum <<endl;
        if(sum==k)
        {
          if(temp<nums.size())
          {
            temp=nums.size();
            cout<<"temp is "<<temp <<endl;

          }
          continue;
        }

        if(sum<k)
        {
            continue;
        }


        if(sum>k)
        {
            j++;
            i=j;
            nums.clear();
            sum = 0;
        }
    }
    return temp;
}
int main()
{
    vector<int> v;
    vector<int> nums;
    int k =3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    cout<<longestSubarray(v, nums , k);
}