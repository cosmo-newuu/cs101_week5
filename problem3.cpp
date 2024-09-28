#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int tsum = 0;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        int f = i;

        while (f > 0) {
            sum += f % 10;
            f /= 10;
        }

        if (sum >= a && sum <= b) {
            tsum += i;
        }
    }

    cout << tsum << endl;

    return 0;
}
