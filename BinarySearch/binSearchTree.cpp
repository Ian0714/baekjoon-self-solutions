#include <iostream>
using namespace std;

int main(){
	long long N, M;
	long long m, rem, min = 0, max = 0, tall = 0;
	cin >> N >> M;
	long long tree[N];

	for(int i = 0; i < N; i++){
		cin >> tree[i];
		if(max < tree[i]){
			max = tree[i];
		}
	}
	while(min <= max){
		m = (min + max) / 2;
		rem = 0;
		for(int i = 0; i < N; i++){
			if(tree[i] > m){
				rem += (tree[i] - m);
			}
		}
		if(rem >= M){
			if(m > tall){
				tall = m;
			}
			min = m + 1;
		} else {
			max = m - 1;
		}
	}
	cout << tall;
	return 0;
}