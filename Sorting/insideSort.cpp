#include <iostream>
#include <algorithm>
using namespace std;

#define A 1000000000
long long T[9];

int main(){
	long long N;
	int count = 0;
	cin >> N;
	if(A == N){
		cout << 1000000000;
	} else {
		while(N != 0){
			T[count] = N % 10;
			N /= 10;
			count++;
		}
		sort(T, T + count);
		for(int i = count - 1; i >= 0; i--){
			cout << T[i];
		}
	}
	return 0;
}
