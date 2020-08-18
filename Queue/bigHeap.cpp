#include <iostream>
#include <queue>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	int N;
	cin >> N;
	priority_queue<int> que;
	for(int i = 0; i < N; i++){
		int t;
		cin >> t;
		if(t == 0){
			if(!que.empty()){
				cout << que.top() << '\n';
				que.pop();
			}else{
				cout << "0\n";
			}
		}else{
			que.push(t);
		}
	}
	return 0;
}