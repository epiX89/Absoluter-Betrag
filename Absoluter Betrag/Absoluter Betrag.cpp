// Absoluter Betrag.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
int main()
{
    double zahl;
    cout << "Zahl: ";
    cin >> zahl;
    double absolut;
    if (zahl < 0) {
        absolut = zahl * -1;
    }
    else {
        absolut = zahl;
    }
    cout << "Absoluter Wert von " << zahl << " ist " << absolut << endl;
    return 0;
}