#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>  
#include<algorithm>       // std::string, std::getline(string)
using namespace std;
int main()
{
    string s = "Hello";
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        st.push(s[i]);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }



    return 0;
}