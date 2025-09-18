#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key ){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){
        if( key == arr[mid]){
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int odd [5] = {3,6,8,24,77};
    int binary = binarySearch(odd, 5, 24);
    cout<<"Index of 24 is ->  "<<binary<<endl;


}