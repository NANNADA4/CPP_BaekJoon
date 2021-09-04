#include <bits/stdc++.h>
#define big 10001
using namespace std;

bool CheckNum[big];

int d() {
    int num = 0;
    for (int i = 0; i < big; i++) {
        if (i < 10) {
            num = i + i;
            CheckNum[num] = true;
        } else if (i < 100) {
            num = i + i / 10 + i % 10;
            CheckNum[num] = true;
        } else if (i < 1000) {
            num = i + i / 100 + i % 100 / 10 + i % 10;
            CheckNum[num] = true;
        } else if (i < 10000) {
            num = i + i / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10;
            CheckNum[num] = true;
        } else {
        }
    }
    return num;
}

int main() {
    d();
    for (int i = 0; i < 10000; i++) {
        if (CheckNum[i] == false) {
            cout << i << endl;
        }
    }
    return 0;
}
