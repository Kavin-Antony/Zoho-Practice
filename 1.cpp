#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<char>> res;
    string n;
    cin >> n;

    int j = -1;
    int len = n.length();

    if (len % 2 == 1) {
        for (int i = 0; i < len; i++) {
            vector<char> a(len, ' ');  

            if (i == len / 2) {
                a[i] = n[i];

                for (char c : a) cout << c;
                cout << endl;
            }
            else if (i < len / 2) {
                a[i] = n[i];
                a[len - i - 1] = n[len - i - 1];

                res.push_back(a);

                for (char c : a) cout << c;
                cout << endl;
            }
            else {
                vector<char> temp = res[res.size() + j];

                for (char c : temp) cout << c;
                cout << endl;

                j--;
            }
        }
    }

    return 0;
}