/*
    문제
    알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

    입력
    첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

    출력
    첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int alpha[26] = { 0 };
    string s;
    int max = 0;
    int count = 0;
    char result;

    cin >> s;
    // 대문자로 변환
    transform(s.begin(), s.end(),s.begin(), ::toupper);

    // s에 들어있는 각 알파벳 수 세기
    for (int i = 0; i < s.size(); i++) {
        alpha[s[i] - 'A']++;
    }

    // 가장 많이 든 숫자 찾기
    for (int i = 0; i < 26; i++) {
        // cout << alpha[i] << " ";
        if (alpha[i] > max) {
            max = alpha[i];
            count = 1;
            result = 'A' + i;
        } else if (alpha[i] == max) {
            count++;
            // cout << result << char('A' + i) << count << endl;
        }
    }

    if (count != 1) {
        cout << '?' << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}