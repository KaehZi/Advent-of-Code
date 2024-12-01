#include <iostream>
#include <vector>
using namespace std;

// Funktion til at tælle optrædener i en liste
int countOccurrences(const vector<int>& list, int value) {
    int count = 0;
    for (int num : list) {
        if (num == value) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> listLeft, listRight;

    // Læs data fra terminalen
    int leftValue, rightValue;
    while (cin >> leftValue >> rightValue) {
        listLeft.push_back(leftValue);
        listRight.push_back(rightValue);
    }

    // Beregn similarity score
    int similarityScore = 0;
    for (int value : listLeft) {
        int occurrences = countOccurrences(listRight, value);
        similarityScore += value * occurrences;
    }

    // Udskriv resultatet
    cout << "Similarity score: " << similarityScore << endl;

    return 0;
}
