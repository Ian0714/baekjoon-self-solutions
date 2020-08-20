#include <iostream>
#include <string>

using namespace std;

long long MOD = 1234567891;
long long M = 31, R = 1;
long long N, sum = 0;
int i;
string t;

int main() {
	cin >> N >> t;
	for(i = 0; i < N; i++){
		sum = (sum + (t[i] - 'a' + 1) * R) % MOD;
		R = (R * M) % MOD;
	}
	cout << sum;
	return 0;
}