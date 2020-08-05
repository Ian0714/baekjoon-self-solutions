#include <iostream>
#include <algorithm>
using namespace std;

long long vmax(long long a, long long b){
	if(a > b){
		return a;
	} else {
		return b;
	}
}

long long step[10003] = {0, };
long long score[10003] = {0, };

int main(){
	int n, m, largest = 0;
	cin >> n;
	for(int a = 3; a < n + 3; a++){
		cin >> step[a];
	}
	score[0] = step[0];
	score[1] = step[0] + step[1];
	score[2] = vmax(step[0] + step[2], step[1] + step[2]);
	for(int i = 3; i < n + 3; i++){
		long long c1 = score[i - 2] + step[i];
		long long c2 = score[i - 3] + step[i - 1] + step[i];
		score[i] = vmax(c1, c2);
		score[i] = vmax(score[i], score[i - 1]);
		largest = vmax(largest, score[i]);
		}

	cout << largest;
	return 0;
}