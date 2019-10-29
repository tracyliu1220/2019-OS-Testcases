#include <bits/stdc++.h>
using namespace std;

struct P {
    int id;
    int arrival;
    int burst;
};

vector<P> p;
vector<int> pri;

int main() {
    srand(time(NULL));

    // total = n * seq
    int seq = 3 + rand() % 20;
    int n = 1 + rand() % 10;
    int qn = 3 + rand() % 30;

    cout << n * seq << '\n';
    p.resize(seq * n);
    pri.resize(seq * n);

    int timer = rand() % 100;
    for (int i = 0; i < n; i ++) {
        int base = timer;
        int buf = 0;
        int last = 0;
        for (int j = 0; j < seq; j ++) {
            int idx = seq * i + j;
            p[idx].id = idx;
            p[idx].burst = rand() % 50 + 1;
            if (j == 0) p[idx].arrival = base;
            else {
                p[idx].arrival = base + rand() % buf;
            }
            buf += min(qn, p[idx].burst);
            last += p[idx].burst;

            pri[idx] = idx;
        }
        timer += last + 5 + rand() % 100;
    }

    // random_shuffle(p.begin(), p.end());

    for (int i = 0; i < seq * n; i ++) {
        cout << p[i].arrival << ' ';
    }
    cout << '\n';
    for (int i = 0; i < seq * n; i ++) {
        cout << p[i].burst << ' ';
    }
    cout << '\n';

    random_shuffle(pri.begin(), pri.end());
    for (int i = 0; i < seq * n; i ++) {
        cout << pri[i] << ' ';
    }
    cout << '\n';
    cout << qn << '\n';
}

