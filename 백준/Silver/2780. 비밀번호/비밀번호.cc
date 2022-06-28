#include <iostream>

using namespace std;

int main() {
    int T, res, input;
    int dp[1001][10];

    cin >> T;
    
    for(int i = 0; i < 10; i++) {
        dp [1][i] = 1;
    }
    
    for(int i = 2; i <= 1000; i++ ) {
        for(int k = 0; k < 10; k++) {
            switch (k) {
                case 0 :
                    dp[i][k] = dp[i-1][7];
                    break;
                case 1 :
                    dp[i][k] = dp[i-1][2] + dp[i-1][4];
                    break;
                case 2 :
                    dp[i][k] = dp[i-1][1] + dp[i-1][3] + dp[i-1][5];
                    break;
                case 3 :
                    dp[i][k] = dp[i-1][2] + dp[i-1][6];
                    break;
                case 4 :
                    dp[i][k] = dp[i-1][1] + dp[i-1][5] + dp[i-1][7];
                    break;
                case 5 :
                    dp[i][k] = dp[i-1][2] + dp[i-1][4] + dp[i-1][6] + dp[i-1][8];
                    break;
                case 6 :
                    dp[i][k] = dp[i-1][3] + dp[i-1][5] + dp[i-1][9];
                    break;
                case 7 :
                    dp[i][k] = dp[i-1][0] + dp[i-1][4] + dp[i-1][8];
                    break;
                case 8 :
                    dp[i][k] = dp[i-1][5] + dp[i-1][7] + dp[i-1][9];
                    break;
                case 9 :
                    dp[i][k] = dp[i-1][6] + dp[i-1][8];
                    break;
                }
            dp[i][k] = dp[i][k] % 1234567;
        }
    }
    
    while(T--) {
        res = 0;
        cin >> input;
        
        for(int i = 0; i < 10; i++) {
            res = (res + dp[input][i]) % 1234567;
        }
        
        cout << res % 1234567 << '\n';
    }
    
    return 0;
}
