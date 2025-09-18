#include<iostream>
using namespace std;
int reverse(int num[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        end --;
        start++;
    }
}

int main(){
    int num[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    for(int i = 0; i< size; i++){
        cin>>num[i];
      
    }
    
    cout<<"Reverse array"<<endl;
    reverse(num, size);
    for(int i = 0; i< size; i++){
        cout<<num[i]<<" ";
    }

}