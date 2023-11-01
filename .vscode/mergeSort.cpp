// #include<iostream>
// #include<vector>
// using namespace std;
// void arrMerger(vector<int> &arr, int low,int mid, int high)
// {
//     vector<int> temp(high - low + 1);
//     int left = low;
//     int right = mid + 1;
//     int k = 0;
//     while(left <= mid && right <= high)
//     {
//         if(arr[left] < arr[right])
//         {
//             temp[k] = arr[left];
//             left++;
//         }
//         else
//         {
//             temp[k] = arr[right];
//             right++;
//         }
//         k++;
//     }
//     while(left <= mid)
//     {
//         temp[k] = arr[left];
//         left++;
//         k++;
//     }
//     while(right <= high)
//     {
//         temp[k] = arr[right];
//         right++;
//         k++;
//     }
    
//     for(int i = low; i<=high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
//     return;
// }
// void mergeSort(vector<int> &arr, int low, int high)
// {
//     if(low >= high)
//     {
//         return;
//     }
//     int mid = (low+high)/2;
//     mergeSort(arr,low,mid);
//     mergeSort(arr, mid+1, high);
//     arrMerger(arr,low,mid,high);
// }
//  int main ()
//  {
//     vector<int> arr = {1,1,2,3,4,5,8,1,1,9,8};
//     int n = arr.size();
//     int low = 0;
//     int high = n-1;
//     mergeSort(arr,low,high);
//     cout<<"Printing the sorted array :"<<endl;
    
//      // Print the sorted array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     return 0;
//  }






// #include<iostream>
// #include<vector>
// using namespace std;

// void arrMerger(vector<int> &arr, int low, int mid, int high)
// {
//     vector<int> temp(high - low + 1); // Resize temp to match the size of the subarray
//     int left = low;
//     int right = mid + 1;
//     int k = 0; // Index for the temp array

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] < arr[right])
//         {
//             temp[k] = arr[left];
//             left++;
//         }
//         else
//         {
//             temp[k] = arr[right];
//             right++;
//         }
//         k++;
//     }

//     while (left <= mid)
//     {
//         temp[k] = arr[left];
//         left++;
//         k++;
//     }
//     while (right <= high)
//     {
//         temp[k] = arr[right];
//         right++;
//         k++;
//     }

//     // Copy the sorted elements back to the original array
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int mid = (low + high) / 2;
//     mergeSort(arr, low, mid);
//     mergeSort(arr, mid + 1, high);
//     arrMerger(arr, low, mid, high);
// }

// int main()
// {
//     vector<int> arr = {1,1,2,3,4,5,8,1,1,9,8};
//     int n = arr.size(); // Use the size() function to get the size of the vector
//     int low = 0;
//     int high = n - 1;
//     cout << "Printing the sorted array :" << endl;
//     mergeSort(arr, low, high);

//     // Print the sorted array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }






//   return 0;
// }