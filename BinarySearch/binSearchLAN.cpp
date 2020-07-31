#include <iostream>
using namespace std;

int main(){
	int K, N;
	long long sum = 0;
	long long nodem, nodel, nodeu, lans, max = 0;
	cin >> K >> N;
	long long lan[K];
	for(int i = 0; i < K; i++){
		cin >> lan[i];
		sum += lan[i];
	}
	nodel = sum / (N + K);
	nodeu = sum / N + 1;
	while(nodel <= nodeu){
		lans = 0;
		nodem = (nodel + nodeu) / 2;
		for(int i = 0; i < K; i++){
			lans += (lan[i] / nodem);
		}
		if(lans >= N){
			nodel = nodem + 1;
			if(max < nodem){
				max = nodem;
			}
		} else {
			nodeu = nodem - 1;
		}
	}
	cout << max;
	return 0;
}