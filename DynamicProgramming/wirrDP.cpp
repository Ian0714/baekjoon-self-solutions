#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(vector<int> &x, vector<int> &y){
	return x[0] < y[0];
}

int N, maxval = 0;
int wl[100];

int main(){
	cin >> N;
	vector < vector<int> > wire(N);

	for(int i = 0; i < N; i++){
		wire[i] = vector <int> (2);
		cin >> wire[i][0] >> wire[i][1];
	}

	sort(wire.begin(), wire.end(), compare);

	for(int i = 0; i < N; i++){
		wl[i] = 1;
		for(int j = 0; j < i; j++){
			if(wire[i][1] > wire[j][1] && wl[i] <= wl[j]){
				wl[i] = wl[j] + 1;
			}
		}
		maxval = max(maxval, wl[i]);
	}
	cout << N - maxval;
	return 0;
}