#include<iostream>
#include<vector>
#include <numeric>
using namespace std;
int getLen(char ch[])
{
   int len = 0;
   int s = 0;
   while(ch[s] != '\0')
   {
     len++;
     s++;
   }
   return len;
}

int main()
{


    //reverse a string

   char ch[50];
   cout<<"Input a string" <<endl;
   cin.getline(ch,50);
   int s = 0;
   int bh =getLen(ch);
   int end = bh-1;
   while(s<=end)
   {
    swap(ch[s],ch[end]);
    s++;
    end--;
   }
   cout<<ch<<endl;

   



















//     vector<int> arr = {1,2,3,4,5};
    
//     int ans = accumulate(arr.begin(),arr.end(),0);
//     cout<<ans;
    
//     return 0;
// }
// #include <numeric>
// #include <vector>
// #include <iostream>

// int main()
// {
//     std::vector<int> vec = {1, 2, 3, 4, 5};
//     int sum = std::accumulate(vec.begin(), vec.end(), 0);
//     std::cout << "Sum of elements in the vector: " << sum << std::endl;
//     return 0;
}
