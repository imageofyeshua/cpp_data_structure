#include "functions.h"
using namespace std;

const double PI = 3.14159265;

void Func::Manipulator() {
    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.010000;
    double radius = 12.67;
    double height = 12.00;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl
         << endl;

    cout << scientific;
    cout << "Scientific notation: " << endl;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl
         << endl;

    cout << fixed << showpoint;
    cout << "Fixed decimal notation: " << endl;

    cout << "hours = " << hours << ", rate = " << rate
         << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl
         << endl;
    cout << setprecision(2) << "setprecision(2) " << endl;
    cout << "radius = " << radius << endl;
    cout << "height = " << height << endl;
    cout << "volume = " << PI * radius * height << endl;
    cout << "PI = " << PI << endl << endl;

    cout << setprecision(4) << "setprecision(4) " << endl;
    cout << "radius = " << radius << endl;
    cout << "height = " << height << endl;
    cout << "volume = " << PI * radius * height << endl;
    cout << "PI = " << PI << endl << endl;

    cout << setprecision(3) << radius << ", " << setprecision(2) << height
         << ", " << setprecision(5) << PI << endl;
}

void Func::PeekPutback() {
    char ch;

    cout << "Enter a string: ";
    cin.get(ch);
    cout << endl;

    cout << "After first cin.get(ch); "
         << "ch = " << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "After putback and then "
         << "cin.get(ch); ch = " << ch << endl;

    ch = cin.peek();
    cout << "After cin.peek(); ch = " << ch << endl;

    cin.get(ch);
    cout << "After cin.get(ch); "
         << "ch = " << ch << endl;
}

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
