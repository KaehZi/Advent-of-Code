#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream> // Til strengstream
#include <string>

using namespace std;

// Input ./a.out < ./Day1Input.txt 
int main() {
    vector<int> list1, list2;
    int left, right;

    // Take input for both
    while (cin >> left >> right) {
        list1.push_back(left);
        list2.push_back(right);
    }

    // Sort vectors
    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());

    int sumDist = 0;
    for(int i = 0; i < list1.size(); i++) {
        int dist = abs(list1[i] - list2[i]);
        sumDist += dist;
    }

    cout << sumDist;
    cout << endl;

    return 0;
}