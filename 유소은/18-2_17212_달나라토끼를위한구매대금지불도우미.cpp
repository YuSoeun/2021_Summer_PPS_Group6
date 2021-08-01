#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // 이거 DP인가? 그 돈 최소로 내기 그거 심화지?
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int n, result;
    int seven, five, two, one;

    cin >> n;

    // 5원과 2원만 찾고 남는 애는 1원, 둘 다 해당되는 애는 7원 (five + abs(five - two) + one)
    seven = n / 7;
    five = n / 5;
    two = n / 2;
    one = n % 7 % 5 % 2;

    cout << five << ' ' << two << ' ' << one << endl;

    result = 2 * abs(five - two) + one;

    cout << result << endl;

    return 0;
}