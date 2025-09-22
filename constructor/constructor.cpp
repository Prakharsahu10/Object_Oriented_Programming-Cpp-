#include <iostream>
using namespace std;

class A
{
public:
    // Constructor of the class without
    // any parameters
    A()
    {
        cout << "Constructor called" << endl;
    }
};

int main()
{
    A obj1;
    return 0;
}
