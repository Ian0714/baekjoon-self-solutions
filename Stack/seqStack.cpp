/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> st;
int N, inp, pre = 0, check = 0;
string res = "";

int main(){
	cin >> N;
	while(N--){
		cin >> inp;
		if(pre < inp){
			for(int i = pre + 1; i <= inp; i++){
				st.push(i);
				res += "+\n";
			}
		}else{
			if(st.top() != inp){
				check = 1;
				break;
			}
			
		}
		st.pop();
		res += "-\n";
		if(pre < inp){
			pre = inp;
		}
	}
	if(check == 1){
		cout << "NO";
	}else{
		cout << res;
	}
	return 0;
}*/