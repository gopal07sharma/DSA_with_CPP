#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void setZeroes(vector<vector<int>> &matrix , vector<vector<int>> &v){
    for(int i = 0 ; i<matrix.size(); i++){
        for(int j = 0 ; j<matrix[0].size(); j++){
            if(matrix[i][j]==0){
                cout<<"Index where zero is present "<<" ("<<i<< j <<endl;
                for(int a=0 ; a<matrix[0].size(); a++){
                    v[i][a]=0;
                }
                for(int b=0 ; b<matrix.size(); b++){
                    v[b][j]=0;
                }
            }
        }
    }

}
int main(){
    vector<int> m1;
    m1.push_back(0);
    m1.push_back(1);
    m1.push_back(2);
    m1.push_back(0);

    vector<int> m2;
    m2.push_back(3);
    m2.push_back(4);
    m2.push_back(5);
    m2.push_back(2);


    vector<int> m3;
    m3.push_back(1);
    m3.push_back(3);
    m3.push_back(1);
    m3.push_back(5);

    // vector<int> m4;
    // m4.push_back(1);
    // m4.push_back(1);
    // m4.push_back(3);
    // m4.push_back(1);
 

    vector<vector<int>> matrix;
    matrix.push_back(m1);
    matrix.push_back(m2);
    matrix.push_back(m3);
    // matrix.push_back(m4);


    vector<vector<int> > v;

    copy(matrix.begin(), matrix.end(), inserter(v , v.begin()));
    cout<<"Given Matrix"<<endl;
    for(int i = 0 ; i<matrix.size(); i++){
        for(int j = 0 ; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
         cout<<"Matrix before change"<<endl;
       for(int i = 0 ; i<v.size(); i++){
        for(int j = 0 ; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     
        cout<<endl;
        cout<<endl;

    setZeroes(matrix , v);
         cout<<"Matrix After change"<<endl;
       for(int i = 0 ; i<v.size(); i++){
        for(int j = 0 ; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
       } 
     matrix.clear();
     copy(v.begin(), v.end(), inserter(matrix , matrix.begin()));
      for(int i = 0 ; i<matrix.size(); i++){
        for(int j = 0 ; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}