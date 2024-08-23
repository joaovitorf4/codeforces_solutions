#include <iostream>

using namespace std;

int main() {
    int w = 0;

    cin >> w;

    if ( w % 2 > 0 or w <= 2 ) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}