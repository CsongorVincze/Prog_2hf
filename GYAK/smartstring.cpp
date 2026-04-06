#include <iostream>
#include <cstring>

class SmartString{
    private:
        int length;
        char* buffer;

    public:
        SmartString(const char* input = ""){
            length = strlen(input);
            buffer = new char[length + 1];
            strcpy(buffer, input);
        }

        ~SmartString(){
            delete[] buffer;
        }

        SmartString(const SmartString& kende){
            length = kende.length;
            buffer = new char[length + 1];
            strcpy(buffer, kende.buffer);
        }

        SmartString& operator= (const SmartString& peti){
            if(this == &peti){
                return *this;
            }
            delete[] this->buffer;
            length = peti.length;
            buffer = new char[length + 1];
            strcpy(this->buffer, peti.buffer);

            return *this;
        }

        char* GetString(){
            std::cout << buffer << std::endl;
            return buffer;
        }
};



int main(){
    SmartString elso("sziasztok barataim!");
    elso.GetString();

    SmartString masodik("szia Pisti!");
    masodik.GetString();

    masodik = elso;

    masodik.GetString();

    return 0;
}


