#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr){
        int s = 0 ;
        int e = arr.size()-1;
        int mid;
        while(s<e){
            mid=(s+e)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]) e=mid;
            else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]) s=mid;
        }
       return mid; 
}
int main()
{
    vector<int> arr{3,5,3,2,0};
   cout<< peakIndexInMountainArray(arr);

}