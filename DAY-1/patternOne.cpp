// show basic pattern : =>
//* * *
//* * *
//* * *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        i++;
        int j = 1;
        while(j<= n){
            j++;
            cout<<" * ";
        }
        cout<<endl;
    }
}