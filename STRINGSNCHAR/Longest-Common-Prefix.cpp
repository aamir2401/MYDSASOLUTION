 string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string ans = "";
        while(true)
        {
            char ch_curr = 0;
            for(auto str : strs)
            {
                if(i >= str.size())
                {
                    ch_curr = 0;
                    break;
                }
                if(ch_curr == 0)
                {
                   ch_curr = str[i];
                }
                else if(ch_curr != str[i])
                {
                    ch_curr = 0;
                    break;
                }
            }
            if(ch_curr == 0)
            {
                break;
            }
            else
            {
                ans.push_back(ch_curr);
            i++;
            }
        }
        return ans;
    }