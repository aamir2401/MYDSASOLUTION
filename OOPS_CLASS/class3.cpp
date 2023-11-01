// #include <iostream>
// using namespace std;
// class Human 
// {
//      public:
//        int age;
//        string name;
//        int weight;

//        void working()
//        {
//         cout<<"Man on Work!" <<endl;
//        }
// };
// //creating a child class(inheritence);
// //name of child class : mode of access modifier and name of parent class;
// class Xyz : public Human
// {

// };
// int main()
// {
//       Xyz  aamir;
//       aamir.working(); 



//     return 0;
// }




//practicing for operator overloading; 
//operator overloading me hum plus symblo ko as a minus use karskte hain and thats it all about operator overloading;
#include <iostream>
using namespace std;
class Calculatr
{
  public:
  int value;
  void operator+( Calculatr &object2)
  {
        int val1 = this -> value;
        int val2 = object2.value;
        cout<<"here u are!"<<endl;
        cout << (val2 - val1); 
  }

};
int main()
{
  Calculatr object1 , object2;
  object1.value = 64;
  object2.value = 5;
  object1 + object2;


  return 0;
}