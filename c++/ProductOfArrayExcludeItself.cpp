class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        int n = nums.size();
        vector<long long> res(n, 1);
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }
        long long mul = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= mul;
            mul *= nums[i];
        }
        return res;
    }
};