#include <iostream>
#include <string>
using namespace std;

//A constructor in C++ is a special method that is automatically called when an object of a class is created.
//To create a constructor, use the same name as the class, followed by parentheses() :

class MyClass {     // The class
public:           // Access specifier
    MyClass() {     // Constructor
        cout << "Hello World!";
    }
};

int main() {
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)
    return 0;
}