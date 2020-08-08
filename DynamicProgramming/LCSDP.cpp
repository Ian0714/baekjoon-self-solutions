#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string cont;
string expr;
int clen, elen;

int main(){
	cin >> cont >> expr;
	clen = cont.length();
	elen = expr.length();
	int mat[clen + 1][elen + 1];
	for(int i = 0; i <= elen; i++){
		mat[0][i] = 0;
	}
	for(int i = 1; i <= clen; i++){
		mat[i][0] = 0;
		for(int j = 1; j <= elen; j++){
			char a = cont.at(i - 1);
			char b = expr.at(j - 1);
			if(a == b){
				mat[i][j] = mat[i - 1][j - 1] + 1;
			} else {
				mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
			}
		}
	}
	cout << mat[clen][elen];
	return 0;
}