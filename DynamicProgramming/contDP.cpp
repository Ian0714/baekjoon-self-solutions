#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, t;
	cin >> N;
	int num[N], tot[N];
	for(int i = 0; i < N; i++){
		cin >> num[i];
	}
	tot[0] = num[0];
	t = num[0];
	for(int i = 1; i < N; i++){
		tot[i] = max(tot[i-1] + num[i], num[i]);
		t = max(tot[i], t);
	}
	cout << t;
	return 0;
}