#include <iostream>
#include <algorithm>
using namespace std;

long long tri[500][500];
long long com[500][500];

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cin >> tri[i][j];
		}
	}
	com[0][0] = tri[0][0];
	for(int i = 1; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0){
				com[i][j] = com[i - 1][j] + tri[i][j];
			} else if(j == i){
				com[i][j] = com[i - 1][j - 1] + tri[i][j];
			} else {
				long long t = max(com[i - 1][j - 1], com[i - 1][j]);
				com[i][j] = t + tri[i][j];
			}
		}
	}
	long long maximal = com[n - 1][0];
	for(int i = 1; i < n; i++){
		if(com[n - 1][i] > maximal){
			maximal = com[n - 1][i];
		}
	}
	cout << maximal;
	return 0;
}