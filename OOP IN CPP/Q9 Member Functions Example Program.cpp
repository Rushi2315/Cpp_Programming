#include<iostream>

using namespace std;

class Mydata
{
public:
    int var1;
    float var2;
    char var3;

    void myfun()
    {
        cin >> var1 >> var2 >> var3;
        cout <<var1 <<" "<< var2<<" "<< var3<<endl;
    }
};

int main()
{
    Mydata Obj;

    Obj.myfun();

    return 0;
}
