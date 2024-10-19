//
// Created by bykov on 19.10.2024.
//

#include <iostream>

#ifndef SOLVER_H
#define SOLVER_H



class solver {
public:
    void Reccur2();
    void Reccur17();
    void MinMax27();
private:
    int SumOfDigits(int num);
    float SumOfSeries(int iter, int max_iter);
};



#endif //SOLVER_H
