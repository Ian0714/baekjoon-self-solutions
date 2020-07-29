/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, M, maxpos, minpos, pos;
	int upper, lower;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		cin >> A[i];
	};
	cin >> M;
	int B[M];
	for(int i = 0; i < M; i++){
		cin >> B[i];
	};
	sort(A, A + N);
	for(int i = 0; i < M; i++){
		maxpos = N - 1;
		minpos = 0;
		//lower bound
		while(minpos < maxpos){
			pos = (maxpos + minpos) / 2;
			if(A[pos] >= B[i]){
				maxpos = pos;
			} else {
				minpos = pos + 1;
			}
		}
		lower = maxpos;
		maxpos = N - 1;
		minpos = 0;
		pos = (N - 1) / 2;
		//upper bound
		while(minpos < maxpos){
			if(A[pos] > B[i]){
				maxpos = pos;
			} else {
				minpos = pos + 1;
			}
			pos = (maxpos + minpos) / 2;
		}
		upper = maxpos;
		if(upper == N - 1 && A[N - 1] == B[i]){
			upper += 1;
		}
		cout << upper - lower << ' ';
	}
	return 0;
}*/