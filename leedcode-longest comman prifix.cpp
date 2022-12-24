class Solution
{

	public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        for(int i = 0; i < strs[0].size(); i++){
            //i: index of char
            for(int j = 1; j < strs.size(); j++){
                //j: index of str
                if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};




class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		int i, j, n = strs.size();
		if (n == 0)
			return "";
		sort(strs.begin(), strs.begin() + n);
		for (j = 0; j < strs[0].size() && j < strs[n - 1].size() && strs[0][j] == strs[n - 1][j]; j++)
			;
		return strs[0].substr(0, j);
	}
};
