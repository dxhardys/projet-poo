#ifndef UPWIND_H_
#define UPWIND_H_


#include "IMesh.h"
#include "Variable.h"

class Upwind {
public:
    template <typename MeshType>
    static void update(double advectionVelocity, const MeshType& mesh, const Variable& u_n, Variable& u_np1);
};

#endif