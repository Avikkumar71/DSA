#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool ispresent( int arr[][4], int target, int row, int col){
    
    for( int i=0; i<row; i++){
        for(  int j=0; j<col; j++){
            if( arr[i][j] == target ){
                return true;
            }
        }
    }
    return false;
}

void totalsum( int arr[][4], int row, int col){
    for( int i=0; i< row; i++){
        int sum =0;
        for( int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<"is "<< sum<< endl;
    }
}

int largestrowsum( int arr[][4], int row, int col ){
    int rowindex = -1;
    int max = INT_MIN;
    for( int i=0; i<row; i++){
        int sum = 0;
        for( int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if( sum > max );{
            max = sum;
            rowindex = i;
        }
    }
    cout<<max<<endl;
    return rowindex;
}
int main() {
    
    int arr[3][4];
    
    cout<<"Enter the values for the matrix "<<endl;
    
    for( int i=0; i< 3; i++){
        for( int j=0; j<4; j++){
            cin>> arr[i][j];
        }
    }
    
    for( int i=0; i<3; i++){
        for( int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int target;
    cout<<"Enter the number to be found "<<endl;
    cin>>target;
    
    cout<<ispresent( arr, target, 3, 4)<<endl;
    
    cout<<"The sum of array is "<<endl;
    totalsum( arr, 3, 4);
    
    cout<<"The maximum sum value is "<<largestrowsum( arr, 3, 4)<<endl;;
    

    return 0;
}