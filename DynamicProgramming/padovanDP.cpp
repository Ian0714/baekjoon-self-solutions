/*#include <iostream>
using namespace std;

long long d[101] = {0, 1, 1, 1, 2, 2};

int main(){
	long long a, t, count = 0;
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> t;
		if(t < 6 || count >= t){
			cout << d[t] << '\n';
			count = t;
		} else {
			for(int j = 6; j <= t; j++){
				d[j] = d[j - 1] + d[j -5];
			}
			cout << d[t] << '\n';
			count = t;
		}
	}
	return 0;
}*/