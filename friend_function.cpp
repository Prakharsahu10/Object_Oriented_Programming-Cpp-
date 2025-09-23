
#include <iostream>
using namespace std;

// Class with private and protected members
class Geeks
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Geeks()
    {
        private_variable = 10;
        protected_variable = 99;
    }
    // Declare GFG as a friend class
    friend class GFG;
};

// Friend class can access private/protected members of Geeks
class GFG
{
public:
    void display(Geeks &t)
    {
        // Accessing private and protected members directly
        cout << "The value of Private Variable = " << t.private_variable << endl;
        cout << "The value of Protected Variable = " << t.protected_variable;
    }
};

int main()
{
    Geeks g;
    GFG fri;
    fri.display(g); // Friend class accessing private data
    return 0;
}