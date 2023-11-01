#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{   
    int maxi = INT16_MIN;
    int arr2D[3][3]=
   {{10,1,2},
    {4,6,8},
    {2,5,9}};

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
          if(arr2D[row][col] >= maxi)
          {
               maxi = arr2D[row][col];
          }
        }
    }
    cout<<"maximun number is:"<<maxi;
}