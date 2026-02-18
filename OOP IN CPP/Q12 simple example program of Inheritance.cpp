#include<iostream>

using namespace std;

class mydata
{
    public :
            int var1;
            int var2;

    public : void myfun()
    {
        cout<<"Hi";
    }
    };

    class thisdata : public mydata
    {
        public : void newfun()
        {
            cout <<"Hello"<< endl;

        }
    };

    int main()
    {
        thisdata D;
        D.var1 = 50;
        D.var2 = 25;

        cout << D.var1 <<D.var2 << endl;
        D.myfun();
        D.newfun();

        return 0;
    }

