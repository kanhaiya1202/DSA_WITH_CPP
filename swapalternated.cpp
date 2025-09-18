#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swapalternate(int num[], int size){

    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(num[i], num[i+1]);
        }

    }
}
int main(){
    int arr [5] = {1,5,3,6,2};
    
    printarray(arr, 5);
    cout<<"Swap alternated number"<<endl;
    swapalternate(arr, 5);
    printarray(arr, 5);
}