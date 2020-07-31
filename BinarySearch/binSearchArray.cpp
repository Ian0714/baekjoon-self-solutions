#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long N, k;
	cin >> N >> k;
	long long l = 1, r = k, res = 0;
	while(l <= r){
		long long sum = 0;
		long long mid = (l + r) / 2;
		for(int i = 1; i <= N; i++){
			sum += min(mid / i, N);
		}
		if(sum < k){
			l = mid + 1;
		} else {
			res = mid;
			r = mid - 1;
		}
	}
	cout << res;
	return 0;
}