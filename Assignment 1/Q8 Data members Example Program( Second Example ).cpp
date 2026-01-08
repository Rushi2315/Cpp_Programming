#include<iostream>

using namespace std;

class Mydata
{
public:

    int RollNo;
    float Mark;
    char Grade;
};

int main()
{
    Mydata Obj;

    cout<<" Enter Values Of RollNo, Mark, Grade"<<endl;

    cin>>Obj.RollNo>>Obj.Mark>>Obj.Grade;

    cout<<Obj.RollNo<<" "<<Obj.Mark<<" "<<Obj.Grade<<endl;

    return 0;
}
