#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>  
#include<algorithm>       // std::string, std::getline(string)
using namespace std;
void getMiddleElement(stack<int> &s,int size)
{
    if(s.size() == 0)
    {
        cout<<"Empty stack"<<endl;
    }
    if(s.size() == size/2+1)
    {
        cout<<"Middle element is: "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    getMiddleElement(s,size);
    //backtracking
    s.push(temp);
//     while(!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
}
int main()
{
    stack<int> s;
    
    
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    //solving using recursion;
    getMiddleElement(s, s.size());






    //below is the brute force approach;
    // int sizeOfStack = s.size();
    // //we have to find the middle element of a stack;
    // int mid = sizeOfStack / 2;
    // while(sizeOfStack != mid)
    // {
    //    s.pop();
    //    sizeOfStack--;
    // }
    // cout<<"Middle element is: "<<s.top()<<endl;







    // cout<<"Size of stack is: "<<sizeOfStack<<endl;
    // while(!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    





    return 0;
}