// ****
// ****
// ****
// **** basic pattern code  

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Value :"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
       int column = 1;
       while (column<=n)
       {
            cout<<"*";
            column = column + 1;
       }
          
       cout<<endl;
       row = row + 1;
       
    }
}