#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int key,int i,int size){
    
    if(i == size){
        return;
    }
    
    if(arr[i] == key){
        cout << i << " ";
        solve(arr,key,i+1,size);
    }
    else {
        solve(arr,key,i+1,size);
    }
}

int main() {
	
	int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key = 2;
	
	solve(arr,key,0,size);
	return 0;

}
