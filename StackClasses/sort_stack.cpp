#include<iostream>
#include<stack>
using namespace std;
void sort_the_stack(stack<int>& s, int element)
{
     if(s.empty())
     {
        s.push(element);
        return;
     }
     if(!s.empty() and s.top() < element)
     {
        s.push(element);
        return;
     }
     int temp = s.top();
     s.pop();
     sort_the_stack(s,element);
     s.push(temp);
}
void insert_in_sorted(stack<int>& s, int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
     if(!s.empty() and s.top() >= target)
     {
        s.push(target);
        return;
     }
     int temp = s.top();
     s.pop();
     insert_in_sorted(s,target);

     //back track;
     sort_the_stack(s,temp);

}
int main()
{
    stack<int> s;
    int target = 421;
    s.push(60);
    s.push(50);
    s.push(20);
    s.push(40);
    s.push(90);
    //  cout<<"UNsorted stack: "<<endl;
    // while(!s.empty())
    // {
    //     cout<<s.top()<< " ";
    //     s.pop();
    // }
    insert_in_sorted(s, target);
    cout<<"sorted stack: "<<endl;
    while(!s.empty())
    {
        cout<<s.top()<< " ";
        s.pop();
    }


    return 0;
}