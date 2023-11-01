#include <iostream>
#include<string>
#include <cstring>
using namespace std;
void toUpperCase(char a[])
{
    int n = strlen(a);
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]-'a'+'A';
    }
    
}
int main()
{

    char a[100]="hsdfwbsdiusdfh ";
    
   toUpperCase(a);
   cout<<a;
}