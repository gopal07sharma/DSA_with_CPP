#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
 if(sr>er || sc>ec) return 0;
 if(sr == er && sc == ec) return 1;
 int downways = maze(sr+1, sc, er ,ec);
 int rightways = maze(sr , sc+1 ,er, ec);
 return downways + rightways;
}
void path(int sr, int sc, int er, int ec, string s){
   if(sr>er || sc>ec) return ;
   if(sr == er && sc == ec){
       cout<<s<<endl;
       return;
   }
    path(sr+1, sc, er ,ec ,s+'D');
    path(sr , sc+1 ,er, ec , s+'R');
   
}
void path2(int row, int col, string s){
     if(row<1 || col<1) return ;
     if(row == 1 && col == 1){
      cout<<s<<endl;
       return;
   }
    path2(row-1 , col , s+'D');
    path2(row, col-1 , s+'R');
}
int main(){
    // cout<<maze(0,0,2,2);
    path2(3,3, "");
    // path(0 , 0 , 2, 2, "");
   
}