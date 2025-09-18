#include<iostream>
using namespace std;

// Initialise print maximum number of function 
int MaxNumber(int num[], int n){
    int maxi = INT32_MIN;
    for (int  i=  0; i <n ; i++){
        maxi = max(maxi, num[i]);
        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    return maxi;
}
// Initialise print minimum number of function 

int MinNUmber(int num[], int n){
    int mini = INT32_MAX;
    for(int i = 0;  i < n; i++){

        mini = min(mini, num[i]);
        // if(num[i] < min){
        //         min = num[i];
        // }
    }
    return mini;
}

int main(){

    int size;
    cout<<"Enter the size of array "<<endl;

    cin>>size;
    cout<<" ";
    // Declare array
    int num[100];
    for(int i = 0; i < size; i++){
        cin>> num[i];

    }
    cout<<"maximum number :=> "<<MaxNumber(num, size)<<endl;
    cout<<"minimum number :=> "<<MinNUmber(num, size)<<endl;
    return 0;
}