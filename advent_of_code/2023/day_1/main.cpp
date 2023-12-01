#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n = 0;
    ifstream in("input.txt");
    string s;
    while (getline(in, s)){
        string c;
        for (char i : s) {
            if (isdigit(i)){
                c += i;
                break;
            }
        }
        for (int i = s.size()-1; i >= 0; --i) {
            if (isdigit(s.at(i))){
                c += s.at(i);
                break;
            }
        }
        n += stoi(c);
    }
    cout <<n;
    return 0;
}
