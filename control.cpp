#include "control.h"

using namespace std;

void Control::NumberGuessing() {
    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;

    while (!isGuessed) {
        cout << "Enter an integer greater"
             << " than or equal to 0 and "
             << "less than 100: ";
        cin >> guess;
        cout << endl;

        if (guess == num) {
            cout << "You guessed the correct number. " << endl;
            isGuessed = true;
        } else if (guess < num) {
            cout << "Your guess is lower than the number. \n Guess again!"
                 << endl;
        } else {
            cout << "Your guess is higher than the number. \n Guess again!"
                 << endl;
        }
    }
}

void Control::TelephoneDigits() {
    char letter;
    int digit, num;

    cout << "Program to convert uppercase letters to "
         << "their corresponding telephone digits." << endl;

    cout << "To stop the program enter #." << endl;
    cout << "Enter an uppercase letter: ";
    cin >> letter;
    cout << endl;

    while (letter != '#') {
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";

        num = static_cast<int>(letter) - static_cast<int>('A');

        if (0 <= num && num < 26) {
            digit = (num / 3) + 2;

            if ((num / 3 == 6) || (num / 3 == 7) && (num % 3 == 0))
                digit = digit - 1;
            if (digit > 9)
                digit = 9;
            cout << digit << endl;
        } else {
            cout << "Invalid input." << endl;
        }
        cout << "\nEnter another uppercase "
             << "letter to find its corresponding telephone digit." << endl;

        cout << "Enter a letter: ";
        cin >> letter;
        cout << endl;
    }
}

void Control::While() {
    int calBurnedInADay;
    int calBurnedInAWeek;
    int day;

    day = 1;
    calBurnedInAWeek = 0;

    while (day <= 7) {
        cout << "Enter calories burned day " << day << ": ";
        cin >> calBurnedInADay;
        cout << endl;

        calBurnedInAWeek += calBurnedInADay;
        day += 1;
    }
    cout << "Average number of calories burned each day: "
         << calBurnedInAWeek / 7 << endl;
}

void Control::Billing() {
    // Residential Customers
    const double RES_BILL_PROC_FEES = 4.50;
    const double RES_BASIC_SERV_COST = 20.50;
    const double RES_COST_PREM_CHANNEL = 7.50;

    // Business Customers
    const double BUS_BILL_PROC_FEES = 15.00;
    const double BUS_BASIC_SERV_COST = 15.00;
    const double BUS_BASIC_CONN_COST = 5.00;
    const double BUS_COST_PREM_CHANNEL = 50.00;

    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    cout << fixed << showpoint << setprecision(2);

    cout << "This program computes a cable bill." << endl;

    cout << "Enter accont number (an integer): ";
    cin >> accountNumber;
    cout << endl;

    cout << "Enter customer type: R or r (Residential), "
         << "B or b (Business): ";
    cin >> customerType;
    cout << endl;

    switch (customerType) {
    case 'r':
    case 'R':
        cout << "Enter the number of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST +
                    numOfPremChannels * RES_COST_PREM_CHANNEL;

        cout << "Account number: " << accountNumber << endl;
        cout << "Amount due: $" << amountDue << endl;
        break;
    case 'b':
    case 'B':
        cout << "Enter the number of basic service connections: ";
        cin >> numOfBasicServConn;
        cout << endl;

        cout << "Enter the number of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        if (numOfBasicServConn <= 10) {
            amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST +
                        numOfPremChannels * BUS_COST_PREM_CHANNEL;
        } else {
            amountDue = BUS_BILL_PROC_FEES +
                        (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST +
                        numOfPremChannels * BUS_COST_PREM_CHANNEL;
        }

        cout << "Account number: " << accountNumber << endl;
        cout << "Amount due: $" << amountDue << endl;
        break;

    default:
        cout << "Invalid customer type." << endl;
    }
}
