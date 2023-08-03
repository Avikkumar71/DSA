#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int A[], int size){
    for(int i=0; i<size; i++){
        cout<<A[i];
    }
}
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    
    while( start <= end ){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] <= key ){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return-1;
}

int main() {
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    
    int index = BinarySearch(odd,5,8);
    cout<<"The key is present at index "<<index<<endl;
    
    return 0;
}