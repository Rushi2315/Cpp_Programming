#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void showPerson()
    {
        cout << "Name: "<< name << endl;
        cout << "Age: " << age << endl;
    }
};

// Child Class (Single Inheritance)
class Employee : public person
{
public:
    int empID;
    string company;

    void showEmployee()
    {
        cout <<"Employee ID: "<< empID<< endl;
        cout <<"Company : " << company<< endl;
    }
};

int main()
{
    Employee obj;

    obj.name = "Rushi";
    obj.age = 24;
    obj.empID = 123;
    obj.company = "TCS";

    obj.showPerson();
    obj.showEmployee();

    return 0;

}
