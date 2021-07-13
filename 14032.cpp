#include<iostream>
using namespace std;

struct windows{
	int xx1, xx2;
	int yy1, yy2;
	int nxt, num;
}w[11];

operator==(const struct windows &w1, const struct windows &w2){
	return w1.num == w2.num;
}

operator!=(const struct windows &w1, const struct windows &w2){
	return w1.num != w2.num;
}

int main(){
	int n, m;
	int head, i;
	int tmpx, tmpy;
	cin >> n >> m;
	for(i = 1; i <= n; i++){
		cin >>  w[i].xx1 >> w[i].yy1 >> w[i].xx2 >> w[i].yy2;
		w[i].num = i;
		w[i].nxt = i - 1;
	}
	head = 0;
	w[0].nxt = n;

	for(int j = 0; j < m; j++){
		cin >> tmpx >> tmpy;
		i = head;
		while(w[i].nxt != 0){
			if(tmpx >= w[w[i].nxt].xx1 && tmpx <= w[w[i].nxt].xx2 && tmpy >= w[w[i].nxt].yy1 && tmpy <= w[w[i].nxt].yy2){
				cout << w[w[i].nxt].num << endl;
				if(i != head){
					if(w[w[head].nxt] != w[i]){
						swap(w[w[head].nxt].nxt, w[w[i].nxt].nxt);
						swap(w[head].nxt, w[i].nxt);
					}else if(w[w[head].nxt] == w[i]){
						w[head].nxt = w[i].nxt;
						w[i].nxt = w[w[i].nxt].nxt;
						w[w[head].nxt].nxt = i;
					}
				}
				break;
			}else{
				i = w[i].nxt;
			}
		}
		if(w[i].nxt == 0)
			cout << "IGNORED" << endl;
	}

	return 0;
}

