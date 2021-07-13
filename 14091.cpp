#include<iostream>
using namespace std;
int mem[1005];

int main(){
	int n, cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> mem[i];
	}

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++){
			if(mem[i] - mem[j] == -1 || mem[i] - mem[j] == 1){
				cnt++;
			}
		}
	cnt /= 2;
	cout << cnt;
	return 0;
}
