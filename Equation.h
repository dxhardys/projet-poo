#ifndef EQUATION_H_
#define EQUATION_H_

#include "IMesh.h"
#include "Upwind.h"
#include "Variable.h"  

class Equation {
public:
    Equation(std::shared_ptr<IMesh> meshPtr, double advectionVelocity);
    Equation(); 
    ~Equation();

    void setInitialCondition(Variable& variable);
    void compute(Variable& u_n, Variable& u_np1);
    void compute_initial_condition(Variable& variable);
    void compute_exact_solution(const std::shared_ptr<IMesh>& meshPtr, Variable& u_ref, double t);
    void computeTimeLoop(std::shared_ptr<IMesh> meshPtr);

    

    template <typename Scheme>
    void compute_for_scheme(double t, const std::shared_ptr<IMesh>& meshPtr, Variable& u_n, Variable& u_np1);

private:
    std::shared_ptr<IMesh> mesh;
    double advectionVelocity;
};

#endif  

