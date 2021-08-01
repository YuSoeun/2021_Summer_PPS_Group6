#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int n;
    
    // 점수 입력
    cin >> n;

    // deque에 원소 추가
    for (int i = 0; i < n; i++) {
        dq.push_back(i+1);
    }

    // 반복
    while (dq.size() > 1) {
        dq.pop_front();
        dq.push_back(dq.pop_front());
        dq.pop_front();
    }

    // 출력
    cout << dq.front() << "\n";

    return 0;
}