#include <iostream>
#include <vector>
#include <cmath>
#include "rod_class.h"
using namespace std;

int main(){
    rod a;
    a.init();
    cout << a.get_len() << endl;
    vector<double> veg_1 = a.get_end_1();
    cout << veg_1[0] << ", " << veg_1[1] << endl;

    a.set_end_1(3, 5);
    veg_1 = a.get_end_1();
    cout << veg_1[0] << ", " << veg_1[1] << endl;
    cout << a.get_len() << endl;



    return 0;
}