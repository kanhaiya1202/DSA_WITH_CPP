//Binary convert into decimal 
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    int ans=0,i=0;
    cout<<"Enter the Binary bit :-"<<endl;
    cin>>n;

    while (n!=0)
    {
        int digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2 ,i);
        }
        n = n/10;
        i++;
    }
    cout<<"Decimal Number :- "<<ans<<endl;
    

}