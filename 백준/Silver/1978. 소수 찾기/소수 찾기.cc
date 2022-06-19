#include <iostream>

using namespace std;

int main() {
    int N, num, cnt = 0, result = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) cnt++;
            
            if (cnt >= 3) break;
        }
        
        if (cnt == 2) result++;
        
        cnt = 0;
    }
    
    cout << result << "\n";
    
    return 0;
}
