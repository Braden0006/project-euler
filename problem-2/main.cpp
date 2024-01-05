#include <iostream>
#include <string>

using namespace std;

int main() {

	// Initialized variables
	int num1 = 0;
	int num2 = 1;
	int num3 = 0;

	int total = 0;
	
	// Loops from 0 to four million
	for (int i = 0; i < 4000000; ++i) {

		// Calculates each number in the fibonacci sequence
		num3 = num2 + num1;

		num1 = num2;
		num2 = num3;

		// Sets i to the value in num3 to track the highest number
		i = num3;

		// Makes sure the values in the fibonacci sequence do not exceed four million, and isolates all even numbers
		if ((i < 4000000) && (i % 2 == 0)) {

			cout << num3 << endl;

			total += num3;
		}
	}

	cout << endl;
	cout << "Total of all even numbers: " << total << endl;

	return 0;
}