#ifndef LAXWENDROFF_H
#define LAXWENDROFF_H

#include "IMesh.hpp"
#include "Variable.hpp"

class LaxWendroff {
public:
    template<typename Mesh>
    static void update(double advectionVelocity, const Mesh& mesh, const Variable& u_n, Variable& u_np1);
};

#include "../src/LaxWendroff.cpp"  

#endif 
