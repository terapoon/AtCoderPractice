#include <bits/stdc++.h>
using namespace std;

int main() {
    string command;
    cin >> command;
    string output = "";
    for (int i=0; i<command.size(); i++) {
        if (command[i]=='0')
            output += '0';
        else if (command[i]=='1')
            output += '1';
        else {
            if (output.size()>0) {
                string buf = output;
                output = "";
                for (int i=0; i<buf.size()-1; i++)
                    output += buf[i];
            }
        }
    }
    cout << output << endl;
    return 0;
}
