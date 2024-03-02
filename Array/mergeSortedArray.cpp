#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<int> nums1;
     vector<int> nums2;
     int m , n ;
      m =3 ;
      n = 3;
     nums1.push_back(1);
     nums1.push_back(2);
     nums1.push_back(3);
     nums1.push_back(0);
     nums1.push_back(0);
     nums1.push_back(0);


     nums2.push_back(2);
     nums2.push_back(5);
     nums2.push_back(6);

     vector<int> temp; 
        for(int i = 0 ; i<m ; i++){
            temp.push_back(nums1[i]);
        }
          for(int i = 0 ; i<m ; i++){
            cout<<"Element in Temp vector is from nums1 "<<temp[i]<<endl;
        }



        for(int i = 0 ; i < n ; i++){
            temp.push_back(nums2[i]);
        }
          for(int i = 0 ; i<m +n ; i++){
            cout<<"Element in Temp vector after merging "<<temp[i]<<endl;
        }


        nums1.clear();
        sort(temp.begin(), temp.end());
        for(int i = 0 ; i<temp.size(); i++){
            nums1.push_back(temp[i]);
        }
}