#include<iostream>
using namespace std;

int mem[105][105];

int main(){
    int n, cnt = 0;
    int xx1, xx2, yy1, yy2, tmp;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> xx1 >> yy1 >> xx2 >> yy2;
        mem[xx1][yy1]++, mem[xx1][yy2]--, mem[xx2][yy1]--, mem[xx2][yy2]++;
    }

    tmp = 0;
    for(int i = 0; i < 101; i++){
        tmp += mem[0][i];
        mem[0][i] = tmp;
    }
    tmp = 0;
    for(int i = 0; i < 101; i++){
        tmp += mem[i][0];
        mem[i][0] = tmp;
    }

    for(int i = 1; i < 101; i++)
        for(int j = 1; j < 101; j++)
            mem[i][j] += mem[i-1][j] + mem[i][j-1] - mem[i-1][j-1];

    for(int i = 0; i < 101; i++)
        for(int j = 1; j < 101; j++)
            if(mem[i][j] > 0) cnt++;

    cout << cnt;
    return 0;
}
