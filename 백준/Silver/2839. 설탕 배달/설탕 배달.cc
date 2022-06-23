#include <iostream>

using namespace std;

int main() {
    int N, temp, cnt = 0;
    
    cin >> N;
    
    while (N >= 0) {
        if (N % 5 == 0) {
            temp = N / 5;
            cnt += temp;
            cout << cnt << "\n";
            return 0;
        }
        
        N -= 3;
        cnt++;
    }
    
    cout << -1 << "\n";
    
    return 0;
}
