#include <vector>
#include <iostream>
using namespace std;

int main()
{
    //brute for approach
    vector<int> a = {-1, 2, 3};
    int km= 6;
    int n = a.size();
     int longest = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                int sum = 0;
                for(int k=i; k<=j; k++)
                {
                    sum += a[k];
                }
                if(sum == km)
                {
                    longest = max(longest, j-i+1);
                }
            }
        }
        cout<<"longest subArray is: "<< longest;
    return 0;
}


// #include <vector>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> a = {10, 5, 2, 7, 1, 9};
//     int targetSum = 15;  // Renamed to avoid conflict with loop variable
//     int n = a.size();
//     int longest = 0;

//     for(int i = 0; i < n; i++) {
//         for(int j = i; j < n; j++) {
//             int sum = 0;
//             for(int k = i; k <= j; k++) {  // Fixed variable name
//                 sum += a[k];
//             }
//             if(sum == targetSum) {
//                 longest = max(longest, j - i + 1);
//             }
//         }
//     }

//     cout << "Longest subarray is: " << longest << endl;
//     return 0;
// }
