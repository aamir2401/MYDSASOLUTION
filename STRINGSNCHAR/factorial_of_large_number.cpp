#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
vector<int> factorial(int N){
        // code here
        
        vector <int> ans;
        int carry = 0;
        ans.push_back(1);
        for(int i=2; i<=N; i++)
        {
            for(int j=0; j<ans.size(); j++)
            {
                int digit = ans[j] * i + carry;
                ans[j] = digit%10;
                carry = digit/10;
            }
            while(carry)
            {
                ans.push_back(carry%10);
                carry = carry/10;
            }
            carry = 0;
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }