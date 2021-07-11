/*
    문제
    다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

    1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

    연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

    입력
    첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.

    출력
    첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.
*/

#include <iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int arr[8];
#include <iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int arr[8];

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    // 시간 효율 생각해서 최대한 for문 덜 쓰는 방향으로
    if (arr[7] - arr[0] == 7) {
        for (int i = 0; i < 3; i++) {
            if (arr[6-i] - arr[1+i] != 5 - i*2) {
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "ascending\n";
    } else if (arr[0] - arr[7] == 7) {
        for (int i = 0; i < 3; i++) {
            if (arr[1+i] - arr[6-i] != 5 - i*2) {
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "descending\n";
    } else {
        cout << "mixed\n";
    }

    return 0;
}
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    // 시간 효율 생각해서 최대한 for문 덜 쓰는 방향으로
    if (arr[7] - arr[0] == 7) {
        for (int i = 0; i < 3; i++) {
            if (arr[6-i] - arr[1+i] != 5 - i*2) {
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "ascending\n";
    } else if (arr[0] - arr[7] == 7) {
        for (int i = 0; i < 3; i++) {
            if (arr[1+i] - arr[6-i] != 5 - i*2) {
                cout << "mixed\n";
                return 0;
            }
        }
        cout << "descending\n";
    } else {
        cout << "mixed\n";
    }

    return 0;
}