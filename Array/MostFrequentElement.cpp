#include<iostream>
#include<vector>
using namespace std;
int maxFrequency(vector<int> &v , int k)
{

    int s , e;
    int temp = 0;
    int count =1;
    s = 0 ;
    e = v.size()-1;
    while(s<e)
    {
        if(v[e]-v[s]<=k)
        {
            count++;
           k= k-(v[e]-v[s]);
           s++;
           cout<<"k is "<<k<<",";

        }
        else 
        {
            
            e--;
            s=0;
            count = 1;

        }
        if(count>temp)
            {temp=count;}
       

    }
     return temp;
}
int main()
{
    vector<int> v;
    int k = 5;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    // v.push_back(13);
    cout<< maxFrequency(v , k);

}