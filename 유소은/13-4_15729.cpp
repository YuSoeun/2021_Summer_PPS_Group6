#include <iostream>
#include <vector>
using namespace std;

vector <int> b(0);

void Swap(int i, int count, int& n)
{
    if (i < n && count < 3) {
        if (b[i] == 1) {
            b[i] = 0;
        } else {
            b[i] = 1;
        }
        Swap(i+1, count+1, n);
    }
    return;
}

int main()
{
    int n, num;
    int count = 0;
    vector <int> a;

    cin >> n;
    b.resize(n);

    // 버튼을 누르면 그 버튼 뿐만이 아닌 오른쪽 두 개의 버튼도 같이 눌린다. 
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            Swap(i, 0, n);
            count++;
        }
    }
    cout << count << endl;

    return 0;
}