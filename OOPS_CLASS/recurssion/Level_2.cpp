// //climbing stair
// //to find number of ways to reach at certain stair
// #include<iostream>
// long long int climbingStr(int n)
// {
//      if(n == 0 || n == 1)
//      {
//         return 1;
//      }
//      long long int ans = climbingStr(n-1) + climbingStr(n-2);
//      return ans;
// }
// // using namespace std;
// int main()
// {
//     int m = 0123;
//     std::cout<<m;
//     int n;
//     std::cout<<" Give value of n "<<std::endl;
//     std::cin>>n;
//     long long int finalAns = climbingStr(n);
//     std::cout<<"Number of ways to reach at stair "<<n<<" is "<<finalAns; 
// } 



// pirnting array using rec
// #include <iostream>
// #include <climits>
// using namespace std;
// void printUsingRec(int arr[], int s , int i)
// {
//     if(i >= s)
//     {
//         return;
//     }
//     cout<<arr[i] << " ";
//     printUsingRec(arr,s,i+1);
// }
// void getMaxusingRec(int arr[], int size, int i, int& min)
// {
//     if(i >= size)
//     {
//         return ;
//     }
//     if(arr[i] >= min)
//     {
//         min = arr[i];
//         // i++;
//     }
//     getMaxusingRec(arr,size,i+1,min);
//     // return min;
// }
// int main()
// {
//     int arr[] = {1,2,23,4,5};
//     int size = 5;
//     int i = 0;
//     int min = INT_MIN;
//     getMaxusingRec(arr,size,i,min);
//     cout<<"Ress "<<min;




//     return 0;
// }



//to find the target or key is present in the given string using recursion
// #include <iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int targetCheck(string s, char c, int i, int size, vector<string>& strr)
// {
//     if(i >= size)
//     {
//         return -1;
//     }
//     if(s[i] == c)
//     {

//         strr.push_back(s[i]);
//         return i;
//     }
//     return  targetCheck(s,c,i+1,size,strr);
    
// }
// int main()

// {
//    string s = "tothemoon";
//    char key = 'n';
//    int i = 0;
//    int store = 0;
//    vector<string> strr;
//    int size = s.length();
//    int ans = targetCheck(s,key,i,size,strr);
//    if(ans != -1)
//    {
//       cout<<"is Present at idx no."<<ans;
//    }
//    else
//    {
//     cout<<"Not found";
//    }




// }




//to print the digit of a number using recursion 


#include <iostream>
using namespace std;
void  printingDigit(int a)
{
     if(a == 0) return;
     int digit = a % 10;
     printingDigit(a/10);
     cout<<" "<<digit;
     
}
int main()
{
    int a = 23576;
   
    printingDigit(a);



    return 0;
} 



