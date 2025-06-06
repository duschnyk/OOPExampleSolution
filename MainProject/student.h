#include "main.h"

// entity-class
class Student {
public:
	string firstname;
	string surname;
	int age;
	int _class;
	char gender;
	bool alive;
	double mark;

	// default-constructor (êîíñòðóêòîð ïî óìîë÷àíè)
	Student() {
		//cout << "default-constructor" << endl;
		firstname = "no name";
		surname = "no surname";
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	// constructor with arguments (êîíñòðóêòîðû ñ ïàðàìåòðàìè)
	Student(string name, string sname) {
		//cout << "constructor with arguments" << endl;
		firstname = name;
		surname = sname;
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	Student(string name, string sname, int a) {
		//cout << "constructor with arguments" << endl;
		firstname = name;
		surname = sname;
		age = a;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	// canonical constructor (êàíîíè÷åñêèé êîíñòðóêòîð)
	Student(string name, string sname, int a, int cl, char g, bool al, double m) {
		//cout << "canonical constructor" << endl;
		firstname = name;
		surname = sname;
		age = a;
		_class = cl;
		gender = g;
		alive = al;
		mark = m;
	}

	// copy-constructor (êîíñòðóêòîð-êîïèðîâàíèÿ)
	Student(const Student& student) {
		//cout << "canonical constructor" << endl;
		firstname = student.firstname;
		surname = student.surname;
		age = student.age;
		_class = student._class;
		gender = student.gender;
		alive = student.alive;
		mark = student.mark;
	}

	~Student() {
		cout << "destructor" << endl;
	}

	string toString() {
		string s = firstname;
		s += " " + surname;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(_class);
		s += ", gender = " + to_string(gender);
		s += ", is alive - ";
		s += (alive ? "yes" : "no");
		s += ", average mark = " + to_string(mark);
		return s;
	}
};