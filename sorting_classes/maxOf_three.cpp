#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter A B C"<<endl;
    cin>>a>>b>>c;
    if(a>=b and a>=c)
    {
        cout<<"A is the maximum number";
    }
    else if (b>=a and b>=c)
    {
         cout<<"B is the maximum number";
    }
    else
    {
         cout<<"C is the maximum number";
    }
}