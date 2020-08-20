#include <iostream>
#include <string>

using namespace std;

char chess[50][50];

int minfind(int a, int b){
	if(a > b){
		return b;
	}else{
		return a;
	}
}

int n, m, minB, minW, minval = 70;

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		string t;
		cin >> t;
		for(int j = 0; j < m ; j++){
			chess[i][j] = t[j];
		}
	}
	for(int a = 0; a < n - 7; a++){
		for(int b = 0; b < m - 7; b++){
			minW = 0;
			minB = 0;
			for(int c = a; c < a + 8; c++){
				for(int d = b; d < b + 8; d++){
					if((c + d) % 2 == 0){
						if(chess[c][d] == 'B'){
							minW++;
						}else{
							minB++;
						}
					}else{
						if(chess[c][d] == 'W'){
							minW++;
						}else{
							minB++;
						}
					}
				}
			}
			minval = minfind(minval, minW);
			minval = minfind(minval, minB);
		}
	}
	cout << minval;
	return 0;
}