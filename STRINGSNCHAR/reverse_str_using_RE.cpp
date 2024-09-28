#include <iostream>
#include<string>
using namespace std;
void reverseRE(string &ans, string str, int i, int n)
{
    if(i > n)
    {
          return;
    }
    reverseRE(ans, str, i + 1, n);
    ans.push_back(str[i]);
}
int main()
{
    string ans = "";
    string str = "HellowwWorld";
    cout<<"Str before reversing: "<<str<<endl;
    int i = 0;
    int n = str.size();
    reverseRE(ans, str, i, n);
    cout<<"Str after reversing: "<<ans<<endl;




    return 0;
}