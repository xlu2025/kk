#include "simulation.hpp"
#include <iostream>

int main() {
    int rows = 100;
    int cols = 100;
    int time_steps =0; 
    cout << "Please input the num of time_steps";
    cin >> time_steps;// input any number of steps you want to simulate

    Simulation sim(rows, cols, time_steps);
    sim.initialize();
    sim.simulate();

    return 0;
}
