#include <iostream>
#include <string>
using namespace std;
class data {
public:
    int roll;
private:
    int section;
protected:
    string name;
public:
    data() {
        roll = 543;
        section = 13;
        name = "lohitha";
    }

    void display() {
        cout << section << endl;
    }
};
class details : public data {
public:
    void show() {
        cout << name << endl;
    }
};
int main() {
    data d;
    d.display();
    details e;
    e.show();
    cout << d.roll;
    return 0;
}
