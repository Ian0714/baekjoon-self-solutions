#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Dur{
	int st;
	int fin;
};

bool comp(Dur f, Dur s){
	if(s.fin == f.fin){
		return f.st < s.st;
	} else {
		return f.fin < s.fin;
	}
};

int main(){
  int N;
	cin >> N;
	vector<Dur> d(N);
	for(int i = 0; i < N; i++){
		cin >> d[i].st >> d[i].fin;
	}

	sort(d.begin(), d.end(), comp);

	int count = 0, finish = 0;

	for(int i = 0; i < N; i++){
		if(finish <= d[i].st){
			finish = d[i].fin;
			count += 1;
		}
	}
	cout << count;
	return 0;
}