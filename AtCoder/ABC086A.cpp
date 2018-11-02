#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b; // not cin >> a, b

	string std;
	if (a * b % 2 == 0) { // In c++, 0 means False and 1 means True
		std = "Even";
	} else {
		std = "Odd";
	}
	cout << "Answer:" << std << endl;
}