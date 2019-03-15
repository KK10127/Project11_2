/*
 * CS 151
 * Group Project
 * Programmers:
 *      Jay Montoya
 *      Nathanael Scudder
 *      Monika Shin
 *      Christa Hatch
 *
 * PROBLEM STATEMENT:
 *      Assuming that a year has 365 days, write a class named DayOfYear that takes an integer
 *      representing a day of the year and translates it to a string consisting of the month
 *      followed by day of month. For example,
 *
 *      Day 2 would be January 2.
 *      Day 32 would be February 1.
 *      Day 365 would be Decembr 31.
 *
 *      The constructor for the class should take as parameter an integer representing the
 *      day of the year, and the class should have a member function print() that prints the
 *      day in the month-day format. The class should have an integer member variable to represent
 *      the day and should have static member variables of type string to assist in the translation
 *      from the integer format to the month-day format.
 *
 *      Test your clas by inputting various integers representing days and printing out their
 *      representation in the month-day format.
 *
 *
 */
#include <iostream>
using namespace std;

const int MONTHS_IN_YEAR = 12;

class DayOfYear {

private:
    // private members
    static int daysInMonth[MONTHS_IN_YEAR];
    static string monthNames[MONTHS_IN_YEAR];
    int numDays;
public:
    // constructors
    DayOfYear();
    DayOfYear(int numDays);

    // other functions
    int getDayAmount() const;
    void setNumDays(int dayAmount);
    void print() const;



};

// initializing static members
string DayOfYear::monthNames[]  = {"January", "February", "March", "April", "May", "June", "July", "August", "Setpember",
                "October", "November", "December"};
int DayOfYear::daysInMonth[] = {31, 28,31,30,31,30,31,31,30,31,30,31};

int main() {

    // greeting
    cout << "Welcome to the demo of project 11.2!\n\n" << endl;

    // create object
    DayOfYear object = DayOfYear();

    // user input
    int numDays;
    do {
        cout << "Enter number of days: ";
        cin >> numDays;

        if (numDays > 0 && numDays <= 365) {
            object.setNumDays(numDays);
            object.print();
        } else {
            if (numDays == -1) break;
            cout << "\tError: incorrect number. 1-365 only\n\n";
        }
    } while (numDays -= -1);

    cout << "This concludes the demo for this program!\n\n";
    return 0;
}

// default construction
DayOfYear::DayOfYear() { numDays = 0; }
// full constructor
DayOfYear::DayOfYear(int numDays) {this->numDays = numDays; }
// modifier
void DayOfYear::setNumDays(int numDays) { this->numDays = numDays; }

// project specific function
void DayOfYear::print() const {

    int daysLeft = numDays;

    for (int i = 0; i < 12; i++) {
        if (daysLeft > daysInMonth[i]) {
            daysLeft -= daysInMonth[i];
        } else if (daysLeft < daysInMonth[i]) {
            cout << monthNames[i] << " " << daysLeft << "\n\n";
            return;
        }
    }
}
