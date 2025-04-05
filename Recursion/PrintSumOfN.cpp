// Online C++ compiler to run C++ program online
//USING PARAMETERS IN FUNCTION
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
////////////////////////////////////////////////////////////////////////////
//METHOD-2
//USING RECURRENCE RELATION 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int doSum(int n){
    
    if(n==1) return 1;

    return n+doSum(n-1);
    
}

int main() {
    
    int n;
    cin >> n;
    
    int sum = doSum(n);
    cout << sum << endl;

    return 0;
}
