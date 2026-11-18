class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() < 2) return false;
        sort(nums.begin(),nums.end());
        int st=0;
        while (st < (int)nums.size() - 1){
            if ((nums[st]^nums[st+1])==0){
                return true;
            }
            st++;
        }
        return false;
    }
};