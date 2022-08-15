#include <iostream>

using namespace std;

int N, M;
int arr[10];
bool visited[10];

void dfs(int idx) {
    if(idx == M) {
        for(int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    for(int i = 1; i <= N; ++i) {
        if(!visited[i]) {
            visited[i] = true;
            arr[idx] = i;
            dfs(idx + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> N >> M;
    
    dfs(0);
    
    return 0;
}
