#include <iostream>
using namespace std;

bool issorted( int arr[], int size ){
    
    if( size == 1 || size == 0){
        return true;
    }
    
    if( arr[0] > arr[1] ){
        return false;
    }
    
    else{
        bool ans = issorted ( arr + 1, size-1);
        return ans;
    }
}

int main() {
    
    int arr[5] = {1,2,3,4,5};
    int size = 5;
     
    bool answer = issorted(arr, size);
    cout<<answer<<endl;

    return 0;
}