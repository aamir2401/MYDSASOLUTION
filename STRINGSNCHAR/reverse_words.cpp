 string ans;
        int i=s.length()-1;
        int j=s.length()-1;
        int k;
        while(i>=0 and j>=0)
        {
            
            char ch = s[i];
            if(ch == '.')
            {
                k = i-1;
                if(k<0)
                {
                 break;
                }
                i++;
                while(i <= j)
                {
                    ans.push_back(s[i]);
                    i++;
                }
                ans.push_back('.');
                i = k;
                j = k;
            }
            else
            {
                i--;
            }
        }
        k = 0;
        while (k <= j) {
            ans.push_back(s[k]);
            k++;
        }
        return ans;