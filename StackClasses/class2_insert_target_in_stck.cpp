#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>  
#include<algorithm>       // std::string, std::getline(string)
using namespace std;
void insertTarget(stack<int> &s, int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
   
    if(s.top() >= target)
    {
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    insertTarget(s,target);
    s.push(topElement);
}
int main()
{
    stack <int> s;
    s.push(7);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    
    // s.push(9);
    // s.push(10);
    
    int target = 6;
    insertTarget(s,target);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }




    return 0;
}