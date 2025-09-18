#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i< size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr [10] = {4,1,3,5,7,76,23,4,-2,22};
    cout<<"Enter the search key"<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Element present in array"<<endl;
    }
    else{
        cout<<"ELement is not present in array"<<endl;
    }
}