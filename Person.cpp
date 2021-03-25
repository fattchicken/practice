// Datum   : 23-03-2021
// Naam    : Cor Politiek
// Versie    : 1.18.4
// Omschr : Person.cpp

#include <fstream>
#include <iostream>
#include <iomanip> 
#include "Person.hpp"

Person::Person(string a, string b, int d, int m, int y):birthday(m,d,y){
	cout << "constructor called" << endl;
	Name = a;
	Address = b;
} 

void Person::Display(){
	cout << "Name = " << Name << endl << "Addres = " <<  Address << endl;
	cout << "Birthday = ";
	birthday.display();
}

const Date& Person::getBirthday() {
	
    return birthday;
}





