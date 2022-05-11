#include <iostream>
using namespace std;

int main() {
    int cnt, num, min = 1000001, max = -1000001;

    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        cin >> num;
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    cout << min << " " << max;
    return 0;
}