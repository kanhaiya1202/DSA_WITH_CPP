//nCr Combinations Formula  = n!/r!(n-r)!
//nPr Permutation Fromula = n!/(n-r)!

#include<iostream>
using namespace std;

// function Factorial
int Factorial(int n){
    int fac = 1;
    for (int i = 1; i<=n; i++){
        fac = fac*i;
    }
    return fac;
}
//function Combinations
int nCr(int n, int r){
    int a = Factorial(n);
    int b = Factorial(r)* Factorial(n-r);
    int answer = a/b;
    return answer;
}
//function Permutation 
int nPr(int n, int r){
    int ans = Factorial(n)* Factorial(n-r);
}

int main(){
    int n,r; 
    cout<<"Enter the value n and r"<<endl;
    cin>>n>>r;
    int ch;
    cout<<"1.Combinations"<<endl;
    cout<<"2.Permutation"<<endl;
    cout<<"Your Choice =>"<<endl;
    cin>>ch;

    switch (ch)
    {
    case 1:{
        int Combinations = nCr(n,r);
        cout<<"nCr Combinations Answer:=> "<<Combinations;
    }
    break;
    case 2:{
        int Permutation = nPr(n,r);
        cout<<"nPr Permutation Answer:=>"<<Permutation;
    }
    break;
    
    default:
        {
            cout<<" Choice is not available"<<endl;
        }
        break;
    }
    return 0;    
}

