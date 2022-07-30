class Solution {
public:
    const vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
			return {};
		
		vector<string> res;
        res.push_back("");
   
        for(auto x: digits)
		{
        	vector<string> tmp;
            for(auto y: pad[x - '0'])
			{
                for(auto s: result)
                    tmp.push_back(s + y);
            }
            res.swap(tmp);
        }
        return res;
    }
};
