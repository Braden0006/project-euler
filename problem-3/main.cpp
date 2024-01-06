#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main() {

	int num = 13195;
	int total = 0;

	vector<int> multiples;
	vector<int> numbers;
	vector<int> primeNumbers;

	// Loops from 1 to the value stored in "num"
	for (int i = 1; i <= num; ++i) {

		// Finds all multiples of "num" and pushes them to "multiples" vector
		if (num % i == 0) {
			multiples.push_back(i);
		}
	}

	// Loops over all values in "multiples" vector
	for (const auto &value : multiples) {
		
		// Loops from 1 to the current value
		for (int j = 1; j <= value; ++j) {

			// Pushes the current value to "numbers" vector if it has any multiples
			if (value % j == 0) {
				numbers.push_back(value);
			}
		}

		// If there are only two numbers in "numbers", it is a prime factor
		// Pushes the second number to "primeNumbers" vector
		if (numbers.size() == 2) {
			primeNumbers.push_back(numbers.back());
			numbers.clear();
		}
		else {
			numbers.clear();
		}
	}

	// Outputs the largest prime factor
	cout << primeNumbers.back() << endl;

	return 0;
}