class Base
{
public:
    int n;
    void printN()
    {
        cout << n << endl;
    }
};

// Inheriting Base class publicly
class Derived : public Base
{
public:
    void func()
    {

        // Accessing Base class members
        n = 22;
    }
};