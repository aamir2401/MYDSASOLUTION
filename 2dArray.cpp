#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int arr2D[3][3]=
   {{0,1,2},
    {4,6,8},
    {2,5,9}};

//accessing array 2d wise;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr2D[row][col]<<" ";
        }
        cout<<endl;
    }



    return 0;
}