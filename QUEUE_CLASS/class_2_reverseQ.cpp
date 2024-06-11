#include <iostream>
#include<queue>
#include<stack>
using namespace std;
//solve-->reverse the Queue using recursion;
void solveUsingRec(queue<int> &q)
{
    if(q.empty() == true)
    {
        return;
    }
    int element = q.front();
    q.pop();
    solveUsingRec(q);
    q.push(element);
}
void printing(queue<int> &q)
{
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}
int main()
{
    //solve reverse the q using recursion;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    solveUsingRec(q);
    printing(q);
    







    // queue<int> q;
    // stack<int> st;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
    // // cout<<"size : "<<q.size();
    // cout<<"Printing Queue before rev--: "<<endl;
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    
    // while(!q.empty())
    // {
    //    int element = q.front();
    //    st.push(element);
    //    q.pop();
    // }
    // while(!st.empty())
    // {
    //     q.push(st.top());
    //     st.pop();
    // }
    // cout<<"Printing Queue: "<<endl;
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }




    return 0;
}