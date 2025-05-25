#include "main.h"



class Plane {
public:

	string brand;
	string model;
	double width;
	double length;
	double height;
	int speed;
	int seats;
	bool running;


	string toString() {
		string s = "";
		s += brand + " " + model;
		s += " (width = " + to_string(width);
		s += ", height = " + to_string(height);
		s += ", lendth = " + to_string(length);
		s += ", speed = " + to_string(speed);
		s += ", seats = " + to_string(seats);
		s += ", ";
		s += (running ? "Working" : "Repairing");
		return s;
	}
};