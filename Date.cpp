// Datum   : 11-03-2021
// Naam    : Cor Politiek
// Versie    : 0.4
// Omschr : Datum.cpp
#include "Date.hpp"
#include <iostream>
using namespace std;
//constructors
Date::Date(int dy, int mn, int yr) { // Constructor with parameters
	cout << "Parameter constructor called" << endl;
	setMonth(mn);
    setDay(dy);
    setYear(yr);
}
Date::Date() {
    cout << "Default constructor called" << endl;
    month = day = year = 1; // Initialize data members
}
//destructor
Date::~Date() {
    cout << "Destructor called" << endl;
}
//get and set functionality
int Date::getMonth() const {
    return month;
}
void Date::setMonth(int mn) {
	month = max(1, mn);
    month = min(month, 12);
}
int Date::getDay() const{
    return day;
}
void Date::setDay(int dy) {
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	day = max(1, dy);
    day = min(day, length[month]);
}
int Date::getYear() const{
    return year;
}
void Date::setYear(int yr) {
	year = max(1900, yr);
    year = min(year, 2100);
}
//display fuction
void Date::display() const{
	static const char* name[] = {
    "zero", "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October",
    "November", "December"
	};
	cout << day << " " << name[month] << " " << year << endl;
}
//min/max function
inline int max(int a, int b) { 
    if (a > b) return a;
    return b;
}
inline int min(int a, int b) {
    if (a < b) return a;
    return b;
}
