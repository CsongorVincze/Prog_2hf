#ifndef VERTEX_H
#define VERTEX_H

#include <cstdint>
#include <vector>
#include <iostream>

struct vertex{
    std::vector<double> poz{0.0, 0.0};
    std::vector<uint32_t> connected_rod_IDs;
};


#endif







// class vertex{
// private:
//     std::vector<double> pos {0, 0};
//     std::vector<unit32_t> connectedRods;

// public:
//     void init(double a = 0, double b = 0){
//         pos[0] = a; pos[1] = b;
//     }

//     std::vector<double> get_poz() const {
//         return pos;
//     }

//     void print_pos() const {
//         std::cout << pos[0] << ", " << pos[1] << std::endl;
//     }
// };