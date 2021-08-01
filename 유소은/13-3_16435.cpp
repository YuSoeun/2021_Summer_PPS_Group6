include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, h;
    vector <int> a;
    
    cin >> n >> l;
    
    for (int i = 0; i < n; i++) {
        cin >> h;
        a.push_back(h);
    }
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        if (a[i] <= l) {
            l++;
        } else {
            continue;
        }
    }
    
    cout << l;
}