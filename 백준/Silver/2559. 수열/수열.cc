#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, K, tmp[100001];
    
    cin >> N >> K;
    
    for (int i = 0; i < N; i++) {
        cin >> tmp[i];
    }
    
    long long sum = 0;
    long long result = -10000000;
    int idx = 0;
    
    for (int i = 0; i < N; i++) {
        sum += tmp[i];
        
        if (i >= K-1) {
            result = max(result, sum);
            sum -= tmp[idx++];
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
