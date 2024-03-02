 #include<iostream>
 #include<vector>

 using namespace std;
 int main(){
    vector<int>nums;
    int val = 3;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
 
 vector<int> temp;
        for(int i =0 ; i<nums.size(); i++){
            if(nums[i]!=val){
               temp.push_back(nums[i]);
            }
        }

      for(int i = 0 ; i<temp.size(); i++){
           cout<<"element is Temp  "<< temp[i]<<",";
        }

        nums.clear();
        for(int i = 0 ; i<temp.size(); i++){
            nums.push_back(temp[i]);
        }
        cout<<endl;


          for(int i = 0 ; i<temp.size(); i++){
           cout<<"element is nums is   "<< nums[i]<<",";
        }
        cout<<"Size of Temp vector"<< temp.size() <<endl;
        cout<<"Size of Num Vector"<< nums.size()<<endl;
        cout<<"Size of Num Vector"<< nums.capacity()<<endl;

 }