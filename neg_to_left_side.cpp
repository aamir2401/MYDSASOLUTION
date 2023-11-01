#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int arr[8] = {-1,3,4,6,-5,-8,-34,-6};
    int size = 8;
     int low = 0;
     int high = size - 1;
     for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"JDID"<<endl;
     while(low <= high)
     {
       if(arr[low] < 0 and arr[high] > 0)
       {
        low++;
        high--;
       }
       else if(arr[low] > 0 and arr[high] < 0)
       {
        swap(arr[low],arr[high]);
        low++;
        high--;
       }
       else if(arr[high]>0)
       {
        high--;
       }
       else
       {
        low++;
       }
     }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}