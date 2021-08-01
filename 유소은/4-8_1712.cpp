#include <iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int a, b, c; // a = 고정 비용, b = 가변 비용, c = 노트북 가격
    // int n = 0; // 노트북 갯수

    cin >> a >> b >> c;

    // a + b*n < c*n 인 n
    if (c <= b) {
        cout << "-1" << '\n';
        return 0;
    }

    cout << a / (c-b) + 1 << '\n';

    return 0;
}