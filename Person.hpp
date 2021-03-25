// Datum   : 11-03-2021
// Naam    : Cor Politiek
// Versie    : 0.4
// Omschr : Datum.hpp
#ifndef PERSON_H
#define PERSON_H
#include "Date.hpp"
using namespace std;

class Person {
	public:
	Person(string, string, int m, int d, int y); // constructor name, address , month, day , year
	void Display();
	const Date& getBirthday();
   private:
	string Name;
	string Address;
	const Date birthday;
};

#endif
