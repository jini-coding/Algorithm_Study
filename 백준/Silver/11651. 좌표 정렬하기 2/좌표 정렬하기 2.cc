#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    int N, x, y;
    vector<pair<int, int>> v;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for (int j = 0; j < N; j++) {
        cout << v[j].first << " " << v[j].second << "\n";
    }
    
    return 0;
}
