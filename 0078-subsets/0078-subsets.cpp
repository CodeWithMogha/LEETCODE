class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void backtrack(vector<int>& nums, int index) {
        // Store the current subset
        ans.push_back(subset);

        // Try adding each remaining element
        for (int i = index; i < nums.size(); i++) {
            subset.push_back(nums[i]);        // Choose
            backtrack(nums, i + 1);           // Explore
            subset.pop_back();                // Backtrack (Undo)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0);
        return ans;
    }
};