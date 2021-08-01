#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    char alpha;
    int count = 0;
    vector <int> a, b;

    cin >> n;
    a.resize(n);
    b.resize(n);    // 반전된 array

    // ABA인 경우에만 하나씩 바꾸는게 이득
    for (int i = 0; i < n; i++) {
        cin >> alpha;
        if (alpha == 'A') {
            a[i] = 0;
            b[i] = 1;
        } else {
            a[i] = 1;
            b[i] = 0;
        }
    }

    // 끝이 0이면 무시, 1이면 1.여러개 (그 전껀 반전 + count up) 2.하나 (just count++)
    while (a.size() > 0) {
        if (a.back() == 0) {
            a.pop_back();
            b.pop_back();
        } else {
            a.pop_back();
            b.pop_back();
            count++;

            if (a.back() == 0)    continue;
            while(a.size() > 0 && a.back() == 1) {
                a.pop_back();
                b.pop_back();
            }
            
            a.swap(b);
        }
    }
    
    cout << count << endl;

    return 0;
}