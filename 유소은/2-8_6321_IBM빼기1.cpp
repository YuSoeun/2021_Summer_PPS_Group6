#include <iostream>
using namespace std;
#include <string>

int main()
{
    int n;
    string s;
    string result;

    cin >> n;

    for (int i = 0; i < n; i++)  {
        cin >> s;
        
        for (char& ch : s) {
            if (ch == 'Z') {
                ch = 'A';
            } else {
                ch += 1;
            }
            result.push_back(ch);
        }

        if (i > 0) {
            cout << endl;
        }
        
        cout << "String #" << i+1 << endl;
        cout << result << endl;

        result.clear();
    }

    return 0;
}