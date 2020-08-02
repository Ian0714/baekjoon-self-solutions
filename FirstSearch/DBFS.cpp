#include <iostream>
#include <queue>
using namespace std;

int N, M, V, s, t;
int nm[1001][1001] = { 0, };
int ex[1001] = { 0, };

void DFS(int a){
	cout << a << ' ';
	ex[a] = 1;
	for(int q = 1; q <= N; q++){
		if(ex[q] == 1 || nm[a][q] == 0){
			continue;
		}
		DFS(q);
	}
}

void BFS(int a){
	queue<int> q;
	q.push(a);
	ex[a] = 0;
	while(!q.empty()){
		a = q.front();
		cout << q.front() << ' ';
		q.pop();
		for(int j = 1; j <= N; j++){
			if(ex[j] == 0 || nm[a][j] == 0){
				continue;
			}
			q.push(j);
			ex[j] = 0;
		}
	}
}

int main(){
	cin >> N >> M >> V;
	for(int i = 0; i < M; i++){
		cin >> s >> t;
		nm[s][t] = nm[t][s] = 1;
	}
	DFS(V);
	cout << '\n';
	BFS(V);
	return 0;
}