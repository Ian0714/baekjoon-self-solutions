#include <iostream>
#include <queue>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	int N, mid;
	cin >> N;
	priority_queue<int> small;
	priority_queue<int, vector<int>, greater<int>> big;
	for(int i = 0; i < N; i++){
		int t;
		cin >> t;
		if(i == 0){
			small.push(t);
			cout << small.top() << '\n';
			mid = small.top();
		}else{
			if(t < mid){
				small.push(t);
			}else{
				big.push(t);
			}
			if(small.size() > big.size() + 1){
				big.push(small.top());
				small.pop();
			}else if(small.size() < big.size()){
				small.push(big.top());
				big.pop();
			}
			cout << small.top() << '\n';
			mid = small.top();
		}
	}
	return 0;
}