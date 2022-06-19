#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, cnt = 0;
    string str;
    vector<string> v, result;
    
    cin >> N >> M;
    
    for (int i = 0; i < N+M; i++) {
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < N+M-1; i++) {
        if (v[i] == v[i+1]) {
            result.push_back(v[i]);
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    
    return 0;
}
