//in this program i am understanding the difference between pass by value and pass by reference
#include <iostream>
using namespace std;

//pass by value
void something(int a)
{
    ++a;
    cout << "from function call " << a << endl;
}

//pass by ref.
void something2(int &b)
{
    ++b;
    cout << "from function call by ref. " << b << endl;
}
int main()
{
    // int a=5;
    // a=a<<2;
    // cout<< a;

    // pass by value = created a copy of value
    int a = 9;
    int b = 1;
    something(a);
    something2(b);
    cout << "from main function pass by value" << a<<endl;
    cout << "from main function pass by ref." << b;
}
