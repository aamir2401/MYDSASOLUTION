#include<iostream>
using namespace std;
class Person 
{
    public:
    void printingPerson()
    {
        cout<<"we are inside person class which is BASE CLASS"<<endl;
    }
};
//inheriting class from base class called Person;
class Employe : public Person
{
    public:
    void printingEmploye()
    {
        cout<<"we are inside employe class which is derived from person"<<endl;
    }
};

class Manager : public Employe 
{
    public:
    void printingManager()
    {
        cout<<"we are inside manager class which is derived form employe" <<endl;
    }

};
int main()
{
   Manager creatingManagerObject;
   creatingManagerObject.printingPerson();
   creatingManagerObject.printingEmploye();
   creatingManagerObject.printingManager();



    return 0;
}


// #include <iostream>
// using namespace std;

// // Base class
// class Vehicle {
// public:
//     void display() {
//         cout << "This is a vehicle." << endl;
//     }
// };

// // Derived class inheriting from Vehicle
// class Car : public Vehicle {
// public:
//     void displayCar() {
//         cout << "This is a car." << endl;
//     }
// };

// // Derived class inheriting from Car
// class SportsCar : public Car {
// public:
//     void displaySportsCar() {
//         cout << "This is a sports car." << endl;
//     }
// };     9199977470

// // Main function
// int main() {
//     // Creating an object of SportsCar
//     SportsCar mySportsCar;

//     // Calling member functions
//     mySportsCar.display();          // Accessing the display() function from Vehicle class
//     mySportsCar.displayCar();       // Accessing the displayCar() function from Car class
//     mySportsCar.displaySportsCar(); // Accessing the displaySportsCar() function from SportsCar class

//     return 0;
// }
