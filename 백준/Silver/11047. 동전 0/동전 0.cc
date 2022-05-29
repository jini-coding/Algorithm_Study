#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, k, num, cnt = 0;
    
    cin >> N >> k;
    
    vector<int> v;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    int j = N-1;
    while (k > 0) {
        cnt += k / v[j];
        k %= v[j];
        j--;
    }
    
    cout << cnt << "\n";
    
    return 0;
}
