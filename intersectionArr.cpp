#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 4, 5};
    int brr[5] = {1, 2, 4, 7};
    int size1 = 4;
    int size2 = 5;
    // find the intersection of array arr and brr;
    vector<int> ans;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}