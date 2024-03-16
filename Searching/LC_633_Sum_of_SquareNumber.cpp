#include<bits/stdc++.h>
using namespace std;
  // to check wheather the number is perfect square or not
    bool isPerfect(int c){
       int demo = sqrt(c);
        if(demo*demo == c){
            return true;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
      int a=0;
      int b=c;
      int x = 0;
      int y= c;
      if( isPerfect(c) == true) return true;
      while(a<=b){
        if(isPerfect(a) == true && isPerfect(b) == true) return true;
        x++;
        a=x*x;
        b=y-a;
      } 
      return false;
    }
int main(){
    int c = 104;
    cout<< judgeSquareSum (c);
}