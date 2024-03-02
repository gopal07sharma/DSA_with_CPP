#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int majorityElement(vector<int> &v){
  int i , j , count, temp , max;
  sort(v.begin() , v.end());
  temp = 0 ;
  count=0;
  i= 0;
  j=i;
  // if(v.size()==1)
  // {
  //   return v[0];
  // }
  // else
  // {
  while(j<v.size())
  {
    if(v[i]==v[j])
    {
      count++;
      j++;
    } 
     if(temp<count)
    {
      temp=count;
      max=v[i];
    }
    if(v[i]!=v[j])
    {
      i=j;
      // if(i<v.size()-1)
      // {
      // j=i+1;

      // }
      // j=i+1;
      count = 0;
    }
   
  }
  return max;
 }
//  }


int main()
{
    vector<int> v;
    v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(3);
    // v.push_back(2);

    
    // for(auto i : v)
    // {
    //   cout<<i<<",";
    // }
   

   cout<< majorityElement(v);

}