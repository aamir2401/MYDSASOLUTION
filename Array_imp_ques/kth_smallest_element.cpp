// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int count = 0;
        int ans = arr[0];
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)
        {
            count++;
            if(count == k)
            {
                ans = arr[i];
            }
        }
        return ans;
    }
};