class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        int numsSize = nums.size();
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > numsSize / 2) {
                return num;
            }
        }

        return -1;
    }
};