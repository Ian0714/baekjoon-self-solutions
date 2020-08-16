/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	while(1){
		stack<char> st;
		string s;
		int check = 0;
		getline(cin, s);
		if(s == "."){
			break;
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '[' || s[i] == '('){
				st.push(s[i]);
			}else if(s[i] == ')'){
				if(st.empty() || st.top() == '['){
					check = 1;
					break;
				}
				st.pop();
			}else if(s[i] == ']'){
				if(st.empty() || st.top() == '('){
					check = 1;
					break;
				}
				st.pop();
			}
		}
		if(!st.empty() || check == 1){
			cout << "no\n";
		}else{
			cout << "yes\n";
		}
	}
	return 0;
}*/