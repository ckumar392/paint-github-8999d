#include <iostream>
#include <string>

using namespace std;

string findWinner(int N, const string& s) {
    int gc = 0;
    int vc = 0;

    for (int i = 0; i < N; ++i) {
        if (s[i] <= 'A') gc++;
        else vc++;
    }

    if (gc > vc) return "Gaju";
    else return "Viju";
}

int main() {
    // Input
    int N;
    cout << "Enter the size of the input string: ";
    cin >> N;

    string inputString;
    cout << "Enter the string of lowercase characters: ";
    cin >> inputString;

    // Validate input
    if (N != inputString.length()) {
        cout << "Invalid input. Please make sure the size matches the length of the string." << endl;
        return 1;
    }

    // Output
    string winner = findWinner(N, inputString);
    cout << "The winner is: " << winner << endl;

    return 0;
}
