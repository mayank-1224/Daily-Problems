class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        if(n < 3) return 0;
        int l = 0, r = 2, ans = 0;
        while(r < n)
        {
            if(s[l] != s[l + 1] && s[l] != s[r] && s[l + 1] != s[r])
                ans++;
            ++l, ++r;
        }
        return ans;
    }
};
