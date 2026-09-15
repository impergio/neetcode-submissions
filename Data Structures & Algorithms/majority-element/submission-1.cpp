class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;

        int numsSize = nums.size();
        int currentNum;
        for (int i = 0; i < numsSize; i++) {
            currentNum = nums[i];

            freq[currentNum]++;
            if (freq[currentNum] > numsSize / 2) {
                return currentNum;
            }
        }

        return -1;
    }
};