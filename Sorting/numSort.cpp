/*#include <iostream>
using namespace std;

int main(){
	int N, t;
	cin >> N;
	int arrs[N];
	int arrs1[N];
	for(int i = 0; i < N; i++){
		cin >> arrs[i];
	}
	for(int i = 0; i < N; i++){
		int count = 0;
		for(int j = 0; j < N; j++){
			if(i != j){
				if(arrs[i] > arrs[j]){
					count++;
				}
			}
		}
		arrs1[count] = arrs[i];
	}
	for(int i = 0; i < N; i++){
		cout << arrs1[i] << '\n';
	}
	return 0;
}*/