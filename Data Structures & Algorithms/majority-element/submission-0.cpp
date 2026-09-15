class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> elemCount;

        int numsSize = nums.size();
        int currentNum;
        for (int i = 0; i < numsSize; i++) {
            currentNum = nums[i];

            elemCount[currentNum]++;
            if (elemCount[currentNum] > floor(numsSize / 2)) {
                return currentNum;
            }
        }

        return -1;
    }
};