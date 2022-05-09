#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, temp;
    queue<int> Q;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }
    
    while (Q.size() > 1) {
        Q.pop();
        
        temp = Q.front();
        Q.push(temp);
        
        Q.pop();
    }
    
    cout << Q.front() << "\n";
    
    return 0;
}
