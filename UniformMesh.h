#ifndef UNIFORMMESH_H_
#define UNIFORMMESH_H_


#include "IMesh.h"

class UniformMesh : public IMesh {
public:
    UniformMesh(double t_ini, double t_final, double dt, double x_min, double x_max, double dx);
    ~UniformMesh() override;


    // Getters
    double getInitialTime() const override;
    double getFinalTime() const override;
    double getTimeStep() const override;
    double getInitialPosition() const override;
    double getFinalPosition() const override;
    double getSpaceStep() const override;
    double getPosition(int index) const override;

    // Setters
    void setInitialTime(double set_init_time);
    void setFinalTime(double set_final_time);
    void setTimeStep(double set_time_step);
    void setInitialPosition(double set_initial_position);
    void setFinalPosition(double set_final_position);
    void setSpaceStep(double set_space_step);
    void setPosition(double set_position);
    
    double x_size() const override;
    int getNumTimePoints() const override;
    int getNumSpacePoints() const override;
    double x_i(int i) const override;

private:
    double initialTime;
    double finalTime;
    double timeStep;
    double initialPosition;
    double finalPosition;
    double spaceStep;
};

#endif