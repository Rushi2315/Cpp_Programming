#include<iostream>

using namespace std;

class mydata
{
    int num1,num2;

public :
    void setData(int a,int b)
    {
        num1 = a;
        num2 = b;
    }

    int getData()
    {
        return(num1 + num2);
    }
};

int main()
{
    mydata obj;
    int a,b;

    cin>>a>>b;
    obj.setData(a,b);

    cout<< obj.getData()<<endl;

    return 0;
}
