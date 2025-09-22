#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of matrix"<<endl;
    cin>>n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    cout<<"--------OutPut------------"<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
