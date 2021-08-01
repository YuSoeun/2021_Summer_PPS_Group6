#include <iostream>
#include <cmath>
using namespace std;

// 피보나치 수인지 판별
int check(int n)
{
    // float p = 1.0 * 5*n*n + 4;
    // float p2 = 1.0 * 5*n*n - 4;
    double p = 1.0 * 5*n*n + 4;
    double p2 = 1.0 * 5*n*n - 4;
    int s = sqrt(p);
    int s2 = sqrt(p2);

    cout << "p: " << p << ", s: " << s << endl;
    cout << "p2: " << p2 << ", s2: " << s2 << endl;

    return (p == s || p2 == s2);
}

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int count;

    while (1) {
        count = 0;

        cin >> a >> b;
        if (a == 0 && b == 0)   break;
        check(a);

        // for (int i = a; i < b+1; i++) {
        //     bool b = check(i);
        //     if (b)    count++;
        //     // cout << "i: " << i << ", check: " << b << endl;
        // }

        // cout << count << '\n';
    }

    return 0;
}