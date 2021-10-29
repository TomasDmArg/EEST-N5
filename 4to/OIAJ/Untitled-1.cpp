//Create a vector of random numbers and invert it
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        v.push_back(rand() % 100);
    }
    cout << "The vector is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
    cout << "The inverted vector is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
}