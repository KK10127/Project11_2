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
 *      representation in the month-day forma.
 *
 */
#include <iostream>
using namespace std;
int main() {

    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "Setpember",
                       "October", "November", "December"};
    int daysInMonth[] = {31, 28,31,30,31,30,31,31,30,31,30,31};



    return 0;
}