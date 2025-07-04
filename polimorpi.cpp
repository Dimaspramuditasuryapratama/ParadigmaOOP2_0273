#include <iostream>
using namespace std;

class seseorang {
public:
    //virtual void pesan() = 0;
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

class lia : public seseorang {
    public:
    void pesan() {
        cout << "Pesan dari lia." << endl;
    }
};

int main() {
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan(); // Output: Pesan dari joko.
    obyek = &b;
    obyek->pesan(); // Output: Pesan dari lia.
    //a.seseorang::pesan(); // Output: Orang membuat pesan.
    //b.seseorang::pesan(); // Output: Orang membuat pesan.

    return 0;
}