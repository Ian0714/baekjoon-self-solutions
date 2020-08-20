#include <iostream>
#include <set>

using namespace std;

int n, n1;

int main(){
	cin >> n;
	while(n--){
		int count = 0;
		cin >> n1;
		multiset<int> que;
		for(int i = 0; i < n1; i++){
			char a;
			int b;
			cin >> a >> b;
			if(a == 'I'){
				que.insert(b);
			}else if(a == 'D'){
				if(!que.empty()){
					if(b == 1){
						que.erase(--que.end());
					}else{
						que.erase(que.begin());
					}
				}
			}
		}
		if(que.empty()){
			cout << "EMPTY" << '\n';
		}else{
			cout << *(--que.end()) << ' ' << *que.begin() << '\n';
		}
	}
	return 0;
}