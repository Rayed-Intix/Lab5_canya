#include <iostream>
#include "solver.h"

using namespace std;

int main() {
    solver solver;
    int option;

    do {
        cout << "Enter Number Of Task : \n"
                "1 - Reccur2\n"
                "2 - Reccur17\n"
                "3 - MinMax27\n";
        cin >> option;
        switch (option) {
            case 1:
                solver.Reccur2();
            break;
            case 2:
                solver.Reccur17();
            break;
            case 3:
                solver.MinMax27();
            break;
            default:
                cerr << "Invalid option.\n\n\n";
        }

    }while (option < 1 || option > 3);

    return 0;
}
