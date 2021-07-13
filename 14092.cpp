#include<iostream>
using namespace std;

int memx[105], memy[105];

int main(void){
    int n, tmp, cnt;
    int xx1, xx2, yy1, yy2;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> xx1 >> yy1 >> xx2 >> yy2;
        memx[xx1]++, memx[xx2 + 1]--, memy[yy1]++, memy[yy2 + 1]--;
    }

    tmp = 0;
    for(int i = 0; i < 100; i++){
        tmp += memx[i];
        memx[i] = tmp;
    }
    tmp = 0;
    for(int i = 0; i < 100; i++){
        tmp += memy[i];
        memy[i] = tmp;
    }
    
    cnt = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(memx[i] > 0 && memy[j] > 0) cnt++;
        }
    }

    cout << cnt;
    return 0;
}
