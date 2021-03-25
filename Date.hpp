// Datum   : 11-03-2021
// Naam    : Cor Politiek
// Versie    : 0.4
// Omschr : Datum.hpp
#ifndef DATE_H
#define DATE_H

class Date {
   public:
   	Donothing();
	Date(); 						// constructor
	Date(int dy, int mn, int yr);	// constructor with parameters
	~Date();						// destructor
	int getMonth() const; 				// Get month
	void setMonth(int mn); 			// Set month
	int getDay() const;				 	// Get day
	void setDay(int dy); 			// Set day
	int getYear() const; 					// Get year
	void setYear(int yr); 			// Set year
	void display() const;					// display
   private:
	int month;
	int day;
	int year;
};
#endif
