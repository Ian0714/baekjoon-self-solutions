#include <iostream>
#include <algorithm>
using namespace std;

long long step[300];
long long score[300];

int main(){
	int n;
	cin >> n;
	for(int a = 0; a < n; a++){
		cin >> step[a];
	}
	score[0] = step[0];
	score[1] = step[0] + step[1];
	score[2] = max(step[0] + step[2], step[1] + step[2]);
	for(int i = 3; i < n; i++){
		long long c1 = score[i - 2] + step[i];
		long long c2 = score[i - 3] + step[i - 1] + step[i];
		score[i] = max(c1, c2);
	}
	cout << score[n - 1];
	return 0;
}