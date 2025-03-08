#include "functions.h"
using namespace std;

const double PI = 3.14156;

void Func::SphereVolume() {
    double sphereRadius;
    double sphereVolume;
    double point1X, point1Y;
    double point2X, point2Y;
    double distance;

    string str;

    cout << "Enter the radius of the sphere: ";
    cin >> sphereRadius;
    cout << endl;

    sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3);
    cout << "The volume of the sphere is: " << sphereVolume << endl;

    cout << "Enter the coordinates of two points in the X-Y plane: ";
    cin >> point1X >> point1Y >> point2X >> point2Y;
    cout << endl;

    distance = sqrt(pow(point2X - point1X, 2) + pow(point2Y - point1Y, 2));
    cout << "The distance between two points is : " << distance << endl;

    str = "Programming with C++";
    cout << "The number of characters, including blanks are : " << str.length()
         << endl;
}

void Func::ChangeCents() {
    const int HALF_DOLLAR = 50;
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;

    int change;

    cout << "Enter change in cents: ";
    cin >> change;
    cout << endl;
    cout << "The change you entered is " << change << endl;
    cout << "The number of half-dollars to be returned is : "
         << change / HALF_DOLLAR << endl;
    change = change % HALF_DOLLAR;
    cout << "The number of quarters to be returned is : " << change / QUARTER
         << endl;
    change = change % QUARTER;
    cout << "The number of dimes to be returned is : " << change / DIME << endl;
    change = change % DIME;
    cout << "The number of nickets to be returned is : " << change / NICKEL
         << endl;
    change = change % NICKEL;
    cout << "The number of pennies to be returned is : " << change << endl;
}

void Func::StaticCast() {
    cout << "static_cast<int>(7.9) = " << static_cast<int>(7.9) << endl;
    cout << "static_cast<int>(3.3) = " << static_cast<int>(3.3) << endl;
    cout << "static_cast<double>(25) = " << static_cast<double>(25) << endl;
    cout << "static_cast<double>(5 + 3) = " << static_cast<double>(5 + 3)
         << endl;
    cout << "static_cast<double>(15) / 2 = " << static_cast<double>(15) / 2
         << endl;
    cout << "static_cast<double>(15 / 2) = " << static_cast<double>(15 / 2)
         << endl;
}

void Func::Input() {
    string firstName;
    string lastName;
    int age;
    double weight;

    cout << "Enter first name, last name, age, "
         << "and weight, separated by spaces." << endl;

    cin >> firstName >> lastName;
    cin >> age >> weight;

    cout << "Name: " << firstName << " " << lastName << endl;

    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
}
