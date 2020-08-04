/*#include <iostream>
#include <algorithm>
using namespace std;

long long RGB[1000][3];
long long house[1000][3];

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> house[i][0] >> house[i][1] >> house[i][2];
	}
	RGB[0][0] = house[0][0];
	RGB[0][1] = house[0][1];
	RGB[0][2] = house[0][2];
	for(int i = 1; i < n; i++){
		RGB[i][0] = min(RGB[i - 1][1], RGB[i - 1][2]) + house[i][0];
		RGB[i][1] = min(RGB[i - 1][0], RGB[i - 1][2]) + house[i][1];
		RGB[i][2] = min(RGB[i - 1][0], RGB[i - 1][1]) + house[i][2];
	}
	int m = RGB[n - 1][0];
	for(int i = 1; i < 3; i++){
		if(m > RGB[n - 1][i]){
			m = RGB[n - 1][i];
		}
	}
	cout << m;
	return 0;
}*/