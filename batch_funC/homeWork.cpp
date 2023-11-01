//write a function to display area of circle
#include<iostream>
using namespace std;
double areaOfCircle(double &a)
{
    cout<<"Enter the value of radius in cm"<<endl;
    cin>>a;
    double area = 3.14*a*a;
    return area;
}
int main()
{
   //3.14*r*r
   double r;
   double ans = areaOfCircle(r);
   cout<<"area of circle is "<<ans<<"cm";


    return 0;
}