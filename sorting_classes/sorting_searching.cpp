#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int target){

int start = 0;
int end = size-1;
int mid = start + (end - start)/2;
int ans = -1;
while(start <= end)
{
     if(arr[mid] == target)
     {
        ans = mid;
        end = mid - 1;
     }
     else if(arr[mid] < target )
     {
        start = mid +1 ;
     }
     mid = start + (end - start)/2;
}
     return ans;
}
int main()
{
 int arr[]= {6,6,6,6,6,6,6,6,6,6,7};
 int size = 11;
 int target = 6;
 int finalAns = firstOcc(arr,size,target);
      
    cout<<finalAns;
   return 0;
}