#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;

int main(){
    int t= 100;
    while(t--){
        cout << "t=" << t << endl;
        system("gen.exe");
        system("1.exe < in.in > 1.out");
        system("2.exe < in.in > 2.out");
        if(system("fc 1.out 2.out")) break;
    }
    return 0;
}
