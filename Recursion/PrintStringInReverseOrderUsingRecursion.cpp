#include <bits/stdc++.h>
using namespace std;

void printInReverse(string s,int index){
    
    if(index<0){
        return;
    }
    cout << s[index];
    
    printInReverse(s,index-1);
}

int main() {
    
    string s = "virat";
    
    printInReverse(s,s.length()-1);
    
    return 0;
    
}
