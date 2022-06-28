#include <iostream>
#include <queue>

using namespace std;
 
int main(void) {
    int stone[100001];
    bool visited[100001];
    int a, b, n, m;
    
    scanf("%d %d %d %d", &a, &b, &n, &m);
 
    const int d[] = { +1,-1,a,b,-a,-b,a,b };
    
    queue<int> q;
    visited[n] = true;
    stone[n] = 0;
    q.push(n);
 
    while (!q.empty()) {
        int cur = q.front(); q.pop();
 
        if (cur == m) {
            printf("%d", stone[cur]);
            break;
        }
        
        for (int i = 0; i < 6; ++i) {
            int next = cur + d[i];
            
            if (next < 0 || 100000 < next)
                continue;
            
            if (visited[next] == false) {
                visited[next] = true;
                stone[next] = stone[cur] + 1;
                q.push(next);
            }
        }
        
        for (int i = 6; i < 8; ++i) {
            int next = cur * d[i];
 
            if (next < 0 || 100000 < next)
                continue;
 
            if (visited[next] == false) {
                visited[next] = true;
                stone[next] = stone[cur] + 1;
                q.push(next);
            }
        }
    }
 
    return 0;
}
