#include<iostream>
using namespace std;

// Parent Class
class Calculator
{
public:
    int num1;
    int num2;

    int add(int a, int b)
    {
        num1 = a;
        num2 = b;
        return (num1 + num2);
    }
};

// Child Class (Single Inheritance)
class AdvancedCalculator : public Calculator
{
public:
    int sub(int a, int b)
    {
        num1 = a;
        num2 = b;
        return (num1 - num2);
    }
};

int main()
{
    int a, b;
    cin >> a >> b;

    AdvancedCalculator obj;

    cout << "Addition: " << obj.add(a,b) << endl;   // Parent function
    cout << "Subtraction: " << obj.sub(a,b) << endl; // Child function

    return 0;
}
