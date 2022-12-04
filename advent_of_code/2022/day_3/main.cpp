#include <iostream>
#include <fstream>

using namespace std;

int posizione(char q){
    if (q>='a' && q<='z')
        return q - 'a' + 1;
    return  q - 'A' + 27;
}

int main() {
    ifstream in("input.txt");
    int somma=0;
    string a[3];
    while (in >> a[0] >> a[1] >> a[2]){
        bool flag = false;
        for (int i = 0; i < a[0].size(); ++i) {
            for (int j = 0; j < a[1].size(); ++j) {
                if (a[0].at(i) == a[1].at(j)){
                    for (int k = 0; k < a[2].size(); ++k) {
                        if (a[0].at(i) == a[2].at(k)) {
                            somma += posizione(a[0].at(i));
                            flag = true;
                            break;
                        }
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
    }
    cout <<somma;
    return 0;
}

/*
    ifstream in("input.txt");
    string s;
    int somma=0;
    string a, b;
    while (getline(in, s)){
        int meta=s.size()/2;
        for (int i = 0; i < meta; ++i) {
            a += s.at(i);
        }
        for (int i = meta; i < s.size(); ++i) {
            b += s.at(i);
        }
        bool flag = false;
        for (int i = 0; i < a.size(); ++i) {
            for (int j = 0; j < a.size(); ++j) {
                if (a.at(i)==b.at(j)){
                    somma += posizione(a.at(i));
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        a.erase();
        b.erase();
    }
    cout <<somma;
 */
