#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    string str;
    
    cin >> N;
    
    vector<string> v;
    for (int i = 0; i < N; i++) {
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end(), cmp);
    
    cout << v[0] << "\n";
    for (int i = 1; i < N; i++) {
        if (v[i] == v[i-1]) {
            continue;
        }
        cout << v[i] << "\n";
    }
    
    return 0;
}
