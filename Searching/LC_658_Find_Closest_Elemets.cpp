#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int mid;
    int a = 0;
    bool highFlag=false;
    bool lowFlag=false;

    vector<int> result(k);
    for(auto i:result){
       cout<<i<<" ";
    }
    if (arr[0] >= x)
    {
        for (int i = 0; i < k; i++)
        {
            result[i] = arr[i];
        }
    }
    else if (arr[n - 1] <= x)
    {
        for (int i = n - 1; i >= n - k; i--)
        {
            result[a++] = arr[i];
        }
    }
    else
    {
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                result[0] = arr[mid];
                low = mid + 1;
                high = mid - 1;
                
                break;
            }
            else if (arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout<<low<<endl<<high<<endl<<mid;
        while (a < k)
    {
        if (x - arr[high] <= arr[low] - x)
        {
            cout<<arr[high]<<endl;
            result[a] = arr[high];
            if (high != 0)
            {
                high--;
            }
            else
            {
                highFlag=true;
                break;
            }
        }

        else if (x - arr[high] > arr[low] - x)
        {
            cout<<arr[low];
            result[a] = arr[low];
            if (low != n - 1)
            {
                low++;
            }
            else
            {

                lowFlag=true;

                break;
            }
        }

        a++;
    }
 if(lowFlag==true){
        a++;
        while(a<k){
            result[a++]=arr[high--];
        }
    }
    else{
        a++;
        while(a<k){
            result[a++]=arr[low++];
        }
    }
    
    }
   
    sort(result.begin(),result.end());
    for(auto i:result){
       cout<<i<<" ";
    }
    return result;
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    int k = 4;
    int x = 3;
    findClosestElements(arr, k, x);
}