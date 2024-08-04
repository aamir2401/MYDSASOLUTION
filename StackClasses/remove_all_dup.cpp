#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>
using namespace std;
void remove_all_dup(string &a)
{
    stack<char> st;
    int i = 1;
    st.push(a[0]);
    while(i<a.length())
    {
        if(!st.empty() and st.top() == a[i])
        {
            st.pop();
            i++;
        }
        else
        {
            st.push(a[i]);
            i++;
        }
    }
    while(!st.empty())
    {
        // cout<<"2423"<<endl;
        cout<<st.top();
        st.pop();
    }

}
int main()
{
    string a = "abbaca";
    remove_all_dup(a);





    return 0;
}