// C++ uses streams to handle input and output.
// Input stream: data moves from a source (like keyboard) to memory.
// Output stream: data moves from memory to a destination (like screen).
// The <iostream> header file contains the cin and cout objects.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0
}

