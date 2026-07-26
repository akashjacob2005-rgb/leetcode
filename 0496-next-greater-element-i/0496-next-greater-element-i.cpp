class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        // Build next greater map for nums2
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Remaining elements have no next greater element
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        // Build answer for nums1
        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(nextGreater[num]);
        }

        return ans;
    }
};