//printing maximum in k sized sub-array
//This solution is not sufficient for online coding platform like gfg or leetcode because it will through TLE;
#include<iostream>
#include<vector>
#define INT_MIN
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k;
    cout<<"Give the value of K to get maximum in K size of subarray:"<<endl;
    cin>>k;
    cout<<"You have given value of K as: "<<k<<endl;
    int n = arr.size();
     for(int i=0; i<=n-k; i++)
     {
        int maxi = 0;
        for(int j=i; j<k+i; j++)
        {
            maxi = max(arr[j], maxi);
        }
        cout<<"maximin in given k as: "<<k<<" is "<<maxi<<endl;
     }



    return 0;
}