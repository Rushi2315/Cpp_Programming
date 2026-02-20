
#include<iostream>

using namespace std;

class car
{
public :
    string brand;
    string model;
    int year;

    void ShowDetails()
    {
        cout << "Brand: "<< brand << endl;
        cout << "Model: "<< model << endl;
        cout << "Year: "<< year << endl;
    }
};

class NewCar : public car
{
public:
    void message()
    {
        cout << "This is one of the best new cars!" <<endl;
    }
};

int main()
{
    NewCar Obj;

    Obj.brand = "BMW";
    Obj.model = "X5";
    Obj.year = 2026;

    Obj.ShowDetails();
    Obj.message();

    return 0;
}
