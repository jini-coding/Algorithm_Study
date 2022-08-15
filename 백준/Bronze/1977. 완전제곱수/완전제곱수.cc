#include <iostream>
#include <vector>

using namespace std;

int main() {
    int M, N;
    int i = 1, sum = 0, cnt = 0, min = 10000;
    vector<int> v;
    
    cin >> M >> N;
    
    while (i * i <= N) {
        if (i * i >= M) {
            cnt++;
            sum += i * i;
            v.push_back(i * i);
            
            if (i * i <= min) {
                min = i * i;
            }
        }
        i++;
    }
    
    if (v.size() == 0) {
        cout << -1 << "\n";
    }
    else {
        cout << sum << "\n" << min << "\n";
    }
    
    return 0;
}
