#include <memory>
#include <thread>
#include "IMesh.h"
#include "UniformMesh.h"
#include "Equation.h"
#include "LaxWendroff.h"
#include "Timer.h"

int main(int argc, char *argv[]) {

    if (argc != 7) {
        std::cerr << "Usage: " << argv[0] << " [t_init] [t_final] [dt] [x_min] [x_max] [dx]" << std::endl;
        return 1;
    }
    // Conversion des arguments en valeurs doubles
    double arg1 = std::stod(argv[1]);
    double arg2 = std::stod(argv[2]);
    double arg3 = std::stod(argv[3]);
    double arg4 = std::stod(argv[4]);
    double arg5 = std::stod(argv[5]);
    double arg6 = std::stod(argv[6]);
    
    // Instanciation 
    std::shared_ptr<IMesh> myMesh = std::make_shared<UniformMesh>(arg1, arg2, arg3, arg4, arg5, arg6);
    
    //0 2 1 0 10 0.1
    // Initialisation des Timer
    Timer total_time, loop_time;
    
    // Début Timer générale
    total_time.start(); 

    // Instanciation de Equation
    Equation myEquation(myMesh, 1.0);


    std::thread first_thread([myMesh,&myEquation](){
            // do something : compute exact solution
            // Calcul de la condition Initial
            Variable u_n(myMesh);
            myEquation.setInitialCondition(u_n);
    });



    // Début Timer de la boucle 
    loop_time.start();


    std::thread second_thread([myMesh,&myEquation](){
        //  do something : compute approximate solution
        myEquation.computeTimeLoop(myMesh);
    });


    

    // Fin Timer de la boucle
    loop_time.stop();

    // Fin timer Générale
    total_time.stop();


    first_thread.join();
    second_thread.join();
    // Affichage des résultas
    total_time.print("Temps total");
    loop_time.print("Temps de la boucle");

    return 0;
}

