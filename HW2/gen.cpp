#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(NULL));
    
    int n = 5 + rand() % 10;
    vector<int> pri(n);

    cout << n << '\n';

    // arrival time
    for (int i = 0; i < n; i ++) {
        cout << rand() % 1000 << ' ';
        pri[i] = i;
    }
    cout << '\n';

    // burst time
    for (int i = 0; i < n; i ++)
        cout << 5 + rand() % 1000 << ' ';
    cout << '\n';

    // priority
    random_shuffle(pri.begin(), pri.end());
    for (int i = 0; i < n; i ++)
        cout << pri[i] << ' ';
    cout << '\n';
}
