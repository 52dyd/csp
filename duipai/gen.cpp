#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(){
    int n, tmp[4];
    freopen("in.in", "w", stdout);
    srand(time(0));
    n = 50;
    cout << n << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++)
            tmp[j] = rand() % 100;
       sort(tmp, tmp + 2);
       sort(tmp + 2, tmp + 4);
       cout << tmp[0] << ' ' << tmp[2] << ' ' << tmp[1] << ' ' << tmp[3] << endl;
    }
   return 0;
}
