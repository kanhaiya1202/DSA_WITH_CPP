//Fabonacci series
//0 1 1 2 3 5 8 13 21 34 55 89 

#include<iostream>
    using namespace std;

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++){
        int nextNumber = a+b;
       
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;

    }
    return 0;
}