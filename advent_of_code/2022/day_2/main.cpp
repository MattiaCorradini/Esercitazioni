#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    int perso=0, pari=3, vinto=6;
    int sasso=1, carta=2, forbice=3;
    int punteggio=0;
    string s;
    while (getline(in, s)){
        if (s.at(2)=='X' && s.at(0)=='C')
            punteggio += (carta+perso);
        if (s.at(2)=='Y' && s.at(0)=='A')
            punteggio += (sasso+pari);
        if (s.at(2)=='Z' && s.at(0)=='B')
            punteggio += (forbice+vinto);
        if (s.at(2)=='X' && s.at(0)=='B')
            punteggio += (sasso+perso);
        if (s.at(2)=='Y' && s.at(0)=='C')
            punteggio += (forbice+pari);
        if (s.at(2)=='Z' && s.at(0)=='A')
            punteggio += (carta+vinto);
        if (s.at(2)=='X' && s.at(0)=='A')
            punteggio += (forbice+perso);
        if (s.at(2)=='Y' && s.at(0)=='B')
            punteggio += (carta+pari);
        if (s.at(2)=='Z' && s.at(0)=='C')
            punteggio += (sasso+vinto);
    }
    cout<<punteggio;
    return 0;
}

/*
    ifstream in("input.txt");
    int perso=0, pari=3, vinto=6;
    int sasso=1, carta=2, forbice=3;
    int punteggio=0;
    string s;
    while (getline(in, s)){
        if (s.at(2)=='X' && s.at(0)=='C')
            punteggio += (sasso+vinto);
        if (s.at(2)=='Y' && s.at(0)=='A')
            punteggio += (carta+vinto);
        if (s.at(2)=='Z' && s.at(0)=='B')
            punteggio += (forbice+vinto);
        if (s.at(2)=='X' && s.at(0)=='B')
            punteggio += (sasso+perso);
        if (s.at(2)=='Y' && s.at(0)=='C')
            punteggio += (carta+perso);
        if (s.at(2)=='Z' && s.at(0)=='A')
            punteggio += (forbice+perso);
        if (s.at(2)=='X' && s.at(0)=='A')
            punteggio += (sasso+pari);
        if (s.at(2)=='Y' && s.at(0)=='B')
            punteggio += (carta+pari);
        if (s.at(2)=='Z' && s.at(0)=='C')
            punteggio += (forbice+pari);
    }
    cout<<punteggio;
 */