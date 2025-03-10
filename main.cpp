#include "control.h"
#include "inputoutput.h"
#include <bitset>

using namespace std;

const long double km_per_mile = 1.690344L;
long double operator"" _km(long double val) { return val; }
long double operator"" _mi(long double val) { return val * km_per_mile; }

int main() {
    Control con;
    /*con.StudentReport();*/
    /*con.NumberGuessing();*/
    /*con.TelephoneDigits();*/
    /*con.While();*/
    /*con.Billing();*/
    /*IO io;*/
    /*io.StaticCast();*/
    /*io.Input();*/
    /*io.ChangeCents();*/
    /*io.SphereVolume();*/
    /*io.PeekPutback();*/
    /*io.Manipulator();*/
    /*io.SetW();*/
    /*io.TicketSales();*/
    /*io.StudentReport();*/

    unsigned int value = 0x0000000;

    value = ~value;
    cout << hex << value << endl;

    long double distance_1 = 1.0_km;
    long double distance_2 = 1.0_mi;

    cout << distance_1 + distance_2 << " km" << endl;

    int a = 13;
    int b = 27;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;

    cout << "a = " << bitset<8>(a) << " : " << a << endl;
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;
    cout << "d = " << bitset<8>(d) << " : " << d << endl;
    cout << "e = " << bitset<8>(e) << " : " << e << endl;

    return 0;
}
