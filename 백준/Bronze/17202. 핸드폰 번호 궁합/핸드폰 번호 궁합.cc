#include <iostream>
#include <queue>

using namespace std;

int main() {
    int temp, idx = 15;
    string num1, num2;
    queue<int> q;
    
    cin >> num1 >> num2;
    
    for (int i = 0; i < 8; i++) {
        q.push(num1[i] - '0');
        q.push(num2[i] - '0');
    }
    
    while (q.size() != 2) {
        for (int i = 0; i < idx; i++) {
            temp = q.front();
            q.pop();
            q.push((temp + q.front()) % 10);
        }
        
        q.pop();
        idx--;
    }
    
    cout << q.front() << q.back() << "\n";
  
    return 0;
}
