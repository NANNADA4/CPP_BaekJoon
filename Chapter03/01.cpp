#include <iostream>
using namespace std;

int main() {
    int a;

    cin >> a;

    for (int n = 1; n <= 9; n++) {
        cout << a << " * " << n << " = " << a * n << endl;
    }

    return 0;
}