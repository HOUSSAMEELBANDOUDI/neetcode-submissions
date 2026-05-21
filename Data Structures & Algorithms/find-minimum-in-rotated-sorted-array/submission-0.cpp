class Solution {
public:
    int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] < nums[right]) {
            // The right half of the array is sorted, minimum is in left half or at mid
            right = mid;
        } else {
            // The left half of the array is sorted, minimum is in right half excluding mid
            left = mid + 1;
        }
    }
    
    // When the loop ends, 'left' will be pointing to the minimum element
    return nums[left];
}
};
