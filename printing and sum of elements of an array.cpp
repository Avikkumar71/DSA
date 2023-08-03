#include <iostream>
#include <stdio.h>
using namespace std;

void print(int A[], int size){
    cout <<"The enteries array is ";
    for(int i = 0; i<size; i++){
        cout<< A[i];
    }cout<<endl;
}

void Sum( int A[], int size){
    int sum=0;
    for(int i = 0; i<size ;i++){
        sum = sum + A[i];
    }
    cout<< "The sum of the array is "<<sum<<endl;
}

int main() {
    
    int size=0;
    cin>>size;
    int arr[size];
    for(int i = 0; i<size ;i++){
        cin>>arr[i];
    }
    
    print(arr,size);
    Sum(arr,size);
    return 0;
}