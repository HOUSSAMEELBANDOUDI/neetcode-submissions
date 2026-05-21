class Solution {
public:
    int search(vector<int>& nums, int target) {

        int mid , left = 0, right = nums.size() - 1;
        if (target == nums[0])
            return (0);
        while (left <= right)
        {
            mid = left + (right -left) / 2;
            if (nums[mid] == target)
                return (mid);
            
            if (nums[mid] > target && nums[mid] < nums[right])
                right = mid - 1;
            else
               left = mid + 1;
        }
        return (-1);
        
    }
};
