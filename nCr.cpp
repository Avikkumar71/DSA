-----------------nCr----------------------

#include <iostream>
using namespace std;

int factorial( int m ){
    int fact = 1;
    for(int i=1; i<=m; i++){
        fact=fact*i;
    }
    return fact;
}

int nCr ( int n, int r){
    int num = (factorial(n));
    int denom = (factorial(r) * factorial(n-r));
    
    int answer = (num/denom);
    return answer;
}


int main() {
    int a;
    int b;
    cin>> a;
    cin>> b;
    
    int output = nCr(a,b);
    cout<< "The nCr values for the given inputs is "<< output<< endl;
    return 0;
}