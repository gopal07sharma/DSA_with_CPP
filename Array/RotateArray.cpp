#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& v, int k) {
    k=k%v.size() ;  
    reverse(v.end()-k , v.end());
    reverse(v.begin() , v.end()-k);
    reverse(v.begin() , v.end());
    }
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);
    int k ;
    cin>>k;
    rotate(v , k);

    for(auto i : v)
    {
        cout<<i <<",";
    }
    // for(int i = 0 ; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<",";
    // }
}