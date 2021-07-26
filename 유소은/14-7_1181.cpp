#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Compare(string& a, string& b)
{
    if (a.length() != b.length()) {
        if (a.length() < b.length()) {
            return true;
        } else {
            return false;
        }
    }

    if (a < b) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n;
    string word;
    vector <string> words;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), Compare);

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            if (words[i-1] != words[i])
                cout << words[i] << endl;
        } else {
            cout << words[i] << endl;
        }
    }

    return 0;
}