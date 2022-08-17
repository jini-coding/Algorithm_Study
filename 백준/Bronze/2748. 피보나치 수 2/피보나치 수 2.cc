#include <iostream>

using namespace std;

long long arr[91] = {0, };

long long fibo(int num) {
    if (num == 0 || num == 1) {
        return num;
    }
    
    if (arr[num] > 0) {
        return arr[num];
    }
    
    else {
        arr[num] = fibo(num-2) + fibo(num-1);
        return arr[num];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    arr[0] = 0;
    arr[1] = 1;
    
    cout << fibo(N) << "\n";
    
    return 0;
}
