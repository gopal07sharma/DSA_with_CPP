#include<iostream>
#include<vector>
using namespace std;
int MaxConsecutive(vector<int> &v)
{
    int temp = 0 ; 
    int count= 0 ;
    for(int i = 0 ; i<v.size() ; i++)
    {
      if(v[i]==1)
      {
        count++;
      }
      if(count>temp)
      {
        temp=count;
      }
      if(v[i]==0)
      {
        count=0;
      }
    }
    cout<<temp;
    return temp;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    MaxConsecutive(v);
}