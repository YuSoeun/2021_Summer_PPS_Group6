#include <iostream>
#include <string>

using namespace std;

int main() {
	string play = "";
	string ch1;
	for (int i = 0; i < 8; i++) {
		cin >> ch1;
		play.append(ch1);
	}
	if (play == "12345678") {
		cout << "ascending";
	}
	else if (play == "87654321") {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}