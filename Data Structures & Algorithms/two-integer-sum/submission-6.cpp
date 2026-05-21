class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;

        // store value and original index
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // sort by value
        sort(arr.begin(), arr.end());

        int l = 0, r = arr.size() - 1;

        while (l < r) {
            int sum = arr[l].first + arr[r].first;

            if (sum == target) {
                int i = arr[l].second;
                int j = arr[r].second;
                return {min(i, j), max(i, j)};
            }
            else if (sum < target) {
                l++;
            }
            else {
                r--;
            }
        }

        return {}; // guaranteed answer exists
    }
};
