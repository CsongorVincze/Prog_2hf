#ifndef ROD_H
#define ROD_H

#include <cstdint>
#include <vector>

struct rod {
    uint32_t endID_A;
    uint32_t endID_B;
    double m = 1; // mass of the rod
    double E = 1; //Young's modulus of the rod
};

#endif










// class rod{
// private:
//     // std::vector<double> end_1 {0, 0}; // The first endpoint of the rod
//     // std::vector<double> end_2 {1, 1}; // The second endpoint of the rod
//     unit32_t endID_A;
//     unit32_t endID_B;
//     double m; // mass of the rod
//     double E; //Young's modulus of the rod

// public:
//     void init(double a = 0.0, double b = 0.0, double c = 1.0, double d = 1.0, double m_ = 1, double E_ = 2){//!
//         end_1[0] = a;
//         end_1[1] = b;
//         end_2[0] = c;
//         end_2[1] = d;
//         m = m_;
//         E = E_;

//     }

//     // basic mathematical parameters, functions of one rod
//     std::vector<double> get_end_1() const {return end_1;}
//     std::vector<double> get_end_2() const {return end_2;}
//     double get_len() const;
//     void set_mass(double a) {m = a;}
//     void set_end_1(double a, double b){end_1[0] = a; end_1[1] = b;}
//     void set_end_2(double c, double d){end_2[0] = c; end_2[1] = d;}

//     // Physical parameters, functions of one rod
//     double get_mass() const {return m;}
//     double get_young() const {return E;}
// };