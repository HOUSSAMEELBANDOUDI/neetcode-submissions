class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (binarySearch(matrix[i], target) != -1)
                return (true);
        }
        return (false);
    }
private:
    int binarySearch(vector<int>& nums, int target) {
        int L = 0, R = nums.size() - 1;
        while (L <= R) {
            int mid = (L + R) / 2;
            if (target > nums[mid])
                L = mid + 1;
            else if (target < nums[mid])
                R = mid - 1;
            else
                return mid;
        }
        return -1;
    }
};
