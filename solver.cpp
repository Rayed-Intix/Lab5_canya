//
// Created by bykov on 19.10.2024.
//

#include "solver.h"

using namespace std;

void solver::Reccur2() {
    int num;
    cout << "Enter Number : " << endl;
    cin >> num;
    cout << "Sum of Digits of Number : " << SumOfDigits(num) << endl;

}

void solver::Reccur17() {
    int amount;
    cout << "Enter Amount of Iterations : " << endl;
    cin >> amount;
    cout << "Sum of Series : " << SumOfSeries(1, amount) << endl;
}

void solver::MinMax27() {
    int amount, length = 1, temp_len = 1, pos = 1, temp_pos = 1;
    bool prev, curr;
    cout << "Enter Amount of Numbers : " << endl;
    cin >> amount;

    cout << "Enter Series : " << endl;
    cin >> prev;
    for (int i = 1; i < amount; i++) {
        cin >> curr;
        if (curr == prev) {
            temp_len++;
            if (temp_len > length) {
                length = temp_len;
                pos = temp_pos;
            }
        }
        if (curr != prev) {
            temp_len = 1;
            temp_pos = i + 1;
        }
        prev = curr;
    }
    cout << "Number of the First Element of Longest Series : " << pos << endl;
    cout << "Length of longest Series : " << length << endl;
}

int solver::SumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + SumOfDigits(num / 10);
}

float solver::SumOfSeries(int iter, int max_iter) {
    if (iter > max_iter) {
        return 0;
    }
    return ((float)(iter + 1) / iter) + SumOfSeries(iter + 1, max_iter);
}
