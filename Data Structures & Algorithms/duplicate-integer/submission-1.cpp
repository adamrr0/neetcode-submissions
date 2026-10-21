class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numsCheck;
        for(auto nums1 : nums)
            {
                numsCheck.insert(nums1);
            }

        if(numsCheck.size() != nums.size())
            return true;
        else
            return false;
    }
};