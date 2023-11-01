#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
#include <string>  
#include<algorithm>       // std::string, std::getline(string)
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size)
    {
        arr = new int[size];
        this -> size = size;
        top1 = -1;
        top2 = size;
    }
    void push1(int data)
    {
        if(top2 - top1 == 1)
        {
          cout<<"Stack 1 overflow"<<endl;
        }
        else
        {
          top1++;
          arr[top1] = data;
        }
    }
    void pop1()
    {
       if(top1 == -1)
       {
        cout<<"Stack 1 underflow"<<endl;
       }
       else
       {
        top1--;
       }
    }
    void push2(int data)
    {
       if(top2 - top1 == 1)
       {
        cout<<"Stack 2 overflow"<<endl;
       }
       else
       {
        arr[top2] = data;
        top2--;
       }
    }
    void pop2()
    {
        if(top2 == size)
        {
         cout<<"Stack 2 underflow"<<endl;
        }
        else
        {
          top2++;
        }
    }
    void printing()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack s(10);
    s.push1(1);
    s.printing();
    s.push1(2);
    s.printing();
    s.push1(3);
    s.printing();
    s.push1(4);
    s.printing();
    s.push1(5);
    s.printing();
    
    s.push2(5);
    s.printing();
    s.push2(4);
    s.printing();
    s.push2(3);
    s.printing();
    s.push2(2);
    s.printing();
    s.push2(1);
    s.printing();
    s.push2(121);
    s.printing();




    return 0;
}