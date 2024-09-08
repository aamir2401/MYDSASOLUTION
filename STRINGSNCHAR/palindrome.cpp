#include <iostream>
#include<string>
#include <cstring>
using namespace std;
bool findPalindrome (char ch[])
{
    int i=0;
    int k = strlen(ch);
    int j = k-1;
    while(i<=j)
    {
        if(ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
     return true;
}
int main()
{ 
   char ch[100];
   cout<<"Input a char: "<<endl;
   cin>>ch;
   cout<<"0 defines false and 1 defines true"<<endl;
   cout<<"Given char is "<<findPalindrome(ch);





    // char ch[100] = "racercar";
    // string s = "";
    // s = ch;
    // int n = strlen(ch);
    // int m = s.length();
    // if(n != m)
    // {
    //     return -1;
    // }





    // string a;
    // string b;
    // cin>>a;
    //  b = a;
    // if(a.length() != b.length())
    // {
    //     return -1;
    // }
    // else
    // {
    //     return 1;
    // }



    // return 0;
}