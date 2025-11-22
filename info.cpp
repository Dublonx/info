#include<iostream>
using namespace std;

int main() {

    // cpp variables
    string name, city, course;
    int age;
    
    // print
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your course: ";
    cin >> course;
    
    // output
    cout << "\nHi, " << name << "!\n";
    cout << "You're " << age << " years old!\n";
    cout << "Your City is " << city << "!\n";
    cout << "And you're an " << course << " Student!";

    return 0;

}