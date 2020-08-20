#include <iostream>

using namespace std;

int N;
int num[510][2];
int dp[510][510];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	for(int i = 1; i <= N; i++){
		cin >> num[i][0] >> num[i][1];
	}

	for(int i = 1; i < N; i++){
		dp[i][i+1] = num[i][0] * num[i][1] * num[i+1][1];
	}

	for(int i = 2; i <= N; i++){
		for(int j = 1; j <= N - i; j++){
			int k = i + j;
			for(int s = j; s < k; s++){
				int res = dp[j][s] + dp[s + 1][k] + num[j][0] * num[s][1] * num[k][1];
				if(!dp[j][k] || res < dp[j][k]){
					dp[j][k] = res;
				}
			}
		}
	}
	cout << dp[1][N];
	return 0;
}