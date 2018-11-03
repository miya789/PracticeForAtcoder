#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;

	int i=0, j=0;
	for(; i<3; i++) {
		if(s[i] == '1') j++; // Should use '', not "". "a" = 'a' + '\0'
	}
	cout << j << endl;
	return 0;
}