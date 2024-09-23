#include <iostream>
#include <vector>
using namespace std;
void Merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
   int i = 0;
   int j = 0;
   int k = 0;
   while (i < a.size() && j < b.size())
   {
      if (a[i] < b[j])
      {
         res[k] = a[i];
         k++, i++;
      }
      else
      {
         res[k] = b[j];
         k++;
         j++;
      }
   }
   if (i == a.size())
   {
      while (j < b.size())
      {
         res[k] = b[j++];
         k++;
      }
   }
   if (j == b.size())
   {
      while (i < a.size())
      {
         res[k] = a[i++];
         k++;
      }
   }
}
void mergeSort(vector<int> &v)
{
   int n = v.size();
   if (n == 1)
      return;
   int n1 = n / 2, n2 = n - n / 2;
   vector<int> a(n1), b(n2);
   // Divide the Array into 2 parts
   for (int i = 0; i < n1; i++)
   {
      a[i] = v[i];
   }
   for (int i = 0; i < n2; i++)
   {
      b[i] = v[i + n1];
   }

   //  cout<<"hello"<<endl;
   // Magic part which is recursion
   mergeSort(a);
   mergeSort(b);

   Merge(a, b, v);
   a.clear();
   b.clear();
 
}
int main()
{
   int arr[] = {5, 1, 3, 0, 4, 9, 6};
   int n = sizeof(arr) / sizeof(arr[0]);
   vector<int> v(arr, arr + n);
   for (auto i : v)
   {
      cout << i << " ";
   }
   cout << endl;
   mergeSort(v);
   cout << endl
        << "After Sorting ";
   for (auto i : v)
   {
      cout << i << " ";
   }
}