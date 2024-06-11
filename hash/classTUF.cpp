// #include <iostream>
// #include<map>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     //map data structure--> map store its element in key value pair where key is the element and value is the frequency of that key;
//     //map stores element in sorted form;
//     //syntax for declaration--> map<int,int> nameOFtheMap;
//     int arr[] = {0,2,3,4,4,5,1,2,1,3,4,0,0,0,0,5};
//     int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

//     map<int,int> mapp;
//     for(int i=0; i<sizeOfArray; i++)
//     {
//         mapp[arr[i]]++;
//     }
//     for(auto it:mapp)
//     {
//         cout<<it.first<<"--->"<<it.second<<endl;
//     }







//     // int arr[12] = {0,2,3,4,4,5,1,1,1,3,4,5};
//     // int hashArr[13] = {0};
//     // int s = sizeof(arr)/sizeof(arr[0]);
//     // for(int i=0; i<s; i++)
//     // {
//     //      hashArr[arr[i]]++;
//     // }
//     // int number;
//     // cout<<"Number u want to check Hz for? "<<endl;
//     // cin>>number;
//     // cout<<"here is your Hz for "<<number<<"--> is : "<<hashArr[number];

//     return 0;
// }




#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {1,2,0,3,4,2,3,4};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mapp;
    for(int i=0; i<arrsize; i++)
    {
          mapp[arr[i]]++;
    }
    for(auto it: mapp)
    {
        cout<<it.first<< "-->" << it.second<<endl;
    }

} 
