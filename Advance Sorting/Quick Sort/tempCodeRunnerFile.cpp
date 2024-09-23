#include<iostream>
#include<vector>
using namespace std;
int partition ( vector<int> &arr, int si , int ei){
  int count = 0,pe = arr[si];
  
  for(int i = si+1; i<ei ; i++)  if(arr[si]>=arr[i]) count++;
  int pivotIndex = si+count;
  swap(arr[si], arr[pivotIndex]);
  int i = si;
  int j = ei;
  while(i<pivotIndex && j>pivotIndex){
   if(arr[i]<=pe) i++;
   if(arr[j]>pe) j--;
   else if(arr[i]>pe && arr[j]<=pe) swap(arr[i++], arr[j--]);
}
   return pivotIndex;

}
 void quicksort(vector<int> &arr, int si , int ei){
    if(si>=ei) return;
   int pi = partition(arr, si , ei);
   // cout<<pi;

   quicksort(arr, si, pi-1);
   quicksort(arr, pi+1, ei);