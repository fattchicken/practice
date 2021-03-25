// Datum   : 23-03-2021
// Naam    : Cor Politiek
// Versie    : 1.18.4
// Omschr : Opdracht 6

#include <fstream>
#include <iostream>
#include <iomanip> 
#include "Person.hpp"


using namespace std;



int main() {
	Person Person1("Cor Politiek","Jousterweg 187",5,21,1998);
	Person1.Display();
	const Date& d = Person1.getBirthday();
	cout << "Birthday = " << d.getDay() << "-" << d.getMonth() << "-" << d.getYear() << endl;
	return 0;	
}
