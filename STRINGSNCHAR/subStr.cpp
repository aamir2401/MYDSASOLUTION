#include <iostream>
#include<string>
#include <cstring>
using namespace std;
int main()
{
    string s = "abcd";
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            cout<<"substr  :"<<count<<s[i]<<s[j]<<endl;
            count++;
        }
    }




    return 0;
}