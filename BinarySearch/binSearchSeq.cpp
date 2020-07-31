#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> B;
int main(){
	int N, inp;
	cin >> N;
	B.push_back(0);
	for(int i = 0; i < N; i++){
		cin >> inp;
		if(B.back() < inp){
			B.push_back(inp);
		} else {
		int index = lower_bound(B.begin(), B.end(), inp) - B.begin();
		B[index] = inp;
		}
	}
	cout << B.size() - 1;
	return 0;
}