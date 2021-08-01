#include <string>
#include <iostream>

using namespace std;

int score;
int frame[11], is_strike[11], is_spare[11];

int totalsum(int frameNum) {
	int sum = 0;
	for (int i = 1; i <= frameNum; i++) {
		sum += frame[i];
	}
	return sum;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s; cin >> s;
	int idx = 0; 
	char ch;
	for (int i = 1; i <= 10; i++) {
		ch = s[idx++];

		int frameScore = 0;
		if (ch == '-') score = 0; // score 변환
		else if (ch >= '1' && ch <= '9') score = (ch - '0');
		else if (ch == 'S') score = 10;
    
		frameScore += score, frame[i] += score;
		if (i - 2 >= 1 && is_strike[i - 2] > 0) {
			is_strike[i - 2] -= 1;
			frame[i - 2] += score;
		}
		if (i - 1 >= 1 && is_strike[i - 1] > 0) {
			is_strike[i - 1] -= 1;
			frame[i - 1] += score;
		}
		if (i - 1 >= 1 && is_spare[i - 1] > 0) {
			is_spare[i - 1] -= 1;
			frame[i - 1] += score;
		}

		if (score == 10) {
			is_strike[i] += 2;
			continue;
		}

		ch = s[idx++];
		if (ch == '-') score = 0;
		else if (ch >= '1' && ch <= '9') score = (ch - '0');
		else if (ch == 'P') score = 10 - frameScore;

		frameScore += score; frame[i] += score;
		if (i - 1 >= 1 && is_strike[i - 1] > 0) {
			is_strike[i - 1] -= 1;
			frame[i - 1] += score;
		}
		if (frameScore == 10) {
			is_spare[i] += 1;
			continue;
		}
	}

	if (is_strike[10]) {
		ch = s[idx++]; 
		int frameScore = 0;
		if (ch == '-') score = 0;
		else if (ch >= '1' && ch <= '9') score = (ch - '0');
		else if (ch == 'S') score = 10;
		
		frameScore += score;
		frame[10] += score;

		if (is_strike[9]) {
			frame[9] += score;
			is_strike[9] -= 1;
		}

		ch = s[idx++];
		if (ch == '-') score = 0;
		else if (ch >= '1' && ch <= '9') score = (ch - '0');
		else if (ch == 'P') score = 10 - frameScore;
		else if (ch == 'S') score = 10;

		frame[10] += score;
	}
	else if (is_spare[10]) {
		ch = s[idx++];
		int frameScore = 0;
		if (ch == '-') score = 0;
		else if (ch >= '1' && ch <= '9') score = (ch - '0');
		else if (ch == 'S') score = 10;
		frame[10] += score;
	}

	cout << totalsum(10) << '\n';
	return 0;
}