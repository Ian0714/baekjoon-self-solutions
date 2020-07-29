#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int N, mintime = 0;
	cin >> N;
	int atm[N];
	for(int i = 0; i < N; i++){
		cin >> atm[i];
	}
	sort(atm, atm + N);
	for(int i = 0; i < N; i++){
		mintime += atm[i]*(N-i);
	}
	cout << mintime;
	return 0;
}