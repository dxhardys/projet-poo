#ifndef VARIABLE_H_
#define VARIABLE_H_

#include <vector>
#include <memory>

class IMesh;

class Variable {
public:
    Variable(std::shared_ptr<const IMesh> meshPtr);

    double& operator[](int i);
    double operator[](int i) const;
    size_t size() const;

private:
    std::shared_ptr<const IMesh> meshPtr;
    std::vector<double> values;
};


#endif