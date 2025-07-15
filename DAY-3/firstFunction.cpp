#include<iostream>
using namespace std;

int Power(int a, int b){
   
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans *a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter tha number :-"<<endl;
    cin>>a>>b;
    int answer = Power(a,b);
    cout<<"the Answer:-"<<answer<<endl;

}