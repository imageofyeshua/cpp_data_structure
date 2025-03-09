#include "inputoutput.h"
using namespace std;

const double PI = 3.14159265;

void IO::TicketSales() {}

void IO::SetW() {
    int miles = 245;
    int speed = 55;
    double hours = 35.45;
    double error = 3.7654;
    string name = "Jessica";
    double gpa = 3.75;
    int scholarship = 7850;

    cout << "123456789012345678901234567890" << endl;
    cout << fixed << showpoint << setprecision(2);

    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship
         << endl;

    cout << setfill('*');
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship
         << endl;

    cout << setw(10) << name << setfill('#') << setw(7) << gpa << setw(8)
         << scholarship << endl;

    cout << setw(10) << setfill('@') << name << setw(7) << setfill('#') << gpa
         << setw(8) << setfill('^') << scholarship << endl;

    cout << right;
    cout << setfill(' ');
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship
         << endl;

    cout << left;
    cout << setfill(' ');
    cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship
         << endl;
    /*
    cout << setw(5) << miles << endl;
    cout << setprecision(2);
    cout << setw(5) << miles << setw(5) << speed << setw(6) << hours << setw(7)
         << error << endl
         << endl;
    cout << setw(5) << speed << setw(5) << miles << setw(4) << hours << setw(7)
         << error << endl
         << endl;
    */
}

void IO::Manipulator() {
    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.010000;
    double radius = 12.67;
    double height = 12.00;
    int x = 7'087'625;
    long long y = 28'087'523'872'918;
    double z = 47'034'612'982.68'741;

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

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << 1'2'3'4'5'6'7'8'9'0 << endl;
    cout << "8'404 * 3'600 = " << 8'403 * 3'600 << endl;
}

void IO::PeekPutback() {
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

void IO::SphereVolume() {
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

void IO::ChangeCents() {
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

void IO::StaticCast() {
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

void IO::Input() {
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
