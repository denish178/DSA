// LEETCODE 88
//BUT THIS IS MY CODE 
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<int>& arr1, int n, const vector<int>& arr2, int m){
    
    vector<int> ans(m+n,0);
    int p1 = n-1;
    int p2 = m-1;
    int p = m+n-1;
    
    while(p1>=0 && p2>=0){
        if(arr1[p1]>arr2[p2]){
            ans[p] = arr1[p1];
            p1--;
            p--;
        }
        else {
            ans[p] = arr2[p2];
            p2--;
            p--;
        }
    }
    while(p1>=0){
        ans[p] = arr1[p1];
        p1--;
        p--;
    }
    while(p2>=0){
        ans[p] = arr2[p2];
        p2--;
        p--;
    }
    
    return ans;
    
}

int main() {
    
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,5,6};
    
    int n = arr1.size();
    int m = arr2.size();
    
    vector<int> result(n+m,0);
    
    result = solve(arr1,n,arr2,m);
    
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    
    return 0;
    
    
}
