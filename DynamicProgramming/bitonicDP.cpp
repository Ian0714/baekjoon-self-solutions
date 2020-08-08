#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int seq[1001] = {};
	int lent;
	int len[1001] = {};
	int lenr[1001] = {};
	int maxval = 0, lon;
	cin >> lon;
	for(int i = 1; i <= lon; i++){
		cin >> seq[i];
	}
	for(int i = 1; i <= lon; i++){
		len[i] = 1;
		lenr[lon - i + 1] = 1;
		for(int j = 1; j < i; j++){
			if(seq[i] > seq[j]){
				if(len[i] <= len[j]){
					len[i] = len[j] + 1;
				}
			}
			if(seq[lon - i + 1] > seq[lon - j + 1]){
				if(lenr[lon - i + 1] <= lenr[lon - j + 1]){
					lenr[lon - i + 1] = lenr[lon - j + 1] + 1;
				}
			}
		}
	}
	for(int i = 1; i <= lon; i++){
		lent = len[i] + lenr[i];
		maxval = max(maxval, lent);
	}
	cout << maxval - 1;
	return 0;
}