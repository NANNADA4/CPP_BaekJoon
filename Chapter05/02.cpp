#include <iostream>
using namespace std;

int main() {
    int tmp = 0, cnt = 0, num[9];

    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        if (tmp < num[i]) {
            tmp = num[i];
            cnt = i + 1;
        }
    }
    cout << tmp << endl;
    cout << cnt << endl;
    return 0;
}