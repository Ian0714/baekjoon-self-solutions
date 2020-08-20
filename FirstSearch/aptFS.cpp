#include<iostream>
#include <queue>
#include<string>

using namespace std;

int N, num;
int apt[25][25];
bool aptv[25][25];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

priority_queue<int, vector<int>, greater<int>> que;

void DFS(int x, int y) {
	num++;
	aptv[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (apt[nx][ny] == 1 && aptv[nx][ny] == false){
			DFS(nx, ny);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < N; j++){
			apt[i][j] = t[j] - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (apt[i][j] == 1 && aptv[i][j] == false) {
				num = 0;
				DFS(i, j);
				que.push(num);
			}
		}
	}

	cout << que.size() << endl;

	while(!que.empty()){
		cout << que.top() << '\n';
		que.pop();
	}

	return 0;
}