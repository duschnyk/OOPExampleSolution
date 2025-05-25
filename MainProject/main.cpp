#include "main.h"
#include "plane.h"

void print(Plane plane);

int main() {
	//1
	Plane plane;

	cout << "Before: ";
	cout << plane.toString() << endl;

	plane.brand = "Boeing";
	plane.model = "474-400";
	plane.height = 15;
	plane.width = 120;
	plane.length = 100;
	plane.seats = 700;
	plane.speed = 1000;
	plane.running = true;

	cout << "After: ";
	plane.toString();

	//2
	Plane* ptrPlane = nullptr;

	ptrPlane = new Plane;

	ptrPlane->brand = "Boeing";
	ptrPlane->model = "494-400";
	ptrPlane->height = 16;
	ptrPlane->width = 121;
	ptrPlane->length = 120;
	ptrPlane->seats = 709;
	ptrPlane->speed = 1030;
	ptrPlane->running = true;

	cout << ptrPlane->toString() << endl;

	return 0;
}