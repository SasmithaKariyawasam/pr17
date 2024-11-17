#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a value: ";
    cin>>x;

    cout<<"Post increment"<<endl;

    cout<<"First use of x is: "<<x<<endl;

    x++;

    cout<<"Second use of x is: "<<x<<endl;

    cout<<"Pre increment"<<endl;

    cout<<"First use of x is: "<<x<<endl;

    ++x;

    cout<<"Second use of x is: "<<x;
    return 0;

}
