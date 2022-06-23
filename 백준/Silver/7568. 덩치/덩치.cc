#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, rank;
    vector<pair<int, int>> v;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int weight, height;
        cin >> weight >> height;
        v.push_back({weight, height});
    }
    
    for (int i = 0; i < N; i++) {
        rank = 1;
        for (int j = 0; j < N; j++) {
            if ((v[i].first < v[j].first) && (v[i].second < v[j].second))
                rank++;
        }
        cout << rank << " ";
    }
    
    cout << "\n";
    
    
    return 0;
}
