#include <cassert>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int presta(int N, int C, vector<int> P){
    sort(P.begin(), P.end());
    int amici=1, somma=0;
    for (int i = N-1; i >= 0; i--) {
        somma+=P[i];
        if (somma<C)
            amici ++;
        else
            break;
    }
    return amici;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, C;
    assert(cin >> N);
    assert(cin >> C);

    vector<int> P(N);
    for (int& p : P) {
        assert(cin >> p);
    }
    cout << presta(N, C, move(P)) << "\n";
}
