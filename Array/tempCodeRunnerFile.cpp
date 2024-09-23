#include<bits/stdc++.h>
 using namespace std;
 void Sort2Arrays (int size1, int size2, int arr1[] , int arr2[], vector<int> &nums){
    int i , j ;
    i = 0;
    j = 0;
    while(i<size1 || j < size2){
         if(i<size1){
            if(arr1[i]<arr2[j]){
            nums.push_back(arr1[i]);
            i++;
         }