#include <iostream>
using namespace std;

void counting( int n ){
    cout<<"Counting till the given number is "<<endl;
    for(int i = 1; i <= n ; i++){
        cout<< i << endl;
    }
}

int main() {
    int a;
    cin>> a;
    counting(a);
    return 0;
}