#include <iostream>


int* negval( const int* tomb, int meret, int& uj_meret ){
    uj_meret = 0;
    for(int i = 0; i < meret; i++){
        if(tomb[i] < 0) uj_meret++;
    }
    int* neg_tomb = new int[uj_meret];

    int j = 0;
    for(int i = 0; i < meret; i++){
        if(tomb[i] < 0) neg_tomb[j] = tomb[i]; j++;
    }
    return neg_tomb;
}


double* negval( const double* tomb, int meret, int& uj_meret ){
    uj_meret = 0;
    for(int i = 0; i < meret; i++){
        if(tomb[i] < 0) uj_meret++;
    }

    double* neg_tomb = new double[uj_meret];

    int j = 0;
    for(int i = 0; i < meret; i++){
        if(tomb[i] < 0) neg_tomb[j] = tomb[i]; j++;
    }
    return neg_tomb;
}

int main(){

    const int tomb_1[] = {1, -3, -5}; int uj_meret_1 = 0;
    const double tomb_2[] = {1.4, 5.3, -6.4}; int uj_meret_2 = 0;

    int* res_1 = negval( tomb_1, 3, uj_meret_1 );
    double* res_2 = negval( tomb_2, 3, uj_meret_2 );

    delete[] res_1;
    delete[] res_2;





    return 0;
}
