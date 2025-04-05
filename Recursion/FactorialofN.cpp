// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    
    factorial(n-1) + factorial(n-2);
}

int main() {
    
    int n;
    cin >> n;
    
    int factorial = fact(n);

    return 0;
}
