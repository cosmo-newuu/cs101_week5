#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i + 1; j++) {
            cout << j;
        }

        int s = 2 * (i - 1);
        for (int k = 0; k < s; k++) {
            cout << " ";
        }
        for (int j =n - i + 1; j >= 1; j++) {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}
