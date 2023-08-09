#include <iostream>
using namespace std;

int fibonacci( int num)
{
    if( num == 0 ){
        return 0;
    }
    
    if( num == 1){
        return 1;
    }
    
    int ans = fibonacci(num-1) + fibonacci(num-2);
    return ans;
}

int main() {
    
    int num;
    cin>>num;
    int a = 0;
    int b = 1;
    
    for( int i=0; i<num; i++){
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}