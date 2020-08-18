#include <iostream>
#include <string>

using namespace std;

string comp = "666";
int count = 0, N, start = 665;

int main(){
	cin >> N;
	while(N != count){
		start++;
		string c = to_string(start);
		if(c.find(comp) != -1){
			count++;
		}
	}
	cout << start;
	return 0;
}
