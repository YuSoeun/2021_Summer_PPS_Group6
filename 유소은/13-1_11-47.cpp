#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, k, temp, remain;
    int result = 0;
    stack <int> a;
    
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push(temp);
    }
    
    for (int i = 0; i < n; i++) {
        remain = k / a.top();
        if (remain >= 1) {
            result += remain;
            k -= remain * a.top();
        }
        // cout << a.top() << '\t' << result << endl;
        a.pop();
    }
    
    cout << result << "\n";
    return 0;
}