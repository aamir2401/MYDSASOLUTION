//Maximum sum such that no two elements are adjacent (Stickler Thief)
//This solution is not sufficient for online coding platform like gfg or leetcode because it will through TLE;
#include <vector>
#include <iostream>
#include<limits.h>
using namespace std;
void get_solution(vector<int> &arr, int i, int n, int sum, int &maxi)
{
    if(i >= n)
    {
        maxi = max(sum, maxi);
        return;
    }
    //inclusion recursive call;
    get_solution(arr, i + 2, n, sum + arr[i], maxi);


    //exclusion recursive call;
    get_solution(arr, i + 1, n, sum, maxi);
}
int main()
{
   vector<int> arr{5, 5, 10, 100, 10, 5};
   int i = 0;
   int n = arr.size();
   int sum = 0;
   int maxi = INT_MIN;
   get_solution(arr, i, n, sum, maxi);

   cout<<"We have got "<<maxi<<" as maximum non-adjacent sum"<<endl;


    return 0;
}
