#include <iostream>
using namespace std;

long long d[1000001] = {0, 1, 2};

int main(){
	long long a;
	cin >> a;
	for(int i = 3; i <= a; i++){
		d[i] = d[i - 1] + d[i - 2];
		d[i] = d[i] % 15746;
	}
	cout << d[a];
	return 0;
}
