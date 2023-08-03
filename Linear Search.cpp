#include <iostream>
#include <stdio.h>
using namespace std;

void print(int arr1[], int size){
    cout<<"The entered array is ";
    for(int i=0; i<size; i++){
        cout<<arr1[i];
    }cout<<endl;
}

int LinearSearch(int arr[], int size,  int key){
    
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
}

int main() {
    
    int size;
    cin>> size;
    
    int A[size];
    for( int i = 0; i<size; i++){
        cin>> A[i];
    }
    
    int key;
    cin>> key;
    
    print(A,size);
    
    int answer = LinearSearch(A ,size, key);
    
    if(answer == 0){
        cout<<"Element is not present int the given array"<<endl;
    }
    else{
        cout<<"Element is present in the index at index "<<answer<<endl;
    }
    return 0;
}