#ifndef SIM_H
#define SIM_H

#include <cstdint>
#include <vector>
#include <iostream>

class sim{
    public:
        std::vector<rod> rods;
        std::vector<vertex> vertex_nums;

        void connect(uint32_t id_a, uint32_t id_b){
            rod newrod;
            newrod.endID_A = id_a;
            newrod.endID_B = id_b;

            rods.push_back(newrod);
            vertex_nums[id_a].connected_rod_IDs.push_back(rods.size() - 1);
            vertex_nums[id_b].connected_rod_IDs.push_back(rods.size() - 1);
        }

        void print_connections () const {
            for(int i = 0; i < rods.size(); i++){
                std::cout << "connected points:" << rods[i].endID_A << ", " << rods[i].endID_B << std::endl;
            }
        }

};

#endif