#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() {
        cout << "Orang membuat pesan." << endl;
    }
};

class joko : public seseorang {
public:
    void pesan() override {
        cout << "Pesan dari joko." << endl;
    }
};