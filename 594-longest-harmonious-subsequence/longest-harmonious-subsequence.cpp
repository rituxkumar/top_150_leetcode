class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        // frequency count ho gaya..
        for (auto num : nums) {
            mp[num]++;
        }

        int ans = 0;
        for (auto it : mp) {
            int num = it.first;
            if (mp.find(num + 1) != mp.end()) {
                ans = max(ans, mp[num] + mp[num + 1]);
            }

        }

            return ans;
        }
    };