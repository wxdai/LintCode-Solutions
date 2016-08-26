class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        unordered_map<int, int> sumIndex;
        sumIndex[0] = -1;
        int curSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            curSum += nums[i];
            if (sumIndex.count(curSum)) {
                return vector<int> {sumIndex[curSum] + 1, i};
            }
            sumIndex[curSum] = i;
        }
        return vector<int> {-1, -1};
    }
};