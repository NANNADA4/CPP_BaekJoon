#include <iostream>
using namespace std;

int main() {
    int num, tmp;
    int a, b, c;
    int result, cnt = 0;

    cin >> num;

    tmp = num;
    while (1) {
        a = tmp / 10;
        b = tmp % 10;
        c = (a + b) % 10;

        cnt++;

        result = (b * 10) + c;
        tmp = result;
        if (result == num) {
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}