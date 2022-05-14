#include <iostream>
#include <algorithm>

int n, m;
int *req;

int search(int withdrawal_unit) {
    int cnt = 1;
    int sum = 0;
    
    for (int i = 0; i < n; ++i) {
        if (sum + req[i] > withdrawal_unit) {
            cnt++;
            sum = req[i];
        } else {
            sum += req[i];
        }
    }
    
    return cnt;
}

int main(int argc, const char *argv[]) {
    std::cin >> n >> m;
    req = new int[n] {0, };
    
    int req_max = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> req[i];
        req_max = std::max(req[i], req_max);
    }
    
    int left = req_max;
    int right = 1e9;
    int mid;
    
    while (left < right) {
        if (search(mid = (left + right) / 2) > m)
            left = mid + 1;
        else
            right = mid;
    }
    
    std::cout << left << std::endl;
    
    return 0;
}