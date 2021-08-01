#include <iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int e, s, m; // (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
    int count = 1;

    cin >> e >> s >> m;

    while (e != 1 || s != 1 || m != 1) {
        e--;
        s--;
        m--;

        if (e < 1)  e += 15;
        if (s < 1)  s += 28;
        if (m < 1)  m += 19;

        count++;
    }

    cout << count << '\n';

    return 0;
}