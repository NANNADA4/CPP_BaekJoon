#include <iostream>
using namespace std;

int main() {
    int number, sum, score[1000] = {0}, student, cnt = 0;
    double avg, ans;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> student;
        avg = 0, ans = 0, sum = 0, cnt = 0;

        for (int j = 0; j < student; j++) {
            cin >> score[j];
            sum += score[j];
            avg = (double)sum / student;
        }

        for (int k = 0; k < student; k++) {
            if (score[k] > avg) {
                cnt++;
            }
        }

        ans = ((double)cnt * 100) / student;
        cout << fixed;
        cout.precision(3);
        cout << ans << "%" << endl;
    }
    return 0;
}