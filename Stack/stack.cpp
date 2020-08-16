/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> st;
int N;
string T;

int main(){
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> T;
		if(T == "push"){
			int t;
			cin >> t;
			st.push(t);
		}else if(T == "pop"){
			if(!st.empty()){
				cout << st.top() << '\n';
				st.pop();
			}else{
				cout << -1 << '\n';
			}
		}else if(T == "empty"){
			if(!st.empty()){
				cout << 0 << '\n';
			}else{
				cout << 1 << '\n';
			}
		}else if(T == "size"){
			cout << st.size() << '\n';
		}else if(T == "top"){
			if(!st.empty()){
				cout << st.top() << '\n';
			}else{
				cout << -1 << '\n';
			}
		}
	}
	return 0;
}*/