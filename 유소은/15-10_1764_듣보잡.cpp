#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    int count;
    vector <string> eme;
    vector <string> result;
    string temp;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        eme.push_back(temp);
    }
    eme.sort();

    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (std::search(eme.begin(), eme.end(), temp) > 0) {
            result.push_back(temp);
            count++;
        }
    }
    result.sort();

    cout << count << '\n';
    for (int i = 0; i < count; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}