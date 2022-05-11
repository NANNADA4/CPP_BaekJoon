#include <string.h>

#include <iostream>
using namespace std;

int main() {
    int N, sum, score;
    char quiz[80];

    cin >> N;
    for (int i = 0; i < N; i++) {
        sum = 0;
        score = 1;
        cin >> quiz;
        for (int j = 0; j < strlen(quiz); j++) {
            if (quiz[j] == 'O') {
                sum += score;
                score++;
            } else {
                score = 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}