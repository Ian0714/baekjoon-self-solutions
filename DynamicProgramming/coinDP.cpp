#include <iostream>

using namespace std;

int n, k;
int ni[100];
int ki[10001] = {0, };

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> ni[i];
	}
	ki[0] = 1;
	for(int j = 0; j < n; j++){
		int t = ni[j];
		for(int i = t; i <= k; i++){
			ki[i] += ki[i - t];
		}
	}
	cout << ki[k];
	return 0;
}