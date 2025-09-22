#include <iostream>
#include <iostream>
#include <string>
using namespace std;

// Encapsulation example: Person hides sensitive data (socialID)
class Person
{
    // private data hidden from outside
    int socialID;
    string name;

public:
    // Constructor (initialization list)
    Person(string n, int id) : name(n), socialID(id) {}

    // Read-only accessor for name
    string getName() const { return name; }

    // Mutator for name
    void setName(string newName) { name = newName; }

    // Simple validation for socialID
    bool validateID() const { return (socialID >= 0 && socialID <= 1001); }
};

int main()
{
    // Create a Person with name and socialID
    Person p1("Geek", 503);

    // Check ID and print name
    if (!p1.validateID())
        cout << "Invalid SocialID\n";
    cout << "Name: " << p1.getName() << endl;

    return 0;
}