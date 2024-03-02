#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> v(numRows);
    for(int i =0 ; i<numRows ; i++){
            for(int j = 0 ; j<i ; j++){
                if(j==0 || i==j){
                    v[i][j]=1;}
                 else {
                  v[i][j]= v[i-1][j]+v[i-1][j-1];
                 }   
                }
            }

             for(int i =0 ; i<numRows ; i++){
            for(int j = 0 ; j<i ; j++){
                  cout<<v[i][j]<<" ";
            }}
            return v;

}
int main(){

    int numRows ;
    cin>>numRows;
    generate(numRows);
}