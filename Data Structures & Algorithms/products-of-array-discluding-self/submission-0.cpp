class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();

    
       for (int i = 0; i < n; ++i) {
            int result = 1;
            for (int j = 0; j < n; ++j) { // simpler forward loop
                if (j != i) result *= nums[j];
            }
            arr.push_back(result);
        }
        return arr;

    }
};
