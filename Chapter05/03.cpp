#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, num[10] = {0}, tmp;
    cin >> a >> b >> c;
    n = a * b * c;

    while (n > 0) {
        tmp = n % 10;
        num[tmp]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << num[i] << endl;
    }
    return 0;
}