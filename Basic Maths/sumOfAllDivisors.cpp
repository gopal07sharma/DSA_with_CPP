#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10 ;
   vector<int> v ;
   v.push_back(1);
   v.push_back(2);
   v.push_back(1);
   v.push_back(3);
   v.push_back(4);
   v.push_back(1);

   set<int> s;
   copy(v.begin() , v.end() , inserter( s , s.begin()));
   cout<<s.size();
   cout<<v.size();

}