/*#include <iostream>

using namespace std;

int n, pos = 4;
int num[11];

int main(){
	cin >> n;
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;
	while(n--){
		int t;
		cin >> t;
		if(pos > t){
			cout << num[t] << '\n';
		}else{
			for(int j = pos; j <= t; j++){
				num[j] = num[j - 1] + num[j - 2] + num[j - 3];
				pos++;
			}
			cout << num[t] << '\n';
		}
	}
	return 0;
}*/