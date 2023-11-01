#include<iostream>
#include<string>
using namespace std;
// int binarySearch(vector<int> arr, int& key, int& size, int s, int e)
// {
//     if(s > e)
//     {
//         return -1;
//     }
//     int mid = s + (e - s)/2;
//     if(arr[mid] == key)
//     {
//         cout<<"fount at index "<<mid;
//         return mid;
//     }
//     if(arr[mid] > key)
//     {
//         int ans = binarySearch(arr,key,size,s,mid-1);
//         return ans;
//     }
//     else
//     {
//         int ans = binarySearch(arr,key,size,mid+1,e);
//         return ans;
//     }

// }
// int main()
// {
//     vector<int> arr{1,2,3,4,5,6,7,8};
//     int key = 1;
//     int s = 0;
//     int size = arr.size();
//     int e = size - 1 ;
//     int mid = s + (e - s)/2;
//     //using recursion method
//     int result = binarySearch(arr, key, size, s, e);

//     cout<<result;







    //binary using iterative method
    // while(s < e)
    // {
    //    if(arr[mid] == key)
    //    {
    //     cout<<"got key at idx "<<mid;
    //       return mid;
    //    }
    //    else if(arr[mid] > key)
    //    {
    //       e = mid - 1;
          
    //    }
    //    else
    //    {
    //     s = mid + 1;
    //    }
    //    mid = s + (e - s)/2;
    // }
    // cout<<"Cant find";
    