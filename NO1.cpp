#include <iostream>
#include <string>
using namespace std;

class Date{
	int day;
	int month;
	int year;
	
	string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	public :
		Date (int day, int month, int year);
		void invalidData ();
		void printFirstForm();
		void printSecondForm();
		void printThirdForm();

};

Date :: Date (int day, int month, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}

void Date :: invalidData (){
	if (day < 1 || day > 31 || month < 1 || month > 12 ){
		string exceptionString = "Eror.";
		throw exceptionString;
		
	}
}

void Date :: printFirstForm(){
	cout << month << "/" << day << "/" << year << endl;
	try {
		invalidData ();
	}
	catch (string exceptionString){
		cout << exceptionString << endl;
		exit (0);
	}
}

void Date :: printSecondForm(){
	cout << monthName[month-1] << " " << day << ", " << year << endl;
}

void Date :: printThirdForm(){
	cout << day << " " << monthName[month-1] << " " << year << endl;
}

int main (){
	int inputDay, inputMonth, inputYear;
	
	cout << "Please input day : ";
	cin >> inputDay;
	cout << endl;
	
	cout << "Please input Month : ";
	cin >> inputMonth;
	cout << endl;
	
	cout << "Please input year : ";
	cin >> inputYear;
	cout << endl;

	
	Date newDate = Date(inputDay, inputMonth, inputYear);
	newDate.printFirstForm();
	newDate.printSecondForm();
	newDate.printThirdForm();
	return 0;
}
