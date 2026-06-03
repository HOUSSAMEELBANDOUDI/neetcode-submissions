class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int& num : nums){
            count[num]++;
        }

        vector<pair<int, int>> res;
        for (const auto& p: count){
            res.push_back({p.second, p.first});
        }
        sort(res.rbegin(), res.rend());
        vector<int> arr;
        for (int i = 0; i < k; i++){
            arr.push_back(res[i].second);
        }
        return arr;


    }
};
