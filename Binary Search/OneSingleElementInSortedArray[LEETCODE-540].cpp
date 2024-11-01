#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int low = 1;
    int n = nums.size();
    int high = n - 2;

    if (n == 1) {
        return nums[0];
    }

    if (nums[0] != nums[1]) {
        return nums[0];
    }
    if (nums[n - 1] != nums[n - 2]) {
        return nums[n - 1];
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
            return nums[mid];
        }
        else {
            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int ans = singleNonDuplicate(nums);
    cout << "The single non-duplicate element is: " << ans << endl;

    return 0;
}
