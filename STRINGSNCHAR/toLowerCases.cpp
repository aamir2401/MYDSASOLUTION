// #include <iostream>
// #include<string>
// #include <cstring>
// using namespace std;
// char toLowerCase(char ch[])
// {
//     int size = strlen(ch);
//     for(int i=0; i<size; i++)
//     {
//         ch[i] = ch[i] - 'A' + 'a';
//     }



// }
// int main()
// {
//     char ch[200] = "HEREIS_SOMETHING";
//     cout<<"Resultant char is : " << toLowerCase(ch);





//     return 0;
// }
#include <iostream>
#include<string>
#include <cstring>
using namespace std;
void toLowerCase(char a[])
{
    int n = strlen(a);
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]-'A'+'a';
    }
    
}
int main()
{

    char a[100]="HEREIS_SOMETHING";
    
   toLowerCase(a); 
   cout<<a;
}