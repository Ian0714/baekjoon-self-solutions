#include <iostream>
#include <queue>

using namespace std;

int minval(int a, int b){
	if(a >= b){
		return b;
	}else{
		return a;
	}
}

int N, n, count = 0;
queue<int> que;
int st[50];

int main(){
	cin >> N >> n;
	for(int i = 1; i <= N; i++){
		que.push(i);
	}
	for(int i = 0; i < n; i++){
		cin >> st[i];
	}
	for(int i = 0; i < n; i++){
		int pos = 0;
		while(que.front() != st[i]){
			que.push(que.front());
			que.pop();
			pos++;
		}
		count += minval(pos, que.size() - pos);
		que.pop();
	}
	cout << count;
	return 0;
}