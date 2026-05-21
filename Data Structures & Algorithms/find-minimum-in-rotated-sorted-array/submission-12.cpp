class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int mid;
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] <= nums[mid - 1])
                return nums[mid];
            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return (nums[mid]);
    }
};

