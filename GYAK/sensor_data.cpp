#include <iostream>

class SensorData{
    private:
        int* data;
        int size;

    public:
        SensorData(int s){
            std::cout << "an object was created" << std::endl;
            size = s;
            data = new int[size];
            for(int i = 0; i < size; i++){
                data[i] = 0;
            }
        }

        ~SensorData(){
            delete[] data;
        }

        SensorData(const SensorData& jozsi){
            size = jozsi.size;
            data = new int[size];

            for(int i = 0; i < size; i++){
                data[i] = jozsi.data[i];
            }
        }

        SensorData& operator= (const SensorData& pisti){
            if(this == &pisti){
                return *this;
            }
            delete[] data;
            size = pisti.size;
            data = new int[size];

            for(int i = 0; i < size; i++){
                data[i] = pisti.data[i];
            }

            return *this;

        }

        int GetData(int index){
            if( index < size && index >= 0 ){
                std::cout << "Data:" << data[index] << std::endl;
                return data[index];
            }
            return -1;
        }

        void SetData(int index, int value){
            if( index < size && index >= 0 ){
                data[index] = value;
            }
            else std::cout << "index is not appropriate!" << std::endl;
        }
};

void ProcessData( SensorData TempData ){
    TempData.SetData(0, 100);
    TempData.GetData(0);    // std::cout << "Processed" << TempData.GetData(0) << std::endl;
}

int main(){
    SensorData haliho(5);

    haliho.SetData(0, 23);
    haliho.GetData(0);

    ProcessData(haliho);

    haliho.GetData(0);

    SensorData csa(3);

    csa = haliho;
    haliho.SetData(4, 45);

    csa.GetData(4);







    return 0;
}




