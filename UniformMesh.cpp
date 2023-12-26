#include "UniformMesh.h"

// Constructeur 
UniformMesh::UniformMesh(double t_ini, double t_final, double dt, double x_min, double x_max, double dx)
    : initialTime(t_ini), finalTime(t_final), timeStep(dt),
      initialPosition(x_min), finalPosition(x_max), spaceStep(dx) {}



UniformMesh::~UniformMesh() {}


// Getters
double UniformMesh::getInitialTime() const {
    return initialTime;
}

double UniformMesh::getFinalTime() const {
    return finalTime;
}

double UniformMesh::getTimeStep() const {
    return timeStep;
}

double UniformMesh::getInitialPosition() const {
    return initialPosition;
}

double UniformMesh::getFinalPosition() const {
    return finalPosition;
}

double UniformMesh::getSpaceStep() const {
    return spaceStep;
}

double UniformMesh::getPosition(int index) const {
    return initialPosition + index * spaceStep;
}


double UniformMesh::x_size() const {
    return finalPosition - initialPosition;
}

int UniformMesh::getNumTimePoints() const {
    return static_cast<int>((finalTime - initialTime) / timeStep) + 1;
}

int UniformMesh::getNumSpacePoints() const {
    return static_cast<int>((finalPosition - initialPosition) / spaceStep) + 1;
}
double UniformMesh::x_i(int i) const {
    return initialPosition + i * spaceStep;
}

// Setters
void UniformMesh::setInitialTime(double set_init_time){
    initialTime = set_init_time ;
}

void UniformMesh::setFinalTime(double set_final_time){
    finalTime = set_final_time ;
}
void UniformMesh::setTimeStep(double set_time_step){
    timeStep = set_time_step ;
}

void UniformMesh::setInitialPosition(double set_initial_position){
    initialPosition = set_initial_position ;
}

void UniformMesh::setFinalPosition(double set_final_position){
    finalPosition = set_final_position ;
}

void UniformMesh::setSpaceStep(double set_space_step){
    spaceStep = set_space_step ;
}

void UniformMesh::setPosition(double set_position){
    initialPosition = set_position ;
}

