#include<iostream>

using namespace std;

class Mydata
{
    public:
        int var1;
        float var2;
        char var3;

};

int main()
{
    Mydata Obj;

    cout<<"Enter Value Of var1, var2 & var3"<<endl;

    cin >>Obj.var1 >> Obj.var2 >> Obj.var3;


    cout<<Obj.var1<<" "<<Obj.var2<<" "<<Obj.var3<<endl;

    return 0;
}
