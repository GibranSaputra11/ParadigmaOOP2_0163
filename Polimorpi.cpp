#include <iostream>
using namespace std;

class seseorang{
public: 
    // Virtual void pesan() = 0;
    virtual void pesan(){
        cout << "Pesan dari seseorang" << endl;
    } 
};

class joko :public seseorang{
public:
    void pesan(){
        cout << "Pesan ini dari joko" << endl;
    }
};

class lia :public seseorang{
public:
    void pesan(){
        cout << "Pesan dari lia" << endl;
    }
};