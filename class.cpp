#include <iostream>
using namespace std;

// Define a class named Car
class Car
{
public:
    // Data members (attributes)
    string brand;
    int year;

    // Member function (method)
    void displayInfo()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    // Create an object of Car class
    Car myCar;

    // Set values for the object's attributes
    myCar.brand = "Toyota";
    myCar.year = 2020;

    // Call the member function using the object
    myCar.displayInfo();

    return 0;
}