#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse( int arr[], int n){
    int i = 0;
    int j = (n-1);
    while( i<j ){
        swap( arr[i], arr[j]);
        i+=2;
        j-=2;
    }
    for(int i = 0; i<n; i++){
        cout<< arr[i] << endl;
    }
}

int main() {
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    reverse(A, n);
    return 0;
}