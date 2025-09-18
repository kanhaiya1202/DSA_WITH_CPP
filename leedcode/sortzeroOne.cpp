#include<iostream>
using namespace std;

int printarr(int arr[], int k){
    for(int k = 0; k<8; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}
void sortzeroOne(int arr[], int size){
    int step = 1;
    int i = 0 ;
    int j = size-1;
    
   
    while (i < j )
    {
        cout<<"step"<<step++<<endl;
        printarr(arr,8);
        cout<<endl;
        while (arr[i] == 0 && i<j)
        {
            i++;
        }
        while (arr[j] == 1 && i<j)
        {
            j--;
        }
        if(arr[i] == 1 && arr[j] ==0 && i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    
    }
         
}
int main(){
    int arr[8] = {1,0,1,0,1,0,0,0};
    sortzeroOne(arr, 8);
    cout<<"final solution :- "<<endl;
    printarr(arr, 8);
}