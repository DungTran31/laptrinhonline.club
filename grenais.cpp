#include <iostream>
using namespace std;
int main() {
    int interScore, gremioScore, numGrenais = 0, interWins = 0, gremioWins = 0, draws = 0;

    do {
        cin >> interScore;
        cin >> gremioScore;

        if (interScore > gremioScore) {
            interWins++;
        } else if (gremioScore > interScore) {
            gremioWins++;
        } else {
            draws++;
        }

        numGrenais++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        int choice;
        cin >> choice;

        if (choice != 1) {
            break;
        }
    } while (true);

    cout << numGrenais << " grenais" << endl;
    cout << "Inter:" << interWins << endl;
    cout << "Gremio:" << gremioWins << endl;
    cout << "Empates:" << draws << endl;

    if (interWins > gremioWins) {
        cout << "Inter venceu mais" << endl;
    } else if (gremioWins > interWins) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
