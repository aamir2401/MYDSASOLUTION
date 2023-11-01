#include<iostream>
using namespace std;
bool checkSorted(int arr[], int size, int i)
{
    if(i == size)
    {
        return true;
    }
    if(arr[i] < arr[i+1])
    {
        checkSorted(arr,size,i+1);
    }
    else
    {
        return false;
    }

}
int main()
{
    int arr[] = {11,23,35,46,54};
    int size = 5;
    int i = 0;
    bool ans = checkSorted(arr, size, i);
    if(ans)
    {
        cout<<"sorted!!";
    }
    else
    {
        cout<<"NotSorted";
    }




    return 0;
}


// void getSubseQue(string str, int i, string op)
//     {
//         if(i >=  str.length())
//         {
            
//             cout<<op<<endl;
//             return;
//         }
       
//         //exclude case
//         getSubseQue(str,i+1,op);


//          //include case
//         op.push_back(str[i]);
//         getSubseQue(str,i+1,op);
//     }
//     int main()
// {
//     string str = "abc";
//     int i = 0;
//     string op = "";
    
//     getSubseQue(str, i, op);



//     return 0;
// }