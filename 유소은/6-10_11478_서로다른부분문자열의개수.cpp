#include<iostream>
#include <unordered_set>
#include <string>

using namespace std;

string s;
int sizes;
unordered_set<string> us;

void fun()
{
	string sum = "";
	for (int i = 0; i < sizes; i++) {
		sum = "";
		for (int j = i; j < sizes; j++) {
			sum += s[j];
			us.insert(sum);
		}
	}
}

int main()
{
	cin >> s;
	sizes = s.length();

	fun();
	cout << us.size();

	return 0;
}