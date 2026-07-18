class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mxrch = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > mxrch) return false;
            mxrch = max(mxrch, i + nums[i]);
            if(mxrch >= nums.size() - 1) return true;
        }
        return true;
    }
};