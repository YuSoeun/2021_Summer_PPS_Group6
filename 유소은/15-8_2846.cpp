#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, num, sum, remain;
    vector <string> a;
    int flag = 0;
    int max = 0;

    cin >> n;

    cin >> num;
    a.pushback(num);

    for (int i = 1; i < n; i++) {
        cin >> num;
        if (a[i-1] > a[i]) {
            flag = 0;
        } else if (flag == 0) {
            a.push_back(num);
        } else {
            a[i-1] = a[i];
            i--;
            n--;
        }
    }

    for (int i = 0; i < n-1; i++) {
        remain = a[i+1] - a[i];
        sum = 0;
        if (remain > 0) {
            sum = remain;
        }
        if (max < sum) {
            max = sum;
        }
    }
    cout << max << endl;

    return 0;
}