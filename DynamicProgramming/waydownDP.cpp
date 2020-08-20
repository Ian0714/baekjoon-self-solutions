#include <iostream>

using namespace std;

int N, M;
int way[501][501];
int dp[501][501];
bool visit[501][501];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(int x, int y){
	if(x == M - 1 && y == N - 1){
		return 1;
	}
	if(visit[x][y]){
		return dp[x][y];
	}
	visit[x][y] = true;
	
	for(int c = 0; c < 4; c++){
		int nx = x + dx[c];
		int ny = y + dy[c];
		if(nx >= 0 && nx < M && ny >= 0 && ny < N){
			if(way[x][y] > way[nx][ny]){
				dp[x][y] += dfs(nx, ny);
			}
		}
	}
	return dp[x][y];
}

int main() {
	cin >> M >> N;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> way[i][j];
		}
	}
	cout << dfs(0, 0);
	return 0;
}