#include <iostream>
#include <queue>

using namespace std;

int main() {
    int T, N, M, gravity;
    int index, value;
    
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        cin >> N >> M;
        
        int cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        for (int i = 0; i < N; i++) {
            cin >> gravity;
            q.push({i, gravity});
            pq.push(gravity);
        }
        
        while (!q.empty()) {
            index = q.front().first;
            value = q.front().second;
            
            q.pop();
            
            if (pq.top() == value) {
                pq.pop();
                cnt++;
                
                if (index == M) {
                    cout << cnt << "\n";
                    break;
                }
                
            }
            else
                q.push({index, value});
            
        }
        
    }
    
    return 0;
}
