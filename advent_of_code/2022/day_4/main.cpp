#include <iostream>
#include <fstream>

using namespace std;

struct nome{
    int i;
    int f;
};

int main() {
    string s;
    nome p;
    nome d;
    int somma=0;
    ifstream in("input.txt");
    while (in >> p.i >> p.f >> d.i >> d.f){
        if (p.i >= d.i && p.f <= d.f)
            somma ++;
        else if (d.i >= p.i && d.f <= p.f)
            somma ++;
        else if ()
    }
    cout <<somma;
    return 0;
}

/*
struct nome{
    int i;
    int f;
};

int main() {
    string s;
    nome p;
    nome d;
    int somma=0;
    ifstream in("input.txt");
    while (in >> p.i){
        in >> p.f;
        in >> d.i;
        in >> d.f;
        if (p.i >= d.i && p.f <= d.f)
            somma ++;
        else if (d.i >= p.i && d.f <= p.f)
            somma ++;
    }
    cout <<somma;
    return 0;
}
 */
