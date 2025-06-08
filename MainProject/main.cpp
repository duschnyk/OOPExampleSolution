#include "initializer.h"
#include "Manager.h"

int main() {
	int size;

	cout << "Input size: ";
	cin >> size;

	Student* students = new Student[size];

	Initializer initializer;

	initializer.init(students, size);

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;
	}

	Manager manager;

	Student bestStudent = manager.findBestStudent(students, size);
	Student worstStudent = manager.findWorstStudent(students, size);
	double average = manager.calculateAverageMark(students, size);

	cout << "Best student: " << bestStudent.toString() << endl;
	cout << "Best student: " << worstStudent.toString() << endl;
	cout << "Students average mark is - " << average << endl;

	delete[] students;

	return 0;
}