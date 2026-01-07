#include<iostream>

using namespace std;

class MCA
{
public:
    int A;
    float B;

    void myfun()
    {
        cout<<"Hi"<<endl;
    }
};

int main()
{
    MCA obj;

    obj.A = 100;
    obj.B = 11.22;

    cout << obj.A <<" "<< obj.B <<endl;
    obj.myfun();

    return 0;
}
