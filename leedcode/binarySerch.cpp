//firsr occ and last occ
#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s+ (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;  
        }
        if(arr[mid] < key){
            s = mid +1;

        }
        else{
            e = mid -1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}   

int lastOccurance(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e -s)/2;
    int ans = -1;

    while( s<= e){
        if(arr[mid] == key){
            ans = mid; 
            s = mid + 1;
        }
        if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s+ (e - s)/2;

    }
    return ans;
}
int main(){

    int odd[5] = {1,2,3,3,5};
    
    int answer = firstOccurance(odd, 5, 3);
    cout<<"first Occurence element :- "<<answer<<endl;
    cout <<"last occurenece element :- "<<lastOccurance(odd,5,3)<<endl;

}