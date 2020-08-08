#include <iostream>
using namespace std;

int main(){
	int seq[1001] = {};
	int len[1001] = {};
	int maxval = 0, lon;
	cin >> lon;
	for(int i = 1; i <= lon; i++){
		cin >> seq[i];
	}
	for(int i = 1; i <= lon; i++){
		int min = 0;
		for(int j = 0; j < i; j++){
			if(seq[i] > seq[j]){
				if(min < len[j]){
					min = len[j];
				}
			}
		}
		len[i] = min + 1;
		if(maxval < len[i]){
			maxval = len[i];
		}
	}
	cout << maxval;
	return 0;
}