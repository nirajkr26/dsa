#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
private:
    void solve(vector<vector<int>>& ans, vector<int> nums, int index) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(ans, nums, index + 1);
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(ans, nums, 0);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);

    for (const auto& p : permutations) {
        cout << "[";
        for (size_t i = 0; i < p.size(); ++i) {
            cout << p[i];
            if (i < p.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}