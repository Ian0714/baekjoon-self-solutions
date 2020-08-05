#include <iostream>
#include <algorithm>
using namespace std;

long long cnt[1000001] = {0, 0, };

int main(){
	
	int N;
	cin >> N;
	for(int i = 2; i <= N; i++){
		cnt[i] = cnt[i - 1] + 1;
		if(i % 2 == 0){
			cnt[i] = min(cnt[i], cnt[i / 2] + 1);
		}
		if(i % 3 == 0){
			cnt[i] = min(cnt[i], cnt[i / 3] + 1);
		}
	}
	cout << cnt[N];
	return 0;
}