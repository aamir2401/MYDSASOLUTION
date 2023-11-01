#include <iostream>
#include <vector>
using namespace std;


    // int arr[] = {1, 3, 5, 7, 2, 4, 6};
    // vector<int> ans;
    // int size = 7;
    // int target = 9;
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size - 1; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             ans.push_back(arr[i]);
    //             ans.push_back(arr[j]);
    //         }
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // return 0;
    
int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n*2-1; ++j) {
		        int k=0;
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i - 1 || i == n - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<" ";
            } k++;
        }
        cout<<endl;
    }
}