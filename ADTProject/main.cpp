#include "Queue.h"

int main() {
	Queue queue;

	cout << "input: ";
	int number;

	do {
		cin >> number;
		if (number != 0) {
			queue.enqueue(number);
		}
	} while (number != 0);

	queue.dequeue();
	queue.dequeue();

	cout << "head: " << queue.head() << endl;
	cout << "queue elements: " << queue.toString() << endl;

	queue.clear();
	cout << "queue elements: " << queue.toString() << endl;


	return 0;
}