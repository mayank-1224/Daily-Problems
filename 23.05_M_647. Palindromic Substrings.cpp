class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        for(int i = 0; i < s.length(); i++)
        {
            int l1 = expand(i, i, s);
            int l2 = expand(i, i + 1, s);
            res += l1 + l2;
        }
        return res;
    }
    
    int expand(int left, int right, string str)
    {
        int sum = 0;
        while(left >= 0 && right < str.length() && str[left] == str[right])
        {
            left--;
            right++;
            sum++;
        }
        return sum;
    }
};
