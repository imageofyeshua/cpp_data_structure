#include "control.h"

using namespace std;

void Control::Billing() {
    // Residential Customers
    const double RES_BILL_PROC_FEES = 4.50;
    const double RES_BASIC_SERV_COST = 20.50;
    const double RES_COST_PREM_CHANNEL = 7.50;

    // Business Customers
    const double BUS_BILL_PROC_FEES = 15.00;
    const double BUS_BASIC_SERV_COST = 15.00;
    const double BUS_BASIC_CONN_CONT = 5.00;
    const double BUS_CONST_PREM_CHANNEL = 50.00;

    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    cout << fixed << showpoint << setprecision(2);

    cout << "This program computes a cable bill." << endl;
}
