#include <iostream>
#include <stdio.h>
using namespace std;

void Printarray(int arr[], int n){
    for( int i = 0;i < n ;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    
    int n;
    cin>> n;
    int A[n]={1, 2, 3, 4, 5};
    Printarray(A,n);
    return 0;
}