#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    
    
    int n;
    cin>>n;
    int arr[n];
    
    //int arr[100];
    //fill_n(arr,100,1)
    
    for(int i = 0; i<n ; i++){
        arr[i]=1;
    }
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}