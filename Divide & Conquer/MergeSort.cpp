#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}

void merge(vector<int> &arr, int si,int mid,int ei){
    vector<int> temp(ei-si+1,0);
    
    int i = si; //iterator for left part
    int j = mid+1; //iterator for right part
    int k = 0; // iterator for temp array
    
    while(i<=mid && j<=ei){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=ei){
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    for(k=0, i=si;k<temp.size();k++,i++){
       arr[i] = temp[k];
       
    }
}

void mergeSort(vector<int> &arr,int si,int ei){
    //base case
    if(si>=ei){
        return;
    }
    
    //kaam
    int mid = si + (ei-si)/2;
    
    mergeSort(arr,si,mid); //left part
    mergeSort(arr,mid+1,ei);//right part
    merge(arr,si,mid,ei);
    
}

int main() {
	
	vector<int> arr = {6,3,9,5,2,8};
	mergeSort(arr,0,arr.size()-1);
	printArr(arr);
    return 0;
}
