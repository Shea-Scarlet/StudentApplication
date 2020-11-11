
#ifndef StudentApplication_H
#define StudentApplication_H

#include<string>
#include <iostream>

class StudentApplication
{
private:
	int ID;
	std::string name;
	std::string college;
	double gpa;
	int sat;
	int transferableCredits;

public:
	//constructors
	StudentApplication();
	StudentApplication(int, std::string, std::string, double, int, int);

	//setters
	void setID(int x) { ID = x; }
	void setName(std::string x) { name = x; }
	void setCollege(std::string x) { college = x; }
	void setGPA(double x) { gpa = x; }
	void setSat(int x) { sat = x; }
	void setTransferableCredits(int x) { transferableCredits = x; }

	//getters
	int getID(int x) { return ID; }
	std::string getName(std::string x) { return name; }
	std::string getCollege(std::string x) { return college; }
	double getGPA(double x) { return gpa; }
	int getSat(int x) { return sat; }
	int getTransferableCredits(int x) { return transferableCredits;  }

	//other functions (will probably need some sort of display functions...)
	void hDdisplay()const;
	void vDisplay()const;

	// overloaded operators
	friend std::ostream & operator << (std::ostream &out, const StudentApplication &s);
	friend std::istream & operator >> (std::ostream &in, const StudentApplication &s);
	bool operator < (const StudentApplication &b);
	bool operator > (const StudentApplication &b);
	bool operator == (const StudentApplication &b);
};
#endif
