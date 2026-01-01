#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    //variable Declaration
    int a;


    // get input value
    cout<<"Enter the Number:";
    cin>>a;


    //if condition check
    if(a>10)
    {
        //Block for condition success
        cout<<a<<"is Greater than 10";

    }
    else{
            //Block for condition fail
        cout<<a<<"is Less than 10";
    }
    //Wait for output screen
    getch();
    return 0;
}
