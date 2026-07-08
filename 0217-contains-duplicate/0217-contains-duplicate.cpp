class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if(st.count(num)) return true;
            st.insert(num);
        }
        return false;
    }
};