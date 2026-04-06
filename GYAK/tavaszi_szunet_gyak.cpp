#include <iostream>
#include <string>

class Student {
private:
    std::string Name;
    int Neptun_credits;

public:
    Student(){
        Name = "mittomen";
        Neptun_credits = 0;
        std::cout << "Default constructor called!" << std::endl;
    }

    Student( std::string nev, int credits ){
        Name = nev;
        Neptun_credits = credits;
        std::cout << "Parameterized constructor called!" << std::endl;
    }
};

int main(){


    Student szia;

    Student hello("Bence", 50);


    return 0;
}