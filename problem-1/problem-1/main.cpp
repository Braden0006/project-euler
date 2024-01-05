#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 20000;

	int total = 0;

	// Loops from 1-1000 and adds all multiples of three and five to "total" variable
	for (int i = 1; i < num; ++i) {
		if (((i % 5) == 0) || ((i % 3) ==0)) {
			cout << i << endl;
			total += i;
		}
	}

	cout << endl;
	cout << total << endl;

}