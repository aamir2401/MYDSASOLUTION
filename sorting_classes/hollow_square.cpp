#include <iostream>
using namespace std;
int main()
{
    for(int row=0; row<5; row++)
    {
        if(row == 0 || row ==4)
        {
            for(int col=0; col<5; col++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for (int i = 1; i < 4; i++)
            {
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}