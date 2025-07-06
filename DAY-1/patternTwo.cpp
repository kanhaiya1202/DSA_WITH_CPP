// show pattern 

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of value"<<endl;
    cin>>n;

    int i = 0;
    while (i < n)
    {
        i++;
        int j = 0;
        while (j < n)
        {  
            j++;
            cout<<" "<<j<<" ";
            // if you are print this pattern {use:- n-j+1}
            //4 3 2 1
            //4 3 2 1 
            //4 3 2 1 
            //4 3 2 1 
            //cout<<" "<<n-j+1<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}