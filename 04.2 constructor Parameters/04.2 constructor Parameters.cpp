// 04.2 constructor Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

/*Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
The following class have brand, modeland year attributes, and a constructor with different parameters.Inside the constructor we set the 
attributes equal to the constructor parameters(brand = x, etc).When we call the constructor(by creating an object of the class), we pass 
parameters to the constructor, which will set the value of the corresponding attributes to the same :
*/

class Car {        // The class
public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // OR
    Car carObj3= Car("Toyota", "Cressida", 1987);



    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
    return 0;
}