#ifndef UPWIND_H_
#define UPWIND_H_


#include "IMesh.hpp"
#include "Variable.hpp"

class Upwind {
public:
    template <typename MeshType>
    static void update(double advectionVelocity, const MeshType& mesh, const Variable& u_n, Variable& u_np1);
};

#endif