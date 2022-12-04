#include <iostream>

using namespace std;

int N, M, E;

int main() {

    cin >> N >> M >> E;

    int K=0;
    for(int i=M; i<=N; ++i){
        int s = E%i;
        if(s>K)
            K=s;
    }

    cout << K << endl;
    return 0;
}
