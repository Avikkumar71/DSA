#include <iostream>
#include <stdio.h>
using namespace std;

void MaxMin( int arr[], int n){
    int Max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum value is "<<Max<<endl;
    cout<<"the minimum value is "<<min<<endl;
}

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    MaxMin(arr,n);
    return 0;
}