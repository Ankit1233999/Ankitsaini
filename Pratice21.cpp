#include <iostream>
using namespace std;
Class Temperature{
    private:
    double celsius;
    public:
    voidsetCelsius(double c){
        celsius =c;}
        doublegetCelsius(){
            return celsius;
        }
        doublegetFharenheit(){
            return celsius *9/5 +32;
        }    
    };
    int main(){
        Temperature 't';
        t.setCelsius(-500);

    }

