#include <iostream>
using namespace std;
int main() {
    int n, medio, i, pro, deb, somma;
    double media;

    pro = 0;
    deb = 0;
    somma = 0;
    media = 0;
    int nome;

    cout << "quanti studenti ci sono in classe" << endl;
    cin >> n;
    while (n < 0) {
        cout << "non valgono valori negativi" << endl;
        cin >> n;
    }
    int stud[n];

    for (i = 1; i <= n; i++) {
        cout << "qual è il tuo nome" << endl;
        cin >> nome;
        cout << "qual è il tuo voto medio in informatica" << endl;
        cin >> medio;
        somma = somma + medio;
        if (medio < 6) {
            cout << nome << " prenderà il debito" << endl;
            deb = deb + 1;
        } else {
            cout << nome << "non prederà il debito" << endl;
            pro = pro + 1;
        }
    }
    cout << "in totale" << pro << "studenti saranno promossi/e" << deb << "saranno bocciati" << endl;
    media = (double) somma / n;
    cout << "la media totale della classe è" << media << endl;
    return 0;
}
