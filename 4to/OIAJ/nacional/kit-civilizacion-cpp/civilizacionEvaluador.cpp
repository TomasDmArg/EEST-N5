#include <iostream>
#include <string>
#include <vector>

using namespace std;

int civilizacion(int N, vector<vector<int>> &palabras, vector<int> &vocales, vector<int> &consonantes);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int M;
    cin >> M;
    vector<vector<int>> palabras;
    palabras.resize(M);
    for (int i0 = 0; i0 < M; i0++) {
        int auxSize1;
        cin >> auxSize1;
        palabras[i0].resize(auxSize1);
        for (int i1 = 0; i1 < auxSize1; i1++) {
            cin >> palabras[i0][i1];
        }
    }
    vector<int> vocales;
    vocales.resize(0);
    vector<int> consonantes;
    consonantes.resize(0);
    int returnedValue;
    returnedValue = civilizacion(N, palabras, vocales, consonantes);
    cout << returnedValue << "\n";
    for (int i = 0; i < int(vocales.size()); i++) {
        if (i > 0) cout << " ";
        cout << vocales[i];
    }
    cout << "\n";
    for (int i = 0; i < int(consonantes.size()); i++) {
        if (i > 0) cout << " ";
        cout << consonantes[i];
    }
    cout << "\n";
    return 0;
}
