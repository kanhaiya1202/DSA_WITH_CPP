/*
    show pattern
       1
      121
     12321
    1234321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value:"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        //1 st triangle
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space = space -1;
        
        }
        //2nd triangle
        int j = 1;
        while (j<=i)
        {
           cout<<j;
           j++;
        }
        //3rd triangle
        int start = i-1;
        while (start)
        {
            cout<<start;
            start = start -1;
        }
        
        cout<<endl;
        i++;
    }
    
}
