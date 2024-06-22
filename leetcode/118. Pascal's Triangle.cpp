// Problem link: https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle(numRows);
        pascalTriangle[0] = {1};

        for (int i = 1; i < numRows; ++i) {
            vector<int> vec(i + 1);
            vec[0] = pascalTriangle[i - 1][0];
            vec[i] = pascalTriangle[i - 1][i - 1];
            for (int j = 1; j < i; ++j) {
                vec[j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
            }
            pascalTriangle[i] = vec;
        }
        return pascalTriangle;
    }
};