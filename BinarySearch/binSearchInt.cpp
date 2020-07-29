/*#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, M, maxpos, minpos, pos, check;
	int count = 0;
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
		pos = (N - 1) / 2;
		check = 0;
		while(minpos <= maxpos){
			if(A[pos] > B[i]){
				maxpos = pos - 1;
			} else if(A[pos] < B[i]) {
				minpos = pos + 1;
			} else {
				check = 1;
				break;
			}
			pos = (maxpos + minpos) / 2;
		}
		cout << check << '\n';
	}
	return 0;
}*/