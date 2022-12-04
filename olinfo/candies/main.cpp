// NOTE: it is recommended to use this even if you don't understand the following code.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // uncomment the following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    long long s= 0;
    sort(S.begin(), S.end());
    long long c=1;
    for (int i = 0; i < N; ++i) {
        if (S[i]==S[i+1]){
            s+=c;
        }
        else{
            s+=c;
            c++;
        }
    }

    cout << s << endl; // print the result
    return 0;
}