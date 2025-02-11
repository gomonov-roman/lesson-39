#include <iostream>
using namespace std;
int main() {

		int number;
		cout << "Input   your number: ";
		cin >> number;
		for (int i = 2; i <= number; i += 2) {
			cout << i << " ";
		}


		return 0;
	}

	





























#include <iostream>
using namespace std;

bool check(long long number);

int main() {
	int number;
	cout << "Input   your number: ";
	cin >> number;
	for (int i = number / 10 * 10; i >= 0; i -= 10) {
		cout << i << " ";
	}


	return 0;
}









