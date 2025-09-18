#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray( int arr[], int size){
    for(int i = 0; i< size; i++){
        int start = 0;
        int end = size -1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            end--;
            start++;
        }
        
    }
}

void swapalternate(int arr[], int size){
    for(int i = 0; i< size; i+=2){
       if(i+1 < size){
         swap(arr[i], arr[i+1]);
       }
    }
}

void allelememtadd(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    cout<<"All Element Add In Array :-  "<<sum<<endl;
}

bool findkey(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[100];

    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"1 .print array"<<endl;
    cout<<"2. reverse array"<<endl;
    cout<<"3. alternate array"<<endl;
    cout<<"4. All element add in array "<<endl;
    cout<<"5. find key in array "<<endl;

    int ch ;
    cin>>ch;
    switch (ch)
    {
    case 1:{ 
        
        printArray(arr, size);
    }
        break;
    case 2:{
        reverseArray(arr, size);
        printArray(arr, size);
    }
    break;
    case 3:{
        swapalternate(arr, size);
        printArray(arr, size);
    }
    break;
    case 4:{
        allelememtadd(arr, size);

    }
    break;
    case 5:{

        int key;
        cout<<"serch key :- "<<endl;
        cin>>key;

        int found = findkey(arr, size, key);

        if(found){
            cout<<"Key is present in array"<<endl;
        }
        else{
            cout<<"key is not present in array"<<endl;
        }

    }
    break;
    
    default:{
        cout<<"do not present in array"<<endl;
    }
        break;
    }
    
    


}