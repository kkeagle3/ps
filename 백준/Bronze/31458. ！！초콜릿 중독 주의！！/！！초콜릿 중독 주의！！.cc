#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string line;
        cin >> line;
        int j=0;
        while (line[j] == '!')
            j++;
        if (line.length() - j - 1 == 0) {
            if (j % 2 == 0)
                cout << line[j] << "\n";
            else {
                if (line[j] == '0')
                    cout << 1 << "\n";
                else
                    cout << 0 << "\n";
            }
        }
        else {
            if (j % 2 == 0)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
    }
}