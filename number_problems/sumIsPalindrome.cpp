// User function Template for C++
class Solution {
  public:
    long long reverse(long long n)
    {
        long long sum = 0;
        while(n != 0)
        {
            int d = n % 10;
            sum = sum * 10 + d;
            n  /= 10;
        }
        return sum;
    }
    bool isPalindrome(long long  n)
    {
        return n == reverse(n);
    }
    long long isSumPalindrome(long long n) {
        // code here
        long long output = 0;
        int i=1;
        for(int i = 0; i < 5; i++)
        {
            if(isPalindrome(n))
            {
                return n;
            }
            else
            {
                long long reversed = reverse(n);
                n = n + reversed;
                
            }
            
        }
            if (isPalindrome(n))
        {
            return n;
        }
            return -1;
    }
};