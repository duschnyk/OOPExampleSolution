#include "Stack.h"

int main() {
	Stack stack;

	cout << "input: ";
	int number;

	do {
		cin >> number;
		if (number != 0) {
			stack.push(number);
		}
	} while (number != 0);

	stack.pop();
	stack.pop();
	
	cout << "head: " << stack.head() << endl;
	cout << "queue elements: " << stack.toString() << endl;

	stack.clear();
	cout << "queue elements: " << stack.toString() << endl;


	return 0;
}