#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// Funkcja do liczenia liter w tekście
void policz_litery(const string& tekst, vector<int>& licznik_liter) {
    for (char znak : tekst) {
        if (isalpha(znak)) { // Sprawdzamy, czy znak jest literą
            char mala_litera = tolower(znak); // Zamieniamy na małą literę
            licznik_liter[mala_litera - 'a']++; // Zwiększamy odpowiedni licznik
        }
    }
}

// Funkcja do wyświetlania wyników
void wyswietl_licznik(const vector<int>& licznik_liter) {
    for (size_t i = 0; i < licznik_liter.size(); ++i) {
        cout << static_cast<char>('a' + i) << ": " << licznik_liter[i] << endl;
    }
}

int main() {
    string tekst;
    cout << "Podaj tekst: ";
    getline(cin, tekst); // Pobieramy cały wiersz tekstu

    vector<int> licznik_liter(26, 0); // Wektor na liczniki liter, zainicjowany zerami

    policz_litery(tekst, licznik_liter); // Liczymy litery
    wyswietl_licznik(licznik_liter);    // Wyświetlamy wynik

    return 0;
}
 
