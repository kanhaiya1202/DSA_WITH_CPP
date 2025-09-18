#include<iostream>
using namespace std;

int  maxnumber(int num[], int n){
    int maxnum = INT32_MIN;
    for(int i = 0 ; i< n; i++){
        maxnum = max(maxnum , num[i]);
    }
    return maxnum;


}
int minnumber(int num [], int n){
    int minnum = INT32_MAX;
    for( int i = 0 ; i< n; i++){
        minnum = min(minnum,  num[i]);
        
    }
    return minnum;
}

int main(){
    int size;
    cout<<"Enter the value ";

    cin>>size;

    int num [100];
    for (int i = 0; i < size; i++){
        cin>>num[i];
    }
    cout<<"max number "<<maxnumber(num, size)<<endl;
    cout<<"Min number "<<minnumber(num, size)<<endl;
}