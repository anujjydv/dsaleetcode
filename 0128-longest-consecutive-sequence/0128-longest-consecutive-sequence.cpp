class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(), nums.end());
        int cntcur = 0;
        int longest = 1;
        int lastsmaller = INT_MIN;
        for(int i = 0; i < n; i++){
            if(nums[i] - 1 == lastsmaller){
                cntcur++;
                lastsmaller = nums[i];
            } else if(nums[i] != lastsmaller){
                cntcur = 1;
                lastsmaller = nums[i];
            }
            longest = max(longest, cntcur);
        }
        return longest;

    }
};