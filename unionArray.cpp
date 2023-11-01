#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int a,b;
    // cout<<"Enter the size of arr and brr"<<endl;
    // cin>>a>>b;
    // vector<int> arr(a);
    // vector<int> brr(b);
    // cout<<"Enter the value of arr"<<endl;
    // for(int i=0; i<arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"Enter the value of brr"<<endl;
    // for(int i=0; i<brr.size(); i++)
    // {
    //     cin>>arr[i];
    // }
    // vector<int> ans;
    // for(int i=0; i<arr.size(); i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0; i<brr.size(); i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    // for(int i=0; i< ans.size(); i++)
    // {
    //     cout<<ans[i];
    // }


   int arr[4]={1,2,3,4};
   int arr2[4]={5,6,7,8};
   int sizea = 4;
   int sizeb = 4;
   vector<int> ans;
   for(int i=0; i<sizea; i++)
   {
    ans.push_back(arr[i]);
   }
   for(int i=0; i<sizeb; i++)
   {
    ans.push_back(arr2[i]);
   }
   for(int i=0; i<ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }

    return 0;
}