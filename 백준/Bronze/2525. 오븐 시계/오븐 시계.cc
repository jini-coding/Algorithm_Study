#include <iostream>

using namespace std;

int main() {
    int hour, min, time;

    cin >> hour >> min;
    cin >> time;

    hour += time / 60;
    min += time % 60;

    if (min >= 60) {
        hour++;
        min %= 60;
    }

    if (hour >= 24) {
        hour %= 24;
    }

    cout << hour << " " << min << "\n";

    return 0;

}
