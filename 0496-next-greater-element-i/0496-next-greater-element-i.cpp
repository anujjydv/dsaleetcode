class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        vector<int> nge(m);
        stack<int> st;
        for(int i = m-1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]) st.pop();
            if(st.empty()) nge[i] = -1;
            else nge[i] = st.top();
            st.push(nums2[i]);
        }
        int n = nums1.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            int j = 0;
            while(nums2[j] != nums1[i]) j++;
            ans[i] = nge[j];
        }
        return ans;
    }
};