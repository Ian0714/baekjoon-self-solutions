#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool comp(string a, string b){
	if(a.size() == b.size()){
		return a < b;
	}else{
		return a.size() < b.size();
	}
}

int main() {
	cin >> N;
	vector<string> s;
	for(int i = 0; i < N; i++){
		string t;
		cin >> t;
		s.push_back(t);
	}

	sort(s.begin(), s.end(), comp);
	string tem;

	for(int i = 0; i < N; i++){
		if(tem != s[i]){
			cout << s[i] << '\n';
		}
		tem = s[i];
	}
	return 0;
}