#include <iostream>
// #include<string>
using namespace std;
int util(int &a)
{

    a++;
    return a;
}
int main()
{
//    int a = 5;
//    util(a);
//    cout<<a;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i+1)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

}