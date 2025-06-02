#include <iostream>
using namespace std;

class AbstraksiKlas{
private: string x, y;

public:

    // method untuk mengisi nilai
    // private member
    void setXY(string a, string b){
        x = a;
        y = b;
    }
    // menampilkan nilai
    void dispaly(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main(){
    AbstraksiKlas ak;
    ak.setXY("Yogyakarta", "Kampus");
    ak.dispaly();

    return 0;
};