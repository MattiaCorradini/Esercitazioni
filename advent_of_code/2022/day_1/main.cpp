#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int somma=0;
    //int massimo=0;
    ifstream in("input.txt");
    string n;
    vector<int> v;
    while (getline(in, n)){
        if (n==""){
            v.push_back(somma);
            somma=0;
        }
        else
            somma+= stoi(n);
    }
    v.push_back(somma);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v.at(0)+v.at(1)+v.at(2);
    return 0;
}
