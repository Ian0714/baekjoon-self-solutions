#include <iostream>
#include <queue>

using namespace std;

int N;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;

int main() {
	cin >> N;
	while(N--){
		int a, b;
		cin >> a >> b;
		que.push(make_pair(a, b));
	}
	while(!que.empty()){
		cout << que.top().first << ' ' <<que.top().second << '\n';
		que.pop();
	}
	return 0;
}