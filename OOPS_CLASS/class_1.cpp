#include<iostream>
using namespace std;
class Car
{
        
    private:
    int chassis_num;
    public:
    //state or prop.. of class;
    int model_num;
    string model_name;
    bool petrol;
    bool diesel;

    //defining behaviour of the company cars;
    void company_BMW()
    {

    }
    void company_mercedes()
    {

    }
     
    int getChessisNum()
    {
        return chassis_num;
    }
    void setChessisNum(int cN)
    {
        chassis_num = cN;
    }

};
int main()
{
    Car bmwForJohn;
    bmwForJohn.model_num = 1001;
    bmwForJohn.model_name = "X-series";
    bmwForJohn.petrol = false;
    bmwForJohn.diesel = true;
    //Tarika for setting private prop. from out side the class using getter and setter;
    bmwForJohn.setChessisNum(3990);
    cout<<"BMW for John n Model num " <<  bmwForJohn.model_num<<endl;
    cout<<"BMW for John n Model name " <<  bmwForJohn.model_name<<endl;
    cout<<"BMW for John n engine type petrol " <<  bmwForJohn.petrol<<endl;
    cout<<"BMW for John n engine type diesel " <<  bmwForJohn.diesel<<endl;
    cout<<"chessis number for Johns BMW is "<<bmwForJohn.getChessisNum()<<endl;

}
