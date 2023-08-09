#include <iostream>
using namespace std;

int factorial( int n){
    
    /*int fact = 1;
    for( int i =1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
    */
    
    if( n == 0){
        return 1;
    }
    
    return n * factorial(n-1);
    
}

int main() {
    
    int n; 
    cin>>n;
    int ans = factorial( n);
    cout<< ans<< endl;
    return 0;
}