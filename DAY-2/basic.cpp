//  Bitwise Operators, For Loops, Operator Precedence & Variable Scoping
//basic Bitwise :-> AND(&),OR(|),Not(~),Xor(^)
//left shift << and right shift >>

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a:-"<<endl;
    cin>>a;
    cout<<"Enter the value of b:-"<<endl;
    cin>>b;

    cout<<"And Opertor :=>"<<(a&b)<<endl;
    cout<<"Or Opertor  :=>"<<(a|b)<<endl;
    cout<<"Not Opertor :=>"<<(~a)<<endl;    
    cout<<"Xor Opertor :=>"<<(a^b)<<endl;

    // basic right and left shift ex:-

    cout <<"light shitf=>"<<(a<<2)<<endl; //for Ex 00100 => left shift  =>10000ṇ
    cout <<"Right Shift=>"<<(b>>1)<<endl; //for Ex 00011 => right shift => 00001

}

 