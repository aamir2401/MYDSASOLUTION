#include <iostream>
#include<queue>
using namespace std;
class circularQueue
{
    public:
    int size;
    int *arr;
    int rear;
    int front;
        //parametrized constructor
        circularQueue(int size)
        {
            this -> size = size;
            arr = new int[size];
            rear = -1;
            front = -1;
        }
        void push(int data)
        {
        //push function for cirQ;

        //case1 check for full queue;
         if((front == 0) and(rear == size - 1))
         {
              cout<<"queue is full cant insert"<<endl;
         }
        //case2 check if the element is first in q to be pushed;
          else if(rear == -1)
          {
            rear = front = 0;
            arr[rear] = data;
          }
        //case3 make this cirQ;
           else if(rear == size -1 and front != 0)
           {
            rear = 0;
            arr[rear] = data;
           }
        //case4 make a normal flow to push;
        else
        {
            rear++;
            arr[rear] = data;
        }
        }


};
int main()
{
    //building circular queue;
     circularQueue cirQ(5);
     cirQ.push(3);
     






    return 0;
}