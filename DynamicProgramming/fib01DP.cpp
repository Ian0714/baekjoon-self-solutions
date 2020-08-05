#include <iostream>
using namespace std;

int main(){
	int n, d;
	long long v[41] = {0, 1, 1};
	for(int i = 3; i < 41; i++){
		v[i] = v[i - 1] + v[i - 2];
	}

	cin >> n;

	for(int i = 0; i < n ; i++){
		cin >> d;
		if(d == 0){
			cout << 1 << ' ' << 0 << '\n';
		} else if (d == 1){
			cout << 0 << ' ' << 1 << '\n';
		} else {
			cout << v[d - 1] << ' ' << v[d] << '\n';
		}
	}
	return 0;
}
