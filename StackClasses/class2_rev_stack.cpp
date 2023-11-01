#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>  
#include<algorithm>       // std::string, std::getline(string)
using namespace std;
void insertAtBottom(stack<int> &s, int target)
{
    if(s.empty())
   {
      s.push(target);
      return;
   }
   int temp = s.top();
   s.pop();
   insertAtBottom(s,target);
   s.push(temp);
}
void reverseStack(stack<int> &s)
{
    //base case;
    if(s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,target);
}
int main()
{
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
     
    reverseStack(s);
     
     while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}