#include<iostream>
#include<conio.h>

using namespace std;

int main()
    {

    // Variable Declaration
    int a;

    // Get Input Value
    cout<<"Enter the Number :";
    cin>>a;

    int counter = 1;

    //while Loop Block
    while (counter <= a)
    {
        cout<<"Execute While "<<counter<<" time"<<endl;
        counter++;
    }

    // Wait For Output Screen

        getch();
        return 0;
    }
