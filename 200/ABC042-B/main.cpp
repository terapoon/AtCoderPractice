#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    for (int i=0; i<N; i++)
        cin >> S[i];
    sort(S.begin(), S.end());
    string output = "";
    for (int i=0; i<N; i++)
        output += S.at(i);
    cout << output << endl;
    return 0;
}
