// show this pattern : =>
//  A  B  C  D 
//  B  C  D  E
//  C  D  E  F
//  D  E  F  G 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value :"<<endl;
    cin >> n;
    int i = 0;
  
    while (i<n)   
    {
        i++;
        int j = 1;
        while (j<= n)
        {    
            char ch = 'A' + i + j - 2; 
            cout<<" "<<ch<<" ";
            j++;

        }
        cout<<endl;
        
    }
    
}