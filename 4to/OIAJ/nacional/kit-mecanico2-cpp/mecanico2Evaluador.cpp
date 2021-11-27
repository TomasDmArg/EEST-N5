#include <iostream>
#include <string>
#include <vector>
#include "mecanico2.cpp"
using namespace std;

int mecanico(int X, vector<int> &t);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X;
    cin >> X;
    int N;
    cin >> N;
    vector<int> t;
    t.resize(N);
    for (int i0 = 0; i0 < N; i0++) {
        cin >> t[i0];
    }
    int returnedValue;
    returnedValue = mecanico(X, t);
    cout << returnedValue << "\n";
    return 0;
}
