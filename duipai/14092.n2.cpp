#include<iostream>
using namespace std;

bool mem[105][105];

int main(){
    int n, cnt = 0;
    int xx1, xx2, yy1, yy2;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> xx1 >> yy1 >> xx2 >> yy2;
        for(int j = xx1 + 1; j <= xx2; j++)
            for(int k = yy1 + 1; k <= yy2; k++)
                mem[j][k] = true;
    }
    for(int i = 0; i < 101; i++)
        for(int j = 0; j < 101; j++)
            cnt += mem[i][j];

    cout << cnt;
    return 0;
}
    
