 #include<iostream>
 #include<vector>
 using namespace std;
 
 vector<int> twoSum(vector<int>& nums, int target , vector<int> &arr) {
        
        int i , j ;
        for( i = 0 ; i<nums.size() ; i++)
        {
            cout<<"i is"<<i <<endl;
            for( j=i+1; j<nums.size() ; j++)
            { 
                cout<<"j is "<<j <<endl;
                if((nums[i]+nums[j])==target)
                break;
            }
            if((nums[i]+nums[j])==target)
            break;
        }
        arr.push_back(i);
        // cout<<arr[i];
        arr.push_back(j);
        // cout<<endl<<arr[j];
        return arr;
          
        //  int i =0 ; 
        //  int j = i+1;
        //  while(i<nums.size()) 
        //  {
        //     if((nums[i]+nums[j])==target && j<nums.size())
        //     {

        //     }
        //  }









 }
 int main()
 {
    vector<int > arr ; 
    vector<int >nums ;
    int target = 10;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(11);
    twoSum( nums , target , arr);
    for(auto i : arr)
    {
        cout<<i;
    }
 }