#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan()  {
        cout << "Hallo saya Function dari base class.";
    }
};

class derivedClass : public baseClass {
    public:
    void perkenalan()  {
        cout << "Hallo saya Function dari derived class.";
    }
};

int main() {
    derivedClass a;
    a.perkenalan(); // Output: Hallo saya Function dari derived class.

    return 0;
}