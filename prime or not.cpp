#include <iostream>
#include <stdio.h>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i < a; i++){
        if(a%i == 0){
            return 0;
        }
    return 1;
    }
}

int main() {
    int n;
    cin>> n;
    
    int ans = isPrime(n);
    if( ans == 0){
        cout<<"Is not a prime number "<<endl;
    }
    else{
        cout<<"Is a prime number "<<endl;
    }
    return 0;
}