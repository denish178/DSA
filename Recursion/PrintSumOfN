// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int doSum(int n,int ans){
    
    if(n<1) return ans;

    return doSum(n-1,ans+n);
    
}

int main() {
    
    int n;
    cin >> n;
    
    int sum = doSum(n,0);
    cout << sum << endl;

    return 0;
}
