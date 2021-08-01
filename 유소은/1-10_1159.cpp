#include <iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    string name;
    int alpha[26] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        alpha[name[0] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] >= 5) {
            cout << char('a' + i);
            count++;
        }
    }
    if (count == 0) {
        cout << "PREDAJA";
    }
    cout << '\n';

    return 0;
}