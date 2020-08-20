#include <iostream>
#include <string>
#include <deque>

using namespace std;

int n, n1;
deque<int> deq;

int main(){
	cin >> n;
	while(n--){
		string c;
		cin >> c;
		if(c == "size"){
			cout << deq.size() << '\n';
		}else if(c == "pop_front"){
			if(deq.empty()){
				cout << -1 << '\n';
			}else{
				cout << deq.front() << '\n';
				deq.pop_front();
			}
		}else if(c == "pop_back"){
			if(deq.empty()){
				cout << -1 << '\n';
			}else{
				cout << deq.back() << '\n';
				deq.pop_back();
			}
		}else if(c == "empty"){
			if(deq.empty()){
				cout << 1 << '\n';
			}else{
				cout << 0 << '\n';
			}
		}else if(c == "front"){
			if(deq.empty()){
				cout << -1 << '\n';
			}else{
				cout << deq.front() << '\n';
			}
		}else if(c == "back"){
			if(deq.empty()){
				cout << -1 << '\n';
			}else{
				cout << deq.back() << '\n';
			}
		}else if(c == "push_front"){
			int a;
			cin >> a;
			deq.push_front(a);
		}else{
			int a;
			cin >> a;
			deq.push_back(a);
		}
	}
	return 0;
}