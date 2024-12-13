#ifndef PROBLEM_H_
#define PROBLEM_H_

#include "Equation.hpp"
#include <memory>

class Problem {
public:
    Problem(std::shared_ptr<IMesh> meshPtr, double advectionVelocity);

    void solve();
    void solve_parallel();
    void solveTimeLoop(std::shared_ptr<IMesh> meshPtr);

private:
    std::shared_ptr<IMesh> mesh;
    Equation equation;
};

#endif