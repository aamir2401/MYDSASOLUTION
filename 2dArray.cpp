#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
//     int arr2D[3][3]=
//    {{0,1,2},
//     {4,6,8},
//     {2,5,9}};

// //accessing array 2d wise;
//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//             cout<<arr2D[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
 //brute for approach
    vector<int> a = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = a.size();
     int longest = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                int sum = 0;
                for(int k=i; k<=j; j++)
                {
                    sum += a[k];
                }
                if(sum == k)
                {
                    longest = max(longest, j-i+1);
                }
            }
        }
        cout<<"longest subArray is: "<< longest;
    return 0;
}






#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
//     int arr2D[3][3]=
//    {{0,1,2},
//     {4,6,8},
//     {2,5,9}};

// //accessing array 2d wise;
//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//             cout<<arr2D[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
 //brute for approach
    vector<int> a = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = a.size();
     int longest = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                int sum = 0;
                for(int k=i; k<=j; j++)
                {
                    sum += a[k];
                }
                if(sum == k)
                {
                    longest = max(longest, j-i+1);
                }
            }
        }
        cout<<"longest subArray is: "<< longest;
    return 0;
}