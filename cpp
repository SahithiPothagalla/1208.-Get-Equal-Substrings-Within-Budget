class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int r = 0;
        int l = 0;
        int maxi = 0;
        int currentCost = 0;
        for(; r<n; r++)
        {
            currentCost += abs(s[r] - t[r]);

            for(;currentCost > maxCost; l++)
            {
                currentCost -= abs(s[l] - t[l]);
            }
            maxi = max(maxi, r - l + 1);
        }
        return maxi;
    }
};
