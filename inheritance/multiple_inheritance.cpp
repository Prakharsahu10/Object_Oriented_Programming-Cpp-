// multiple_inheritance.cpp
// Minimal example showing multiple inheritance and constructor order

#include <bits/stdc++.h>
using namespace std;

// Base: vehicles that run on land
class LandVehicle
{
public:
    LandVehicle() {
         cout << "This is a LandVehicle" << endl; 
        }
};

// Base: vehicles that operate on water
class WaterVehicle
{
public:
    WaterVehicle() {
         cout << "This is a WaterVehicle" << endl; 
        }
};

// Derived from both WaterVehicle and LandVehicle
// Constructor order: WaterVehicle, LandVehicle, then AmphibiousVehicle
class AmphibiousVehicle : public WaterVehicle, public LandVehicle
{
public:
    AmphibiousVehicle() {
         cout << "This is an AmphibiousVehicle" << endl; 
        }
};

int main()
{
    // Instantiating shows constructor call order
    AmphibiousVehicle obj;
    return 0;
}