#include <iostream>

using namespace std;

int main() {
    int zeroCounter = 0;
    int oneCounter = 0;
    string x = "";

    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        if ( x[i] == '0') {
            zeroCounter++;
            if ( zeroCounter >= 7 ) {
                cout << "YES" << endl;
                return 0;
            }
            oneCounter = 0;
        }

        if ( x[i] == '1') {
            oneCounter++;
            if ( oneCounter >= 7 ) {
                cout << "YES" << endl;
                return 0;
            }
            zeroCounter = 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}