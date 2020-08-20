#include <iostream>
#include <algorithm>

using namespace std;

int BIG = 1000000007;

int N, M;
int dp[501][501];
int cost[501];
int sum[501];

int main() {
	cin >> N;
	while(N--){
		cin >> M;
		for(int i = 1; i <= M; i++){
			cin >> cost[i];
			sum[i] = sum[i - 1] + cost[i];
		}
		for(int a = 1; a < M; a++){
			for(int b = 1; b + a <= M; b++){
				int c = b + a;
				dp[b][c] = BIG;
				for(int m = b; m < c; m++){
					dp[b][c] = min(dp[b][c], dp[b][m] + dp[m + 1][c] + sum[c] - sum[b - 1]);
				}
			}
		}
		cout << dp[1][M] << '\n';
	}
	return 0;
}