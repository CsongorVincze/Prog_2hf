#include <iostream>
#include <string>

class Complex{
    private:
        int Re, Im;

    public:
        Complex(int a, int b){ // default constructor
            Re = a;
            Im = b;
        }

        Complex( const Complex& hello ){ // copy constructor
            Re = hello.Re;
            Im = hello.Im;
        }

        Complex operator+ ( const Complex& szia ) const {
            return Complex(Re + szia.Re, Im + szia.Im);
        }

        Complex operator= ( const Complex& ciao ){
            this->Re = ciao.Re;
            this->Im = ciao.Im;
            return *this;
        }

        bool operator== ( const Complex& csao ) const {
            return Re == csao.Re && Im == csao.Im;
        }

        friend std::ostream& operator<< (std::ostream& os, const Complex& szam);
};


std::ostream& operator<<(std::ostream& os, const Complex& szam){
    os << szam.Re << " + " << szam.Im << "i";
    return os;
}


int main (){
    
    Complex maci(2, 3);
    std::cout << maci << std::endl;

    Complex cica(5, -1);
    std::cout << cica << std::endl;

    Complex keverek = maci + cica;

    std::cout << keverek << std::endl;

    std::cout << (maci==cica) << std::endl;

    std::cout << "sziasztok haverok" << std::endl;

    cica = maci;

    std:: cout << "cica:" << cica << "maci:" << maci << std::endl;

    std::cout << (cica==maci) << std::endl;

    return 0;
}