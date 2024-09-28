#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int num;
    if (n == 1 || n == 2) {
        num = 1;
    } else {
        n -= 2;
        num = (n - 1) / x + 2;
    }

    cout << num ;
    return 0;
}
