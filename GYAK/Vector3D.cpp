#include <iostream>
#include <stdexcept>
#include <map>

class Vector {
    private:
        double x;
        double y;
        double z;

    public:
        Vector(double a = 0.0, double b = 0.0, double c = 0.0){ // default consturctor for Vector
            x = a;
            y = b;
            z = c;
        }

        void PrintVec(){
            std::cout << "x:" << x << std::endl;
            std::cout << "y:" << y << std::endl;
            std::cout << "z:" << z << std::endl;
            std::cout << std::endl;
    
        }

        Vector operator+ ( const Vector& masik ) const {
            return Vector( this->x + masik.x, this->y + masik.y, this->z + masik.z );
        }

        Vector operator= ( const Vector& jozsi ) {
            this->x = jozsi.x;
            this->y = jozsi.y;
            this->z = jozsi.z;
            return *this;
        }

        double operator[] ( int index ) const {
            if( index < 0 || index >= 2 ){
                throw std::out_of_range("nem jol van igy");
            }
            switch(index){
                case 0:
                    return x;
                case 1:
                    return y;
                case 2:
                    return z;
            }
        }

        double& operator[] (int index) {
            if(index < 0 || index > 2){
                throw std::out_of_range("igy sem jo te");
            }
            switch(index){
                case 0:
                    return x;
                case 1:
                    return y;
                case 2:
                    return z;
            }

        }

        friend Vector operator* (const double& szam, const Vector& vec);

};

Vector operator* (const double& szam, const Vector& vec){
    return Vector( szam * vec.x, szam * vec.y, szam * vec.z );
}



int main(){

    Vector alma(1.0, 2.0, 3.0);
    alma.PrintVec();

    Vector korte = 2*alma;

    korte.PrintVec();

    alma = 3*alma;

    alma.PrintVec();

    Vector dinnye = alma;

    dinnye.PrintVec();

    try{

        std::cout << "almaskert" << alma[1] << std::endl;
    }

    catch( const std::out_of_range& e ){
        std::cout << e.what() << std::endl;
    }

    alma[0] = 60.0;
    alma.PrintVec();





    return 0;
}