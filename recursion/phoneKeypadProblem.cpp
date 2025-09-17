#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
private:
    void solve(vector<string> &ans, string digits, string output, string mapping[], int index)
    {
        if (index == digits.length())
        {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(ans, digits, output, mapping, index + 1);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;

        string output = "";

        string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(ans, digits, output, mapping, 0);
        return ans;
    }
};

int main()
{
    Solution s;
    string digits = "23";
    vector<string> combinations = s.letterCombinations(digits);
    cout << "Letter combinations for \"" << digits << "\":" << endl;
    for (const string &combo : combinations)
    {
        cout << combo << " ";
    }
    cout << endl;
    return 0;
}