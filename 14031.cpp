#include<iostream>
using namespace std;

int main(void){
	int n;
	int mem[505];
	int cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> mem[i];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(mem[i] + mem[j] == 0) cnt++;
	cnt /= 2;
	cout << cnt;
	return 0;
}
