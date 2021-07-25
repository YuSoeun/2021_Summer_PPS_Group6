#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, num;
    int count = 0;
    int min = 0;
    int sum = 0;
    vector <int> a, b;

    cin >> n;
    a.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b = a;
    sort(b.begin(), b.end());

    // for (int ch : b)   cout << ch << ' ';
    // cout << endl;

    // a[i]랑 b[i] 비교해서 다른거 더하고, min 찾기
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (min == 0) {
                min = b[i];
            }
            sum += a[i];
            count++;
        }
    }

    if (count % 2) {
        sum += min;
    }
    
    cout << sum << endl;

    return 0;
}