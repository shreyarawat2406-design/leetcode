class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int countmax = 0;

        for(int it : st) {
            if(st.find(it - 1) == st.end()) {
                int x = it;
                int count = 1;

                // extend the sequence forward
                while(st.find(x + 1) != st.end()) {
                    x = x + 1;
                    count++;   // increment instead of resetting
                }

                countmax = max(countmax, count);
            }
        }
        return countmax;
    }
};
