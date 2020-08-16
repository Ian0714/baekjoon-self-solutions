/*#include <iostream>
#include <queue>
#include <string>

using namespace std;

int N;

int main(){
	cin >> N;
	while(N--){
		int n, m, count = 0;
		cin >> n >> m;
		queue<pair<int, int>> que;
		for(int i = 0; i < n; i++){
			int t;
			cin >> t;
			if(i == m){
				que.push({t, 1});
			}else{
				que.push({t, 0});
			}
		}
		while(!que.empty()){
			int max = 0;
			for(int i = 0; i < que.size(); i++){
				if(max < que.front().first){
					max = que.front().first;
				}
				que.push(que.front());
				que.pop();
			}
			while(max != que.front().first){
				que.push(que.front());
				que.pop();
			}
			count++;
			if(que.front().second == 1){
				break;
			}else{
				que.pop();
			}
		}
		cout << count << '\n';
	}
	return 0;
}*/