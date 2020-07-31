#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	long long N, M;
	long long lest = 0;
	cin >> N >> M;
	long long dist[N];
	for(int i = 0; i < N; i++){
		cin >> dist[i];
	};
	sort(dist, dist + N);
	long long max = dist[N - 1] - dist[0], min = 1;
	while(max >= min){
		long long mid = (max + min) / 2;
		long long count = 1;
		long long start = dist[0];

		for(int i = 1; i < N; i++){
			long long step = dist[i] - start;
			if(step >= mid){
				count += 1;
				start = dist[i];
			}
		}
		if(count >= M){
			lest = mid;
			min = mid + 1;
		} else {
			max = mid - 1;
		}
	}
	cout << lest;
	return 0;
}