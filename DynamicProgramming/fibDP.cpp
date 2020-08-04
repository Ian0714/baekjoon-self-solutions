/*#include <iostream>
using namespace std;

long long v[101] = {0, 1, };

long long fib(long long a){
	if(a >= 2 && v[a] == 0){
		v[a] = fib(a - 1) + fib(a - 2);
	}
	return v[a];
}

int main(){
	long long n;
	cin >> n;
	cout << fib(n);
	return 0;
}*/