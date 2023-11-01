#include<iostream>
using namespace std;
int util(int* ptr)
{
    ptr = ptr + 1;
    // return ptr;
}
int main()
{
    // int arr[] = {145,2,3,4,5,6,7};
    // int a = 3;
    // int* ptr = &a;
    // int *gt = &arr[0];
    // cout<<" printing "<<*gt;
    // int *ptr = new int;
    // delete ptr;
    // cout<<" dfdfd   "<<*ptr;
    // int a = 4;
    // int* p = &a;
    // cout<<"sdd "<<&a<<endl;
    // cout<<"asd "<<p<<endl;
    // cout<<"dhfbdh "<<*p<<endl;

    // util(p);

    // cout<<"he7y   "<<p<<endl;
    // cout<<"hey"<<endl;

    // int a = new int ;
    // int *ptr = a++;
    // cout<<*ptr;

      float arr[5] = {12.3,56.4,654.23,35.5,34.34};
      float *ptr1 = &arr[0];
      float *ptr2 = ptr1 + 3;
      cout<<*ptr2<<"  ";
      cout<< ptr2 -ptr1;

    return 0;

}