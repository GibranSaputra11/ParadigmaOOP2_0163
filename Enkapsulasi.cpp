#include <iostream>
using namespace std;

class remoteLampu{
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value){
        saklarNo[i] = value;
    }
    string getSaklarNo(int i, string value){
        return saklarNo[i];
    }
};

int main(){
    remoteLampu lampuRumah;
}