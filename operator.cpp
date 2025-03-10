#include "operator.h"

const long double km_per_mile = 1.690344L;
long double operator"" _km(long double val) { return val; }
long double operator"" _mi(long double val) { return val * km_per_mile; }

int Operator::BitShift() {
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
    cout << endl;

    int f = 12;
    int g = f >> 1;
    int h = f << 1;
    /*int i = a >> -1;*/
    /*int j = a << 32;*/

    cout << "f = " << bitset<8>(f) << " : " << f << endl;
    cout << "g = " << bitset<8>(g) << " : " << g << endl;
    cout << "h = " << bitset<8>(h) << " : " << h << endl;
    /*cout << "i = " << bitset<8>(i) << " : " << i << endl;*/
    /*cout << "j = " << bitset<8>(j) << " : " << j << endl;*/

    return 0;
}
