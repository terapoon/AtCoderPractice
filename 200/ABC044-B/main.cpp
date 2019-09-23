#include <bits/stdc++.h>
using namespace std;

int main() {
    string w;
    cin >> w;
    long long flag = 0;
    for (int i=0; i<w.size(); i++) {
        if (w[i]=='a') 
            flag ^= 0b10000000000000000000000000;
        else if (w[i]=='b')
            flag ^= 0b1000000000000000000000000;
        else if (w[i]=='c')
            flag ^= 0b100000000000000000000000;
        else if (w[i]=='d')
            flag ^= 0b10000000000000000000000;
        else if (w[i]=='e')
            flag ^= 0b1000000000000000000000;
        else if (w[i]=='f')
            flag ^= 0b100000000000000000000;
        else if (w[i]=='g')
            flag ^= 0b10000000000000000000;
        else if (w[i]=='h')
            flag ^= 0b1000000000000000000;
        else if (w[i]=='i')
            flag ^= 0b100000000000000000;
        else if (w[i]=='j')
            flag ^= 0b10000000000000000;
        else if (w[i]=='k')
            flag ^= 0b1000000000000000;
        else if (w[i]=='l')
            flag ^= 0b100000000000000;
        else if (w[i]=='m')
            flag ^= 0b10000000000000;
        else if (w[i]=='n')
            flag ^= 0b1000000000000;
        else if (w[i]=='o')
            flag ^= 0b100000000000;
        else if (w[i]=='p')
            flag ^= 0b10000000000;
        else if (w[i]=='q')
            flag ^= 0b1000000000;
        else if (w[i]=='r')
            flag ^= 0b100000000;
        else if (w[i]=='s')
            flag ^= 0b10000000;
        else if (w[i]=='t')
            flag ^= 0b1000000;
        else if (w[i]=='u')
            flag ^= 0b100000;
        else if (w[i]=='v')
            flag ^= 0b10000;
        else if (w[i]=='w')
            flag ^= 0b1000;
        else if (w[i]=='x')
            flag ^= 0b100;
        else if (w[i]=='y')
            flag ^= 0b10;
        else
            flag ^= 0b1;
    }
    if (flag==0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
