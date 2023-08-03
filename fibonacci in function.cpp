#include <iostream>
#include <stdio.h>
using namespace std;

void Fib(int n){
    int a = 0;
    int b = 1;
    cout<<a;
    cout<<b;
    int temp=0;
    for(int i = 0; i < n-2; i++){
        temp = a+b;
        a = b;
        b = temp;
        cout<<b;
    }
}

int main() {
    int num;
    cin>> num;
    Fib(num );
    return 0;
}