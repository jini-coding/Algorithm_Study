#include <iostream>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, K;
    list<int> L;
    
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++) {
        L.push_back(i);
    }
    
    cout << "<";
    
    list<int>:: iterator idx;
    idx = L.begin();
    
    while (L.size() > 1) {
        for (int i = 1; i < K; i++) {
            idx++;
            
            if (idx == L.end())
                idx = L.begin();
        }
        
        cout << *idx << ", ";
        
        idx = L.erase(idx);
        
        if (idx == L.end())
            idx = L.begin();
    }
    
    cout << *idx << ">\n";
    
    return 0;
}
