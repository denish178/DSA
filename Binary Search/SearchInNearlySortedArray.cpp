#include <iostream>
#include <vector>
using namespace std;

int searchInNearlySortedArray(vector<int>&nums, int target) {

  int s = 0;
  int e = nums.size()-1;

  while(s<=e){
    int mid = s + (e-s)/2;

    if(nums[mid] == target){
         return mid;
    }
    if(mid-1 >=0 && nums[mid-1] == target){
      return mid-1;
    }
    if(mid+1<nums.size() && nums[mid+1] == target){
      return mid+1;
    }
    else if(target > nums[mid]){
      s = mid+2;
    }
    else {
      e = mid-2;
    }
  }
  return -1;
}

int main() {
    vector<int> nums = {20,10,30,50,40,70,60};
    int target = 50;

    int ans = searchInNearlySortedArray(nums,target);
    cout << "Target found at index : " << ans << endl;

    return 0;
}
