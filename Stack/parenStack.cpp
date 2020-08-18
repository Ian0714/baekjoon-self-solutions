#include <iostream>
#include <string>

using namespace std;

int N;
string T;

bool par(string str){
	int k = str.length();
	int count = 0;
	for(int j = 0; j < k; j++){
		if(T.at(j) == '('){
			count++;
		}else{
			count--;
		}
		if(count < 0){
			return false;
		}
	}
	if(count == 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> T;
		if(par(T)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
