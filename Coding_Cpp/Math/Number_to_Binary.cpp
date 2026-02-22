#include <iostream>
using namespace std;

void toBinary(int n) {
    if (n > 1) toBinary(n / 2);
    cout << n % 2;
}

int main() {
    string a = "2080-02-29";
    int n = stoi(a);
    toBinary(n);
}
