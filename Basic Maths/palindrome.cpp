#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        int temp = x;
        cout<<x<<endl;
        int sum = 0 ;
        int r;
        while(x>0 || x<0)
        {
           r = x%10;
           cout<<"r is"<<r <<endl;
           sum = (sum*10)+r;
           cout<<"sum is "<<sum<<endl;
           x=x/10;
           cout<<"x is "<<x<<endl;
        }
        cout<<sum <<",";
        cout<<temp <<",";
        if(sum == temp)
        {
            return true;
        }
        return false;
        
        
    }
int main()
{
    int x ;
    x = -121;
    cout<< isPalindrome(x);
}