#include <iostream>
using namespace std;

int main() {
    int a[10] = {0}, cnt, result = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        a[i] %= 42;
    }
    for (int i = 0; i < 10; i++) {
        cnt = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                cnt++;
            }
        }
        if (cnt == 0) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}