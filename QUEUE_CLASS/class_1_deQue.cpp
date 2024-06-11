#include <iostream>
#include<queue>
using namespace std;
class deQueue
{
    public:
    int *arr;
    int rear;
    int front;
    int size;
    deQueue(int size)
    {
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

};
int main()
{
    deQueue deQ(6);






    return 0;
}