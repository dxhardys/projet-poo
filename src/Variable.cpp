#include "../include/Variable.hpp"
#include "../include/IMesh.hpp"
#include "../include/Upwind.hpp"

Variable::Variable(std::shared_ptr<const IMesh> meshPtr) : meshPtr(meshPtr), values(meshPtr->getNumSpacePoints(), 0.0) {}

double& Variable::operator[](int i) {
    return values[i];
}

double Variable::operator[](int i) const {
    return values[i];
}

size_t Variable::size() const {
    return values.size();
}

