#include<iostream>
using namespace std;
int getInversionCount(int arr[], int n)
{
     int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            // if(arr[i] > arr[j])
            // {
            //     count++;
            // }
            count = arr[i] > arr[j] ? count + 1 : count;
        }
    }
    return count;
}
int main()
{
    int arr[] = {8,4,2,1};
    int n = 4;
    int ans = getInversionCount(arr,4);
    cout<<"we got ans as: "<<ans;




    return 0;
}