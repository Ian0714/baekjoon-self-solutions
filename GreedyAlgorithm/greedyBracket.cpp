#include <iostream>
#include <string>
using namespace std;

int main(){
	int total = 0, s = 0;
	string expr, num = "";
	cin >> expr;
	for(int i = 0; i <= expr.size(); i++){
		if(expr[i] == '+' || expr[i] == '-' || expr[i] == '\0'){
			if(s == 0){
				total += stoi(num);
			} else {
				total -= stoi(num);
			}
			if(expr[i] == '-'){
				s = 1;
			}
			num = "";
		} else {
			num += expr[i];
		}
	}
	cout << total;
	return 0;
}