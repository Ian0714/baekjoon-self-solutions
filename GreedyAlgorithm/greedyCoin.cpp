/*#include <iostream>
using namespace std;

int main() {
  int N, K, count = 0;
	cin >> N >> K;
	int value[N];
	for(int i = 0; i < N; i++){
		cin >> value[i];
	}
	for(int j = N - 1; j >= 0; j--){
		if(value[j] > K){
			continue;
		} else {
			count = count + K / value[j];
			K = K % value[j];
		}
	}
	cout << count;
	return 0;
}*/