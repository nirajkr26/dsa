#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int> nums, vector<int> output, int index) {
        if (index == nums.size()) {
            ans.push_back(output);
            return;
        }

        solve(ans, nums, output, index + 1);
        output.push_back(nums[index]);
        solve(ans, nums, output, index + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(ans, nums, output, 0);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.subsets(nums);

    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}