#include <iostream>
#include <random>
#include <time.h>

using namespace std;
int main() {

    int playerPoints = 0;
    int computerPoints = 0;

    int maxRounds = 6;
    int round = 1;

    while (round < maxRounds) {
        srand(time(NULL));
        int value;

        cout << "Round numero " << round << endl;
        cout << "Inserisci un valore tra 6 e 12: ";
        cin >> value;

        while (value < 6 || value > 12) {
            cout << "Valore non valido, inseriscine uno tra 6 e 12: ";
            cin >> value;
        }

        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        int computerValue = dice1 + dice2;

        if (computerValue >= value) {
            cout << "Il computer ha scelto " << computerValue << " questo round è stato vinto da lui.";
            computerPoints++;
        } else {
            cout << "Il computer ha scelto " << computerValue << " questo round hai vinto te.";
            playerPoints++;
        }

        cout << endl;

        cout << "Punti Attuali: " << endl;
        cout << "Player: " << playerPoints << endl;
        cout << "Computer: " << computerPoints << endl;

        round++;
    }

    cout << "Fine del gioco." << endl;
    if (playerPoints > computerPoints) cout << "Hai vinto!";
    else if (playerPoints < computerPoints) cout << "Il computer ha vinto!";
    else cout << "Avete pareggato!";

    return 0;
}