
#include<iostream>

using namespace std;

class Mydata
{
    public:

        void mydetails()
        {
            cout<<"Rushi Deshmukh"<<endl;
            cout<<"A/P Tambave \n"<<endl;
        }
        void collegedetails()
        {
            cout<<"YIMIM Karad"<<endl;
            cout<<"MCA"<<endl;
        }
};

int main()
{
    Mydata Obj;

    Obj.mydetails();
    Obj.collegedetails();


    return 0;
}
