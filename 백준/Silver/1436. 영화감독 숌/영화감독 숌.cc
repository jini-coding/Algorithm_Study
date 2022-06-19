#include <iostream>

using namespace std;

int main() {
    int N, temp, cnt = 0, result = 0;
    
    cin >> N;
    
    while (cnt != N) {
        result++;
        
        temp = result;
        
        while (temp != 0) {
            if (temp % 1000 == 666) {
                cnt++;
                break;
            }
            else temp /= 10;
        }
    }
    cout << result << "\n";
    
    return 0;
}
