#include <iostream>
#include<queue>
using namespace std;
class Queue 
{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    //push program in queue;
    void push(int data)
    {
          if(rear == size)
          {
            cout<<"Queue is full!!"<<endl;
          }
          else
          {
            arr[rear] = data;
            rear++;
          }
    }
    //pop program in queue;

     void pop()
     {
        //possibly two case--
        //1 may be queue is empty
        if(front == rear)
        {
            cout<<"queue is empty!!"<<endl;
        }
        //2 or there can be element to pop;
        else
        {
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
     }

     //getfront in queue;
     int getfront()
     {
        if(front == rear)
        {
            cout<<"queue is empty!!"<<endl;
        }
        else
        {
            return arr[front];
        }
     }

     //check for is empty or not queue;
     bool isEmpty()
     {
        if(rear == front)
        {
            cout<<"d"<<endl;
            return true;
        }
        else
        {
            cout<<"queue having some space"<<endl;
            return false;
        }
     }

     // get size;
     int getSize()
     {
         int s = size - front;
         return s;
     }
};
int main()
{
    //queue using STL;
    // queue<int> q;
    // q.push(2);
    // q.push(3);
    // q.push(5);
    // q.push(6);
    // q.push(7);
    // q.push(8);
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    



    //implementing queue from scratch;
    Queue que(5);
    que.push(2);
    que.push(2);
    que.push(4);
    que.push(2);
    que.push(2);
    que.isEmpty();
    que.push(2);
   
     cout<<"size of queue is "<<que.getSize()<<endl;

     que.pop();
     cout<<"size of queue is "<<que.getSize()<<endl;

     cout<<"Front element is "<<que.getfront()<<endl;

    return 0;
}