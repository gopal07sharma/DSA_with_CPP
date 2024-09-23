#include <iostream>
#include <vector>
using namespace std;
int count = 0;
int Inversion(vector<int> &a, vector<int> &b){
   int c = 0 ;
   int i = 0 , j = 0;
   while(i<a.size() && j<b.size()){
    if(a[i]>b[j]){
    c+= a.size()-i;
    j++;
   }
   else i++;
   }
   
   return c;
}
void Merge(vector<int> &a, vector<int> &b, vector<int> &res){
   int i = 0, j= 0, k=0;
   while(i < a.size() && j < b.size()) {
      if(a[i] < b[j])  res[k++] = a[i++]; 
      else  res[k++] = b[j++];
   }
   if(i == a.size())  while(j < b.size()) res[k++] = b[j++];
   if(j == b.size())  while(i < a.size()) res[k++] = a[i++]; 
}
void mergeSort(vector<int> &v)
{
   int n = v.size();
   if(n == 1) return;
   int n1 = n / 2, n2 = n - n / 2;
   vector<int> a(n1), b(n2);
   // Divide the Array into 2 parts
   for(int i = 0; i < n1; i++) a[i] = v[i];   
   for(int i = 0; i < n2; i++) b[i] = v[i + n1];

   //  cout<<"hello"<<endl;
   // Magic part which is recursion
   mergeSort(a);
   mergeSort(b);
   // Inversion count;
   count+= Inversion(a,b);

   Merge(a, b, v);
   a.clear();
   b.clear();
 
}
int main()
{
   int arr[] = {5, 1, 3, 0, 4, 7, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   vector<int> v(arr, arr + n);
   for (auto i : v)
   {
      cout << i << " ";
   }
   cout << endl;
   mergeSort(v);
   cout<<count;

}