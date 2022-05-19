#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, time, sum = 0;
    vector<int> t;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> time;
        t.push_back(time);
    }
    
    sort(t.begin(), t.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            sum += t[j];
        }
    }
    
    cout << sum << "\n";
    
    return 0;
}
