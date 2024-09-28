#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int i;

    for(i = 1; i <= a; i++) {
        if (number % 3 != 0 && number % 10 != 3) {
            a++;
            continue;
        }
    }

    cout << i - 1;
    return 0;
}
