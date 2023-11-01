//below codes are belong to online resourses;
// stack::emplace
// #include <iostream>       // std::cin, std::cout
// #include <stack>          // std::stack
// #include <string>  
// #include<algorithm>       // std::string, std::getline(string)
// using namespace std;
// int main ()
// {
//   stack<int> mystack;
//   stack<int> copy;



//   mystack.push(12);
//   mystack.push(13);
//   mystack.push(14);
//   mystack.push(15);
//   mystack.push(16);
//   mystack.push(17);
//   while(!mystack.empty())
//   {
    
// //     // cout<<mystack.top()<<" ";
//     copy.push(mystack.top());

//     mystack.pop();
//   }
//   while(!copy.empty())
//   {
//     cout<<copy.top()<<" ";
//     copy.pop();
//   }


//   mystack.emplace ("First sentence");
//   mystack.emplace ("Second sentence");

//   cout << "mystack contains:\n";
//   while (!mystack.empty())
//   {
//     cout << mystack.top() << '\n';
//     mystack.pop();
//   }








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
    int top;

    Stack(int size)
    {
        arr = new int[size];
        top = -1;
        this -> size = size;
    }
    // functions;
    //push
    void push(int data)
    {
         //first check wether arr is has space availble or not;
         if(size - top > 1)
         {
            //size is available 
            top++;
            arr[top] = data;
         }
         else
         {
            cout<<"Stack Overflow"<<endl;
         }
    }




    void pop()
    {
        //check if there is elemnet present or not to pop;
        if(top == -1)
        {
           cout<<"Stack Underflow"<<endl;
        }
        else
        {
           top--;
        }
    }




    int getSize()
    {
      return top + 1;
    }




    int getTop()
    {
        //check if there is element present in stack or not;
        if(top == -1)
        {
          cout<<"Stack is empyt nothing to return"<<endl;
        }
        else
        {
          return arr[top];
        }
    }




    bool isEmpty()
    {
        if(top == -1)
        {
          return true; 
        }
        else
        {
         return false;
        }
    }





};
int main ()
{
    Stack myStack(140);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    cout<<endl;
    cout<<"Size is: "<<myStack.getSize();
    cout<<endl;
    while(!myStack.isEmpty())
    {
        cout<<myStack.getTop()<<" ";
        myStack.pop();
    }
    cout<<endl;
    myStack.push(7);
    cout<<"is empty: "<<myStack.isEmpty();
    cout<<endl;
    cout<<"Size is: "<<myStack.getSize();






    return 0;
}

