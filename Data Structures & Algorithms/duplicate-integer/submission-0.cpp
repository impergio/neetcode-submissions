class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums_present;

        for (int num : nums) {
            if (nums_present.contains(num)) {
                return true;
            }

            nums_present.insert(num);
        }

        return false;
    }
};