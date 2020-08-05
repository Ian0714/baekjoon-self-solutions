#include <iostream>
using namespace std;

#define BIG 1000000000;
int N;
long long ele[101][11] = {0, };
long long sum = 0;

int main(){
	
	cin >> N;
	for(int i = 1; i <= 9; i++){
		ele[1][i] = 1;
	}
	for(int i = 2; i <= N; i++){
		ele[i][0] = ele[i - 1][1];
		ele[i][10] = 0;
		for(int j = 1; j < 10; j++){
			ele[i][j] = (ele[i - 1][j - 1] + ele[i - 1][j + 1]) % BIG;
		}
	}
	for(int j = 0; j < 10; j++){
		sum = (sum + ele[N][j]) % BIG;
	}
	cout << sum;
	return 0;
}