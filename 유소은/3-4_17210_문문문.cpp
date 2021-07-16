#include <iostream>
using namespace std;

int main() {
    int n;
    bool first, curr;
    cin >> n >> first;

    for ( int i = 1; i < n; i++ ) {
        if ( i % 2 == 0 )
            curr = first;
        else
            curr = !(first);
        if ( i % 3 == 2 && curr != first){
            cout << "Love is open door";
            return 0;
        }
    }
    
    for ( int i = 1; i < n; i++ ) {
        if ( i % 2 == 0 )
            cout << first << '\n';
        else
            cout << !(first) << '\n';
    }
}