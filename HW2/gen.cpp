#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(NULL));
    
    int n = 50 + rand() % 100;
    int pri = 1;

    cout << n << '\n';

    // arrival time
    for (int i = 0; i < n; i ++)
        cout << rand() % 1000 << ' ';
    cout << '\n';

    // burst time
    for (int i = 0; i < n; i ++)
        cout << rand() % 1000 << ' ';
    cout << '\n';

    // priority
    for (int i = 0; i < n; i ++)
        if (pri) cout << rand() % 20 << ' ';
    if (pri) cout << '\n';
}
