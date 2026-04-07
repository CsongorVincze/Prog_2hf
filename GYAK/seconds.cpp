#include <iostream>
#include <stdexcept>



class Seconds {
    private:
        int sec;

    public:
        Seconds(int s = 0){ // default constructor
            sec = s;
        }

        const int GetSec(){
            std::cout << sec << std::endl;
            return sec;
        }

        Seconds& operator++ (){
            this->sec += 1;
            return *this;
        }

        friend Seconds operator++ (Seconds& t, int);
};

Seconds operator++ (Seconds& t, int){
    Seconds most = t;
    t.sec += 1;
    return most;
}



int main(){
    Seconds a(5);
    a.GetSec();

    Seconds e = ++a;
    e.GetSec();
    a.GetSec();

    Seconds b(10);
    b.GetSec();
    Seconds c = b++;
    c.GetSec();
    b.GetSec();
    




    return 0;
}