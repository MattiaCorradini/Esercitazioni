// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// input data
int N, i;
vector<int> D;

int main() {
//  uncomment the following lines if you want to read/write from files
//  ifstream cin("input.txt");
//  ofstream cout("output.txt");

    cin >> N;
    D.resize(N);
    for (int i=0; i<N; i++)
        cin >> D[i];

    bool yes;
    sort(D.begin(), D.end());
    for (int j = 1; j < N; ++j) {
        if (D[j-1]<D[j])
            yes= true;
        else{
            yes=false;
            break;
        }
    }

    if (yes)
        cout << "Ok" <<endl;
    else
        cout << "Impossible" <<endl;

    return 0;
}
