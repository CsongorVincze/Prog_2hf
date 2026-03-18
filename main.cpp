#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include "ROD/rod_class.h"
#include "VERTEX/vertex.h"
#include "SIM/sim.h"
using namespace std;

int main(){

    vertex point_1, point_2;

    point_1.poz = {1,1};
    point_2.poz = {2,3};

    sim graph;
    graph.vertex_nums.push_back(point_1);
    graph.vertex_nums.push_back(point_2);

    graph.connect(1, 2);
    graph.print_connections();







    return 0;
}







    // rod a;
    // a.init();
    // cout << a.get_len() << endl;
    // vector<double> veg_1 = a.get_end_1();
    // cout << veg_1[0] << ", " << veg_1[1] << endl;

    // a.set_end_1(3, 5);
    // veg_1 = a.get_end_1();
    // cout << veg_1[0] << ", " << veg_1[1] << endl;
    // cout << a.get_len() << endl;

    // vertex point_1;
    // point_1.init();
    // point_1.print_pos();